/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * libqmi-glib -- GLib/GIO based library to control QMI devices
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2019 Eric Caruso <ejcaruso@chromium.org>
 */

#include "qmi-qrtr-utils.h"

#include <stdlib.h>
#include <string.h>

#include "qmi-errors.h"
#include "qmi-error-types.h"
#include "qmi-qrtr-control-socket.h"
#include "qmi-qrtr-node.h"

#define QRTR_URI_PREFIX QRTR_URI_SCHEME "://"

gchar *
qrtr_get_uri_for_node (guint32 node_id)
{
    return g_strdup_printf (QRTR_URI_PREFIX "%" G_GUINT32_FORMAT, node_id);
}

gboolean
qrtr_get_node_for_uri (const gchar *name,
                       guint32     *node_id)
{
    const gchar *start;
    gchar       *endp = NULL;
    guint        tmp_node_id;

    if (g_ascii_strncasecmp (name, QRTR_URI_PREFIX, strlen (QRTR_URI_PREFIX)) != 0)
        return FALSE;

    start = name + strlen (QRTR_URI_PREFIX);
    tmp_node_id = strtoul (start, &endp, 10);
    if (endp == start)
        return FALSE;

    if (node_id)
        *node_id = tmp_node_id;

    return TRUE;
}

/*****************************************************************************/

typedef struct {
    QrtrControlSocket *socket;
    guint              node_added_id;
    guint32            node_wanted;
} NodeOpenContext;

static void
node_open_context_free (NodeOpenContext *ctx)
{
    g_signal_handler_disconnect (ctx->socket, ctx->node_added_id);
    g_clear_object (&ctx->socket);
    g_slice_free (NodeOpenContext, ctx);
}

QrtrNode *
qrtr_node_for_id_finish (GAsyncResult  *res,
                         GError       **error)
{
    return g_task_propagate_pointer (G_TASK (res), error);
}

static gboolean
timeout_cb (GTask *task)
{
    NodeOpenContext *ctx;

    ctx = g_task_get_task_data (task);
    g_task_return_new_error (task,
                             QMI_CORE_ERROR,
                             QMI_CORE_ERROR_TIMEOUT,
                             "QRTR node %u did not appear on the bus",
                             ctx->node_wanted);
    g_object_unref (task);

    return G_SOURCE_REMOVE;
}

static void
node_added_cb (QrtrControlSocket *socket,
               guint              node_id,
               GTask             *task)
{
    NodeOpenContext *ctx;

    ctx = g_task_get_task_data (task);
    if (node_id != ctx->node_wanted)
        return;

    g_task_return_pointer (task,
                           qrtr_control_socket_get_node (ctx->socket, node_id),
                           g_object_unref);
    g_object_unref (task);
}

void
qrtr_node_for_id (guint32              node_id,
                  guint                timeout,
                  GCancellable        *cancellable,
                  GAsyncReadyCallback  callback,
                  gpointer             user_data)
{
    GTask             *task;
    QrtrControlSocket *socket;
    guint              node_added_id;
    NodeOpenContext   *ctx;
    GError            *error = NULL;

    task = g_task_new (NULL, cancellable, callback, user_data);

    socket = qrtr_control_socket_new (&error);
    if (!socket) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    node_added_id = g_signal_connect (socket,
                                      QRTR_CONTROL_SOCKET_SIGNAL_NODE_ADDED,
                                      G_CALLBACK (node_added_cb),
                                      task);
    if (!node_added_id) {
        g_clear_object (&socket);
        g_task_return_new_error (task,
                                 QMI_CORE_ERROR,
                                 QMI_CORE_ERROR_FAILED,
                                 "Couldn't listen to QRTR bus");
        g_object_unref (task);
        return;
    }

    ctx = g_slice_new (NodeOpenContext);
    ctx->socket = socket;
    ctx->node_added_id = node_added_id;
    ctx->node_wanted = node_id;
    g_task_set_task_data (task, ctx, (GDestroyNotify)node_open_context_free);

    if (timeout > 0)
        g_timeout_add_seconds (timeout, (GSourceFunc)timeout_cb, g_object_ref (task));
}
