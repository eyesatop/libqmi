# -*- Mode: python; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the Free
# Software Foundation; either version 2 of the License, or (at your option) any
# later version.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
# details.
#
# You should have received a copy of the GNU Lesser General Public License along
# with this program; if not, write to the Free Software Foundation, Inc., 51
# Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
#
# Copyright (C) 2012 Lanedo GmbH
# Copyright (C) 2012-2017 Aleksander Morgado <aleksander@aleksander.es>
#

import string

from Message import Message
import utils

"""
The MessageList class handles the generation of all messages for a given
specific service
"""
class MessageList:

    """
    Constructor
    """
    def __init__(self, objects_dictionary, common_objects_dictionary):
        self.list = []
        self.message_id_enum_name = None
        self.indication_id_enum_name = None
        self.service = None

        # Loop items in the list, creating Message objects for the messages
        # and looking for the special 'Message-ID-Enum' type
        for object_dictionary in objects_dictionary:
            if object_dictionary['type'] == 'Message' or \
               object_dictionary['type'] == 'Indication':
                message = Message(object_dictionary, common_objects_dictionary)
                self.list.append(message)
            elif object_dictionary['type'] == 'Message-ID-Enum':
                self.message_id_enum_name = object_dictionary['name']
            elif object_dictionary['type'] == 'Indication-ID-Enum':
                self.indication_id_enum_name = object_dictionary['name']
            elif object_dictionary['type'] == 'Service':
                self.service = object_dictionary['name']

        # We NEED the Message-ID-Enum field
        if self.message_id_enum_name is None:
            raise ValueError('Missing Message-ID-Enum field')

        # We NEED the Service field
        if self.service is None:
            raise ValueError('Missing Service field')


    """
    Emit the enumeration of the messages found in the specific service
    """
    def emit_message_ids_enum(self, f):
        translations = { 'enum_type' : utils.build_camelcase_name (self.message_id_enum_name) }
        template = (
            '\n'
            'typedef enum {\n')
        for message in self.list:
            if message.type == 'Message':
                translations['enum_name'] = message.id_enum_name
                translations['enum_value'] = message.id
                if message.vendor is None:
                    enum_template = (
                        '    ${enum_name} = ${enum_value},\n')
                else:
                    translations['vendor'] = message.vendor
                    enum_template = (
                        '    ${enum_name} = ${enum_value}, /* vendor ${vendor} */\n')
                template += string.Template(enum_template).substitute(translations)

        template += (
            '} ${enum_type};\n'
            '\n')
        f.write(string.Template(template).substitute(translations))

    """
    Emit the enumeration of the indications found in the specific service
    """
    def emit_indication_ids_enum(self, f):
        translations = { 'enum_type' : utils.build_camelcase_name (self.indication_id_enum_name) }
        template = (
            '\n'
            'typedef enum {\n')
        for message in self.list:
            if message.type == 'Indication':
                translations['enum_name'] = message.id_enum_name
                translations['enum_value'] = message.id
                enum_template = (
                    '    ${enum_name} = ${enum_value},\n')
                template += string.Template(enum_template).substitute(translations)

        template += (
            '} ${enum_type};\n'
            '\n')
        f.write(string.Template(template).substitute(translations))


    """
    Emit the method responsible for getting a printable representation of all
    messages of a given service.
    """
    def __emit_get_printable(self, hfile, cfile):
        translations = { 'service'    : self.service.lower() }

        template = (
            '\n'
            '#if defined (LIBQMI_GLIB_COMPILATION)\n'
            '\n'
            'G_GNUC_INTERNAL\n'
            'gchar *__qmi_message_${service}_get_printable (\n'
            '    QmiMessage *self,\n'
            '    QmiMessageContext *context,\n'
            '    const gchar *line_prefix);\n'
            '\n'
            '#endif\n'
            '\n')
        hfile.write(string.Template(template).substitute(translations))

        template = (
            '\n'
            'gchar *\n'
            '__qmi_message_${service}_get_printable (\n'
            '    QmiMessage *self,\n'
            '    QmiMessageContext *context,\n'
            '    const gchar *line_prefix)\n'
            '{\n'
            '    if (qmi_message_is_indication (self)) {\n'
            '        switch (qmi_message_get_message_id (self)) {\n')

        for message in self.list:
            if message.type == 'Indication':
                translations['enum_name'] = message.id_enum_name
                translations['message_underscore'] = utils.build_underscore_name (message.name)
                inner_template = (
                    '        case ${enum_name}:\n'
                    '            return indication_${message_underscore}_get_printable (self, line_prefix);\n')
                template += string.Template(inner_template).substitute(translations)

        template += (
            '        default:\n'
            '             return NULL;\n'
            '        }\n'
            '    } else {\n'
            '        guint16 vendor_id;\n'
            '\n'
            '        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);\n'
            '        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {\n'
            '            switch (qmi_message_get_message_id (self)) {\n')

        for message in self.list:
            if message.type == 'Message' and message.vendor is None:
                translations['enum_name'] = message.id_enum_name
                translations['message_underscore'] = utils.build_underscore_name (message.name)
                inner_template = (
                    '            case ${enum_name}:\n'
                    '                return message_${message_underscore}_get_printable (self, line_prefix);\n')
                template += string.Template(inner_template).substitute(translations)

        template += (
            '             default:\n'
            '                 return NULL;\n'
            '            }\n'
            '        } else {\n')

        for message in self.list:
            if message.type == 'Message' and message.vendor is not None:
                translations['enum_name'] = message.id_enum_name
                translations['message_underscore'] = utils.build_underscore_name (message.name)
                translations['message_vendor'] = message.vendor
                inner_template = (
                    '            if (vendor_id == ${message_vendor} && (qmi_message_get_message_id (self) == ${enum_name}))\n'
                    '                return message_${message_underscore}_get_printable (self, line_prefix);\n')
                template += string.Template(inner_template).substitute(translations)

        template += (
            '            return NULL;\n'
            '        }\n'
            '    }\n'
            '}\n')
        cfile.write(string.Template(template).substitute(translations))


    """
    Emit the method responsible for checking whether a given message is abortable
    """
    def __emit_is_abortable(self, hfile, cfile):

        # do nothing if no abortable messages in service
        for message in self.list:
            if message.type == 'Message' and message.abort:
                break
        else:
            return

        translations = { 'service'    : self.service.lower() }

        template = (
            '\n'
            '#if defined (LIBQMI_GLIB_COMPILATION)\n'
            '\n'
            'G_GNUC_INTERNAL\n'
            'gboolean __qmi_message_${service}_is_abortable (\n'
            '    QmiMessage *self,\n'
            '    QmiMessageContext *context);\n'
            '\n'
            '#endif\n'
            '\n')
        hfile.write(string.Template(template).substitute(translations))

        template = (
            '\n'
            'gboolean\n'
            '__qmi_message_${service}_is_abortable (\n'
            '    QmiMessage *self,\n'
            '    QmiMessageContext *context)\n'
            '{\n'
            '    guint16 vendor_id;\n'
            '\n'
            '    vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);\n'
            '    if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {\n'
            '        switch (qmi_message_get_message_id (self)) {\n')

        for message in self.list:
            if message.type == 'Message' and message.vendor is None:
                # Only add if it's abortable
                if message.abort:
                    translations['enum_name'] = message.id_enum_name
                    inner_template = (
                        '        case ${enum_name}:\n'
                        '            return TRUE;\n')
                    template += string.Template(inner_template).substitute(translations)

        template += (
            '        default:\n'
            '            return FALSE;\n'
            '        }\n'
            '    } else {\n')

        for message in self.list:
            if message.type == 'Message' and message.vendor is not None:
                # Only add if it's abortable
                if message.abort:
                    translations['enum_name'] = message.id_enum_name
                    translations['message_vendor'] = message.vendor
                    inner_template = (
                        '        if (vendor_id == ${message_vendor} && (qmi_message_get_message_id (self) == ${enum_name})) {\n'
                        '            return TRUE;\n'
                        '        }\n')
                    template += string.Template(inner_template).substitute(translations)

        template += (
            '        return FALSE;\n'
            '    }\n'
            '}\n')
        cfile.write(string.Template(template).substitute(translations))


    """
    Emit the message list handling implementation
    """
    def emit(self, hfile, cfile):
        # First, emit the message/indication IDs enum
        self.emit_message_ids_enum(cfile)
        if self.indication_id_enum_name is not None:
            self.emit_indication_ids_enum(cfile)

        # Then, emit all message handlers
        for message in self.list:
            message.emit(hfile, cfile)

        # First, emit common class code
        utils.add_separator(hfile, 'Service-specific utils', self.service);
        utils.add_separator(cfile, 'Service-specific utils', self.service);
        self.__emit_get_printable(hfile, cfile)
        self.__emit_is_abortable(hfile, cfile)

    """
    Emit the sections
    """
    def emit_sections(self, sfile):
        # Emit all message sections
        for message in self.list:
            message.emit_sections(sfile)
