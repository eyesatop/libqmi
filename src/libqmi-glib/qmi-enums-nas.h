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
 * Copyright (C) 2012 Google Inc.
 * Copyright (C) 2012-2017 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _LIBQMI_GLIB_QMI_ENUMS_NAS_H_
#define _LIBQMI_GLIB_QMI_ENUMS_NAS_H_

#if !defined (__LIBQMI_GLIB_H_INSIDE__) && !defined (LIBQMI_GLIB_COMPILATION)
#error "Only <libqmi-glib.h> can be included directly."
#endif

/**
 * SECTION: qmi-enums-nas
 * @title: NAS enumerations and flags
 *
 * This section defines enumerations and flags used in the NAS service
 * interface.
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Event Report' indication */

/**
 * QmiNasRadioInterface:
 * @QMI_NAS_RADIO_INTERFACE_UNKNOWN: Not known or not needed.
 * @QMI_NAS_RADIO_INTERFACE_NONE: None, no service.
 * @QMI_NAS_RADIO_INTERFACE_CDMA_1X: CDMA2000 1X.
 * @QMI_NAS_RADIO_INTERFACE_CDMA_1XEVDO: CDMA2000 HRPD (1xEV-DO).
 * @QMI_NAS_RADIO_INTERFACE_AMPS: AMPS.
 * @QMI_NAS_RADIO_INTERFACE_GSM: GSM.
 * @QMI_NAS_RADIO_INTERFACE_UMTS: UMTS.
 * @QMI_NAS_RADIO_INTERFACE_LTE: LTE.
 * @QMI_NAS_RADIO_INTERFACE_TD_SCDMA: TD-SCDMA.
 * @QMI_NAS_RADIO_INTERFACE_LTE: LTE.
 * @QMI_NAS_RADIO_INTERFACE_5GNR: 5G NR. Since 1.26.
 *
 * Radio interface technology.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_RADIO_INTERFACE_UNKNOWN     = -1,
    QMI_NAS_RADIO_INTERFACE_NONE        = 0x00,
    QMI_NAS_RADIO_INTERFACE_CDMA_1X     = 0x01,
    QMI_NAS_RADIO_INTERFACE_CDMA_1XEVDO = 0x02,
    QMI_NAS_RADIO_INTERFACE_AMPS        = 0x03,
    QMI_NAS_RADIO_INTERFACE_GSM         = 0x04,
    QMI_NAS_RADIO_INTERFACE_UMTS        = 0x05,
    QMI_NAS_RADIO_INTERFACE_LTE         = 0x08,
    QMI_NAS_RADIO_INTERFACE_TD_SCDMA    = 0x09,
    QMI_NAS_RADIO_INTERFACE_5GNR        = 0x0C,
} QmiNasRadioInterface;

/**
 * qmi_nas_radio_interface_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasActiveBand:
 * @QMI_NAS_ACTIVE_BAND_BC_0: Band class 0.
 * @QMI_NAS_ACTIVE_BAND_BC_1: Band class 1.
 * @QMI_NAS_ACTIVE_BAND_BC_2: Band class 2.
 * @QMI_NAS_ACTIVE_BAND_BC_3: Band class 3.
 * @QMI_NAS_ACTIVE_BAND_BC_4: Band class 4.
 * @QMI_NAS_ACTIVE_BAND_BC_5: Band class 5.
 * @QMI_NAS_ACTIVE_BAND_BC_6: Band class 6.
 * @QMI_NAS_ACTIVE_BAND_BC_7: Band class 7.
 * @QMI_NAS_ACTIVE_BAND_BC_8: Band class 8.
 * @QMI_NAS_ACTIVE_BAND_BC_9: Band class 9.
 * @QMI_NAS_ACTIVE_BAND_BC_10: Band class 10.
 * @QMI_NAS_ACTIVE_BAND_BC_11: Band class 11.
 * @QMI_NAS_ACTIVE_BAND_BC_12: Band class 12.
 * @QMI_NAS_ACTIVE_BAND_BC_13: Band class 13.
 * @QMI_NAS_ACTIVE_BAND_BC_14: Band class 14.
 * @QMI_NAS_ACTIVE_BAND_BC_15: Band class 15.
 * @QMI_NAS_ACTIVE_BAND_BC_16: Band class 16.
 * @QMI_NAS_ACTIVE_BAND_BC_17: Band class 17.
 * @QMI_NAS_ACTIVE_BAND_BC_18: Band class 18.
 * @QMI_NAS_ACTIVE_BAND_BC_19: Band class 19.
 * @QMI_NAS_ACTIVE_BAND_GSM_450: GSM 450.
 * @QMI_NAS_ACTIVE_BAND_GSM_480: GSM 480.
 * @QMI_NAS_ACTIVE_BAND_GSM_750: GSM 750.
 * @QMI_NAS_ACTIVE_BAND_GSM_850: GSM 850.
 * @QMI_NAS_ACTIVE_BAND_GSM_900_EXTENDED: GSM 900 (Extended).
 * @QMI_NAS_ACTIVE_BAND_GSM_900_PRIMARY: GSM 900 (Primary).
 * @QMI_NAS_ACTIVE_BAND_GSM_900_RAILWAYS: GSM 900 (Railways).
 * @QMI_NAS_ACTIVE_BAND_GSM_DCS_1800: GSM 1800.
 * @QMI_NAS_ACTIVE_BAND_GSM_PCS_1900: GSM 1900.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_2100: WCDMA 2100.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_PCS_1900: WCDMA PCS 1900.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_DCS_1800: WCDMA DCS 1800.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_1700_US: WCDMA 1700 (U.S.).
 * @QMI_NAS_ACTIVE_BAND_WCDMA_850: WCDMA 850.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_800: WCDMA 800.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_2600: WCDMA 2600.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_900: WCDMA 900.
 * @QMI_NAS_ACTIVE_BAND_WCDMA_1700_JAPAN: WCDMA 1700 (Japan).
 * @QMI_NAS_ACTIVE_BAND_WCDMA_1500_JAPAN: WCDMA 1500 (Japan).
 * @QMI_NAS_ACTIVE_BAND_WCDMA_850_JAPAN: WCDMA 850 (Japan).
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_1: EUTRAN band 1.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_2: EUTRAN band 2.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_3: EUTRAN band 3.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_4: EUTRAN band 4.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_5: EUTRAN band 5.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_6: EUTRAN band 6.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_7: EUTRAN band 7.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_8: EUTRAN band 8.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_9: EUTRAN band 9.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_10: EUTRAN band 10.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_11: EUTRAN band 11.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_12: EUTRAN band 12.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_13: EUTRAN band 13.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_14: EUTRAN band 14.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_17: EUTRAN band 17.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_18: EUTRAN band 18.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_19: EUTRAN band 19.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_20: EUTRAN band 20.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_21: EUTRAN band 21.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_23: EUTRAN band 23.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_24: EUTRAN band 24.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_25: EUTRAN band 25.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_26: EUTRAN band 26.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_27: EUTRAN band 27.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_28: EUTRAN band 28.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_29: EUTRAN band 29.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_30: EUTRAN band 30.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_31: EUTRAN band 31.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_32: EUTRAN band 32.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_33: EUTRAN band 33.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_34: EUTRAN band 34.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_35: EUTRAN band 35.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_36: EUTRAN band 36.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_37: EUTRAN band 37.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_38: EUTRAN band 38.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_39: EUTRAN band 39.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_40: EUTRAN band 40.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_41: EUTRAN band 41.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_42: EUTRAN band 42.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_43: EUTRAN band 43.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_46: EUTRAN band 46.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_47: EUTRAN band 47.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_48: EUTRAN band 48.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_66: EUTRAN band 66.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_71: EUTRAN band 71.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_125: EUTRAN band 125.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_126: EUTRAN band 126.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_127: EUTRAN band 127.
 * @QMI_NAS_ACTIVE_BAND_EUTRAN_250: EUTRAN band 250.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_A: TD-SCDMA Band A.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_B: TD-SCDMA Band B.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_C: TD-SCDMA Band C.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_D: TD-SCDMA Band D.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_E: TD-SCDMA Band E.
 * @QMI_NAS_ACTIVE_BAND_TDSCDMA_F: TD-SCDMA Band F.
 *
 * Band classes.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_ACTIVE_BAND_BC_0 = 0,
    QMI_NAS_ACTIVE_BAND_BC_1 = 1,
    QMI_NAS_ACTIVE_BAND_BC_2 = 2,
    QMI_NAS_ACTIVE_BAND_BC_3 = 3,
    QMI_NAS_ACTIVE_BAND_BC_4 = 4,
    QMI_NAS_ACTIVE_BAND_BC_5 = 5,
    QMI_NAS_ACTIVE_BAND_BC_6 = 6,
    QMI_NAS_ACTIVE_BAND_BC_7 = 7,
    QMI_NAS_ACTIVE_BAND_BC_8 = 8,
    QMI_NAS_ACTIVE_BAND_BC_9 = 9,
    QMI_NAS_ACTIVE_BAND_BC_10 = 10,
    QMI_NAS_ACTIVE_BAND_BC_11 = 11,
    QMI_NAS_ACTIVE_BAND_BC_12 = 12,
    QMI_NAS_ACTIVE_BAND_BC_13 = 13,
    QMI_NAS_ACTIVE_BAND_BC_14 = 14,
    QMI_NAS_ACTIVE_BAND_BC_15 = 15,
    QMI_NAS_ACTIVE_BAND_BC_16 = 16,
    QMI_NAS_ACTIVE_BAND_BC_17 = 17,
    QMI_NAS_ACTIVE_BAND_BC_18 = 18,
    QMI_NAS_ACTIVE_BAND_BC_19 = 19,
    QMI_NAS_ACTIVE_BAND_GSM_450 = 40,
    QMI_NAS_ACTIVE_BAND_GSM_480 = 41,
    QMI_NAS_ACTIVE_BAND_GSM_750 = 42,
    QMI_NAS_ACTIVE_BAND_GSM_850 = 43,
    QMI_NAS_ACTIVE_BAND_GSM_900_EXTENDED = 44,
    QMI_NAS_ACTIVE_BAND_GSM_900_PRIMARY = 45,
    QMI_NAS_ACTIVE_BAND_GSM_900_RAILWAYS = 46,
    QMI_NAS_ACTIVE_BAND_GSM_DCS_1800 = 47,
    QMI_NAS_ACTIVE_BAND_GSM_PCS_1900 = 48,
    QMI_NAS_ACTIVE_BAND_WCDMA_2100 = 80,
    QMI_NAS_ACTIVE_BAND_WCDMA_PCS_1900 = 81,
    QMI_NAS_ACTIVE_BAND_WCDMA_DCS_1800 = 82,
    QMI_NAS_ACTIVE_BAND_WCDMA_1700_US = 83,
    QMI_NAS_ACTIVE_BAND_WCDMA_850 = 84,
    QMI_NAS_ACTIVE_BAND_WCDMA_800 = 85,
    QMI_NAS_ACTIVE_BAND_WCDMA_2600 = 86,
    QMI_NAS_ACTIVE_BAND_WCDMA_900 = 87,
    QMI_NAS_ACTIVE_BAND_WCDMA_1700_JAPAN = 88,
    QMI_NAS_ACTIVE_BAND_WCDMA_1500_JAPAN = 90,
    QMI_NAS_ACTIVE_BAND_WCDMA_850_JAPAN = 91,
    QMI_NAS_ACTIVE_BAND_EUTRAN_1 = 120,
    QMI_NAS_ACTIVE_BAND_EUTRAN_2 = 121,
    QMI_NAS_ACTIVE_BAND_EUTRAN_3 = 122,
    QMI_NAS_ACTIVE_BAND_EUTRAN_4 = 123,
    QMI_NAS_ACTIVE_BAND_EUTRAN_5 = 124,
    QMI_NAS_ACTIVE_BAND_EUTRAN_6 = 125,
    QMI_NAS_ACTIVE_BAND_EUTRAN_7 = 126,
    QMI_NAS_ACTIVE_BAND_EUTRAN_8 = 127,
    QMI_NAS_ACTIVE_BAND_EUTRAN_9 = 128,
    QMI_NAS_ACTIVE_BAND_EUTRAN_10 = 129,
    QMI_NAS_ACTIVE_BAND_EUTRAN_11 = 130,
    QMI_NAS_ACTIVE_BAND_EUTRAN_12 = 131,
    QMI_NAS_ACTIVE_BAND_EUTRAN_13 = 132,
    QMI_NAS_ACTIVE_BAND_EUTRAN_14 = 133,
    QMI_NAS_ACTIVE_BAND_EUTRAN_17 = 134,
    QMI_NAS_ACTIVE_BAND_EUTRAN_18 = 143,
    QMI_NAS_ACTIVE_BAND_EUTRAN_19 = 144,
    QMI_NAS_ACTIVE_BAND_EUTRAN_20 = 145,
    QMI_NAS_ACTIVE_BAND_EUTRAN_21 = 146,
    QMI_NAS_ACTIVE_BAND_EUTRAN_23 = 152,
    QMI_NAS_ACTIVE_BAND_EUTRAN_24 = 147,
    QMI_NAS_ACTIVE_BAND_EUTRAN_25 = 148,
    QMI_NAS_ACTIVE_BAND_EUTRAN_26 = 153,
    QMI_NAS_ACTIVE_BAND_EUTRAN_27 = 164,
    QMI_NAS_ACTIVE_BAND_EUTRAN_28 = 158,
    QMI_NAS_ACTIVE_BAND_EUTRAN_29 = 159,
    QMI_NAS_ACTIVE_BAND_EUTRAN_30 = 160,
    QMI_NAS_ACTIVE_BAND_EUTRAN_31 = 165,
    QMI_NAS_ACTIVE_BAND_EUTRAN_32 = 154,
    QMI_NAS_ACTIVE_BAND_EUTRAN_33 = 135,
    QMI_NAS_ACTIVE_BAND_EUTRAN_34 = 136,
    QMI_NAS_ACTIVE_BAND_EUTRAN_35 = 137,
    QMI_NAS_ACTIVE_BAND_EUTRAN_36 = 138,
    QMI_NAS_ACTIVE_BAND_EUTRAN_37 = 139,
    QMI_NAS_ACTIVE_BAND_EUTRAN_38 = 140,
    QMI_NAS_ACTIVE_BAND_EUTRAN_39 = 141,
    QMI_NAS_ACTIVE_BAND_EUTRAN_40 = 142,
    QMI_NAS_ACTIVE_BAND_EUTRAN_41 = 149,
    QMI_NAS_ACTIVE_BAND_EUTRAN_42 = 150,
    QMI_NAS_ACTIVE_BAND_EUTRAN_43 = 151,
    QMI_NAS_ACTIVE_BAND_EUTRAN_46 = 163,
    QMI_NAS_ACTIVE_BAND_EUTRAN_47 = 166,
    QMI_NAS_ACTIVE_BAND_EUTRAN_48 = 167,
    QMI_NAS_ACTIVE_BAND_EUTRAN_66 = 161,
    QMI_NAS_ACTIVE_BAND_EUTRAN_71 = 168,
    QMI_NAS_ACTIVE_BAND_EUTRAN_125 = 155,
    QMI_NAS_ACTIVE_BAND_EUTRAN_126 = 156,
    QMI_NAS_ACTIVE_BAND_EUTRAN_127 = 157,
    QMI_NAS_ACTIVE_BAND_EUTRAN_250 = 162,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_A = 200,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_B = 201,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_C = 202,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_D = 203,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_E = 204,
    QMI_NAS_ACTIVE_BAND_TDSCDMA_F = 205
} QmiNasActiveBand;

/**
 * qmi_nas_active_band_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasNetworkServiceDomain:
 * @QMI_NAS_NETWORK_SERVICE_DOMAIN_NONE: No service.
 * @QMI_NAS_NETWORK_SERVICE_DOMAIN_CS: Circuit switched.
 * @QMI_NAS_NETWORK_SERVICE_DOMAIN_PS: Packet switched.
 * @QMI_NAS_NETWORK_SERVICE_DOMAIN_CS_PS: Circuit and packet switched.
 * @QMI_NAS_NETWORK_SERVICE_DOMAIN_UNKNOWN: Unknown service.
 *
 * Network Service Domain.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_SERVICE_DOMAIN_NONE    = 0x00,
    QMI_NAS_NETWORK_SERVICE_DOMAIN_CS      = 0x01,
    QMI_NAS_NETWORK_SERVICE_DOMAIN_PS      = 0x02,
    QMI_NAS_NETWORK_SERVICE_DOMAIN_CS_PS   = 0x03,
    QMI_NAS_NETWORK_SERVICE_DOMAIN_UNKNOWN = 0x04,
} QmiNasNetworkServiceDomain;

/**
 * qmi_nas_network_service_domain_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasEvdoSinrLevel:
 * @QMI_NAS_EVDO_SINR_LEVEL_0: -9 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_1: -6 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_2: -4.5 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_3: -3 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_4: -2 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_5: +1 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_6: +3 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_7: +6 dB.
 * @QMI_NAS_EVDO_SINR_LEVEL_8: +9 dB.
 *
 * EV-DO SINR level.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_EVDO_SINR_LEVEL_0 = 0,
    QMI_NAS_EVDO_SINR_LEVEL_1 = 1,
    QMI_NAS_EVDO_SINR_LEVEL_2 = 2,
    QMI_NAS_EVDO_SINR_LEVEL_3 = 3,
    QMI_NAS_EVDO_SINR_LEVEL_4 = 4,
    QMI_NAS_EVDO_SINR_LEVEL_5 = 5,
    QMI_NAS_EVDO_SINR_LEVEL_6 = 6,
    QMI_NAS_EVDO_SINR_LEVEL_7 = 7,
    QMI_NAS_EVDO_SINR_LEVEL_8 = 8
} QmiNasEvdoSinrLevel;

/**
 * qmi_nas_evdo_sinr_level_get_string:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Signal Strength' request/response */

/**
 * QmiNasSignalStrengthRequest:
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_NONE: None.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_RSSI: Request RSSI information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_ECIO: Request ECIO information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_IO: Request IO information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_SINR: Request SINR information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_ERROR_RATE: Request error rate information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_RSRQ: Request RSRQ information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_LTE_SNR: Request LTE SNR information.
 * @QMI_NAS_SIGNAL_STRENGTH_REQUEST_LTE_RSRP: Request LTE RSRP information.
 *
 * Extra information to request when gathering Signal Strength.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_NONE       = 0,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_RSSI       = 1 << 0,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_ECIO       = 1 << 1,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_IO         = 1 << 2,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_SINR       = 1 << 3,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_ERROR_RATE = 1 << 4,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_RSRQ       = 1 << 5,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_LTE_SNR    = 1 << 6,
    QMI_NAS_SIGNAL_STRENGTH_REQUEST_LTE_RSRP   = 1 << 7
} QmiNasSignalStrengthRequest;

/**
 * qmi_nas_signal_strength_request_build_string_from_mask:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Network Scan' request/response */

/**
 * QmiNasNetworkScanType:
 * @QMI_NAS_NETWORK_SCAN_TYPE_GSM: GSM network.
 * @QMI_NAS_NETWORK_SCAN_TYPE_UMTS: UMTS network.
 * @QMI_NAS_NETWORK_SCAN_TYPE_LTE: LTE network.
 * @QMI_NAS_NETWORK_SCAN_TYPE_TD_SCDMA: TD-SCDMA network.
 *
 * Flags to use when specifying which networks to scan.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_SCAN_TYPE_GSM      = 1 << 0,
    QMI_NAS_NETWORK_SCAN_TYPE_UMTS     = 1 << 1,
    QMI_NAS_NETWORK_SCAN_TYPE_LTE      = 1 << 2,
    QMI_NAS_NETWORK_SCAN_TYPE_TD_SCDMA = 1 << 3
} QmiNasNetworkScanType;

/**
 * qmi_nas_network_scan_type_build_string_from_mask:
 *
 * Since: 1.0
 */

/**
 * QmiNasNetworkScanResult:
 * @QMI_NAS_NETWORK_SCAN_RESULT_SUCCESS: Success.
 * @QMI_NAS_NETWORK_SCAN_RESULT_ABORT: Abort.
 * @QMI_NAS_NETWORK_SCAN_RESULT_RADIO_LINK_FAILURE: Radio link failure.
 *
 * Network scan result.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_NETWORK_SCAN_RESULT_SUCCESS            = 0,
    QMI_NAS_NETWORK_SCAN_RESULT_ABORT              = 1,
    QMI_NAS_NETWORK_SCAN_RESULT_RADIO_LINK_FAILURE = 2,
} QmiNasNetworkScanResult;

/**
 * qmi_nas_network_scan_result_get_string:
 *
 * Since: 1.24
 */

/**
 * QmiNasNetworkStatus:
 * @QMI_NAS_NETWORK_STATUS_CURRENT_SERVING: Network is in use, current serving.
 * @QMI_NAS_NETWORK_STATUS_AVAILABLE: Network is vailable.
 * @QMI_NAS_NETWORK_STATUS_HOME: Network is home network.
 * @QMI_NAS_NETWORK_STATUS_ROAMING: Network is a roaming network.
 * @QMI_NAS_NETWORK_STATUS_FORBIDDEN: Network is forbidden.
 * @QMI_NAS_NETWORK_STATUS_NOT_FORBIDDEN: Network is not forbidden.
 * @QMI_NAS_NETWORK_STATUS_PREFERRED: Network is preferred.
 * @QMI_NAS_NETWORK_STATUS_NOT_PREFERRED: Network is not preferred.
 *
 * Flags to specify the status of a given network.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_STATUS_CURRENT_SERVING = 1 << 0,
    QMI_NAS_NETWORK_STATUS_AVAILABLE       = 1 << 1,
    QMI_NAS_NETWORK_STATUS_HOME            = 1 << 2,
    QMI_NAS_NETWORK_STATUS_ROAMING         = 1 << 3,
    QMI_NAS_NETWORK_STATUS_FORBIDDEN       = 1 << 4,
    QMI_NAS_NETWORK_STATUS_NOT_FORBIDDEN   = 1 << 5,
    QMI_NAS_NETWORK_STATUS_PREFERRED       = 1 << 6,
    QMI_NAS_NETWORK_STATUS_NOT_PREFERRED   = 1 << 7
} QmiNasNetworkStatus;

/**
 * qmi_nas_network_status_build_string_from_mask:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Initiate Network Register' request/response */

/**
 * QmiNasNetworkRegisterType:
 * @QMI_NAS_NETWORK_REGISTER_TYPE_AUTOMATIC: Automatic network registration.
 * @QMI_NAS_NETWORK_REGISTER_TYPE_MANUAL: Manual network registration.
 *
 * Type of network registration.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_REGISTER_TYPE_AUTOMATIC = 0x01,
    QMI_NAS_NETWORK_REGISTER_TYPE_MANUAL    = 0x02
} QmiNasNetworkRegisterType;

/**
 * qmi_nas_network_register_type_get_string:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Attach Detach' request/response */

/**
 * QmiNasPsAttachAction:
 * @QMI_NAS_PS_ATTACH_ACTION_ATTACH: Attach the PS domain.
 * @QMI_NAS_PS_ATTACH_ACTION_DETACH: Detach the PS domain.
 *
 * Packet Switched domain attach/detach action.
 *
 * Since: 1.20
 */
typedef enum {
    QMI_NAS_PS_ATTACH_ACTION_ATTACH = 0x01,
    QMI_NAS_PS_ATTACH_ACTION_DETACH = 0x02
} QmiNasPsAttachAction;

/**
 * qmi_nas_ps_attach_action_get_string:
 *
 * Since: 1.20
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Serving System' request/response */

/**
 * QmiNasRegistrationState:
 * @QMI_NAS_REGISTRATION_STATE_NOT_REGISTERED: Not registered.
 * @QMI_NAS_REGISTRATION_STATE_REGISTERED: Registered.
 * @QMI_NAS_REGISTRATION_STATE_NOT_REGISTERED_SEARCHING: Searching.
 * @QMI_NAS_REGISTRATION_STATE_REGISTRATION_DENIED: Registration denied.
 * @QMI_NAS_REGISTRATION_STATE_UNKNOWN: Unknown.
 *
 * Status of the network registration.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_REGISTRATION_STATE_NOT_REGISTERED           = 0x00,
    QMI_NAS_REGISTRATION_STATE_REGISTERED               = 0x01,
    QMI_NAS_REGISTRATION_STATE_NOT_REGISTERED_SEARCHING = 0x02,
    QMI_NAS_REGISTRATION_STATE_REGISTRATION_DENIED      = 0x03,
    QMI_NAS_REGISTRATION_STATE_UNKNOWN                  = 0x04
} QmiNasRegistrationState;

/**
 * qmi_nas_registration_state_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasAttachState:
 * @QMI_NAS_ATTACH_STATE_UNKNOWN: Unknown attach state.
 * @QMI_NAS_ATTACH_STATE_ATTACHED: Attached.
 * @QMI_NAS_ATTACH_STATE_DETACHED: Detached.
 *
 * Domain attach state.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_ATTACH_STATE_UNKNOWN  = 0x00,
    QMI_NAS_ATTACH_STATE_ATTACHED = 0x01,
    QMI_NAS_ATTACH_STATE_DETACHED = 0x02,
} QmiNasAttachState;

/**
 * qmi_nas_attach_state_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasNetworkType:
 * @QMI_NAS_NETWORK_TYPE_UNKNOWN: Unknown.
 * @QMI_NAS_NETWORK_TYPE_3GPP2: 3GPP2 network.
 * @QMI_NAS_NETWORK_TYPE_3GPP: 3GPP network.
 *
 * Type of network.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_TYPE_UNKNOWN = 0x00,
    QMI_NAS_NETWORK_TYPE_3GPP2   = 0x01,
    QMI_NAS_NETWORK_TYPE_3GPP    = 0x02,
} QmiNasNetworkType;

/**
 * qmi_nas_network_type_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasRoamingIndicatorStatus:
 * @QMI_NAS_ROAMING_INDICATOR_STATUS_ON: Roaming.
 * @QMI_NAS_ROAMING_INDICATOR_STATUS_OFF: Home.
 *
 * Status of the roaming indication.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_ROAMING_INDICATOR_STATUS_ON  = 0x00,
    QMI_NAS_ROAMING_INDICATOR_STATUS_OFF = 0x01,
    /* next values only for 3GPP2 */
} QmiNasRoamingIndicatorStatus;

/**
 * qmi_nas_roaming_indicator_status_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasDataCapability:
 * @QMI_NAS_DATA_CAPABILITY_NONE: None or unknown.
 * @QMI_NAS_DATA_CAPABILITY_GPRS: GPRS.
 * @QMI_NAS_DATA_CAPABILITY_EDGE: EDGE.
 * @QMI_NAS_DATA_CAPABILITY_HSDPA: HSDPA.
 * @QMI_NAS_DATA_CAPABILITY_HSUPA: HSUPA.
 * @QMI_NAS_DATA_CAPABILITY_WCDMA: WCDMA.
 * @QMI_NAS_DATA_CAPABILITY_CDMA: CDMA.
 * @QMI_NAS_DATA_CAPABILITY_EVDO_REV_0: EV-DO revision 0.
 * @QMI_NAS_DATA_CAPABILITY_EVDO_REV_A: EV-DO revision A.
 * @QMI_NAS_DATA_CAPABILITY_GSM: GSM.
 * @QMI_NAS_DATA_CAPABILITY_EVDO_REV_B: EV-DO revision B.
 * @QMI_NAS_DATA_CAPABILITY_LTE: LTE.
 * @QMI_NAS_DATA_CAPABILITY_HSDPA_PLUS: HSDPA+.
 * @QMI_NAS_DATA_CAPABILITY_DC_HSDPA_PLUS: DC-HSDPA+.
 *
 * Data capability of the network.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_DATA_CAPABILITY_NONE          = 0x00,
    QMI_NAS_DATA_CAPABILITY_GPRS          = 0x01,
    QMI_NAS_DATA_CAPABILITY_EDGE          = 0x02,
    QMI_NAS_DATA_CAPABILITY_HSDPA         = 0x03,
    QMI_NAS_DATA_CAPABILITY_HSUPA         = 0x04,
    QMI_NAS_DATA_CAPABILITY_WCDMA         = 0x05,
    QMI_NAS_DATA_CAPABILITY_CDMA          = 0x06,
    QMI_NAS_DATA_CAPABILITY_EVDO_REV_0    = 0x07,
    QMI_NAS_DATA_CAPABILITY_EVDO_REV_A    = 0x08,
    QMI_NAS_DATA_CAPABILITY_GSM           = 0x09,
    QMI_NAS_DATA_CAPABILITY_EVDO_REV_B    = 0x0A,
    QMI_NAS_DATA_CAPABILITY_LTE           = 0x0B,
    QMI_NAS_DATA_CAPABILITY_HSDPA_PLUS    = 0x0C,
    QMI_NAS_DATA_CAPABILITY_DC_HSDPA_PLUS = 0x0D
} QmiNasDataCapability;

/**
 * qmi_nas_data_capability_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasServiceStatus:
 * @QMI_NAS_SERVICE_STATUS_NONE: No service.
 * @QMI_NAS_SERVICE_STATUS_LIMITED: Limited service.
 * @QMI_NAS_SERVICE_STATUS_AVAILABLE: Service available.
 * @QMI_NAS_SERVICE_STATUS_LIMITED_REGIONAL: Limited regional service.
 * @QMI_NAS_SERVICE_STATUS_POWER_SAVE: Device in power save mode.
 *
 * Status of the service.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_SERVICE_STATUS_NONE             = 0x00,
    QMI_NAS_SERVICE_STATUS_LIMITED          = 0x01,
    QMI_NAS_SERVICE_STATUS_AVAILABLE        = 0x02,
    QMI_NAS_SERVICE_STATUS_LIMITED_REGIONAL = 0x03,
    QMI_NAS_SERVICE_STATUS_POWER_SAVE       = 0x04
} QmiNasServiceStatus;

/**
 * qmi_nas_service_status_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasHdrPersonality:
 * @QMI_NAS_HDR_PERSONALITY_UNKNOWN: Unknown.
 * @QMI_NAS_HDR_PERSONALITY_HRPD: HRPD.
 * @QMI_NAS_HDR_PERSONALITY_EHRPD: eHRPD.
 *
 * HDR personality type.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_HDR_PERSONALITY_UNKNOWN = 0x00,
    QMI_NAS_HDR_PERSONALITY_HRPD    = 0x01,
    QMI_NAS_HDR_PERSONALITY_EHRPD   = 0x02,
} QmiNasHdrPersonality;

/**
 * qmi_nas_hdr_personality_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasCallBarringStatus:
 * @QMI_NAS_CALL_BARRING_STATUS_NORMAL_ONLY: Normal calls only.
 * @QMI_NAS_CALL_BARRING_STATUS_EMERGENCY_ONLY: Emergency calls only.
 * @QMI_NAS_CALL_BARRING_STATUS_NO_CALLS: No calls allowed.
 * @QMI_NAS_CALL_BARRING_STATUS_ALL_CALLS: All calls allowed.
 * @QMI_NAS_CALL_BARRING_STATUS_UNKNOWN: Unknown.
 *
 * Status of the call barring functionality.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_CALL_BARRING_STATUS_NORMAL_ONLY    = 0x00,
    QMI_NAS_CALL_BARRING_STATUS_EMERGENCY_ONLY = 0x01,
    QMI_NAS_CALL_BARRING_STATUS_NO_CALLS       = 0x02,
    QMI_NAS_CALL_BARRING_STATUS_ALL_CALLS      = 0x03,
    QMI_NAS_CALL_BARRING_STATUS_UNKNOWN        = -1
} QmiNasCallBarringStatus;

/**
 * qmi_nas_call_barring_status_get_string:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Home Network' request/response */

/**
 * QmiNasNetworkDescriptionDisplay:
 * @QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_NO: Don't display.
 * @QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_YES: Display.
 * @QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_UNKNOWN: Unknown.
 *
 * Setup to define whether the network description should be displayed.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_NO      = 0x00,
    QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_YES     = 0x01,
    QMI_NAS_NETWORK_DESCRIPTION_DISPLAY_UNKNOWN = 0xFF
} QmiNasNetworkDescriptionDisplay;

/**
 * qmi_nas_network_description_display_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasNetworkDescriptionEncoding:
 * @QMI_NAS_NETWORK_DESCRIPTION_ENCODING_UNSPECIFIED: Unspecified.
 * @QMI_NAS_NETWORK_DESCRIPTION_ENCODING_ASCII7: ASCII-7.
 * @QMI_NAS_NETWORK_DESCRIPTION_ENCODING_UNICODE: Unicode.
 * @QMI_NAS_NETWORK_DESCRIPTION_ENCODING_GSM: GSM 7-bit.
 *
 * Type of encoding used in the network description.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_DESCRIPTION_ENCODING_UNSPECIFIED = 0x00,
    QMI_NAS_NETWORK_DESCRIPTION_ENCODING_ASCII7      = 0x01,
    QMI_NAS_NETWORK_DESCRIPTION_ENCODING_UNICODE     = 0x04,
    QMI_NAS_NETWORK_DESCRIPTION_ENCODING_GSM         = 0x09
} QmiNasNetworkDescriptionEncoding;

/**
 * qmi_nas_network_description_encoding_get_string:
 *
 * Since: 1.0
 */

/**
 * qmi_nas_read_string_from_network_description_encoded_array:
 * @encoding: a #QmiNasNetworkDescriptionEncoding.
 * @array: a #GArray with the encoded data.
 *
 * Converts the encoded data in @array to UTF-8 and returns a newly allocated
 * NUL-terminated string.
 *
 * Returns: the UTF-8 encoded string, or %NULL if an error happened during the conversion.
 * The returned value should be freed with g_free().
 *
 * Since: 1.24.6
 */
gchar *qmi_nas_read_string_from_network_description_encoded_array (QmiNasNetworkDescriptionEncoding  encoding,
                                                                   const GArray                     *array);

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Technology Preference' request/response */

/**
 * QmiNasRadioTechnologyPreference:
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_AUTO: Automatic selection.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_3GPP2: 3GPP2 technology.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_3GPP: 3GPP technology.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_AMPS_OR_GSM: AMPS if 3GPP2, GSM if 3GPP.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_CDMA_OR_WCDMA: CDMA if 3GPP2, WCDMA if 3GPP.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_HDR: CDMA EV-DO.
 * @QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_LTE: LTE.
 *
 * Flags to specify the radio technology preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_AUTO          = 0,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_3GPP2         = 1 << 0,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_3GPP          = 1 << 1,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_AMPS_OR_GSM   = 1 << 2,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_CDMA_OR_WCDMA = 1 << 3,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_HDR           = 1 << 4,
    QMI_NAS_RADIO_TECHNOLOGY_PREFERENCE_LTE           = 1 << 5
} QmiNasRadioTechnologyPreference;

/**
 * qmi_nas_radio_technology_preference_build_string_from_mask:
 *
 * Since: 1.0
 */

/**
 * QmiNasPreferenceDuration:
 * @QMI_NAS_PREFERENCE_DURATION_PERMANENT: Permanent.
 * @QMI_NAS_PREFERENCE_DURATION_POWER_CYCLE: Until the next power cycle.
 * @QMI_NAS_PREFERENCE_DURATION_ONE_CALL: Until end of call.
 * @QMI_NAS_PREFERENCE_DURATION_ONE_CALL_OR_TIME: Until end of call or a specified time.
 * @QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_1: Internal reason 1, one call.
 * @QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_2: Internal reason 2, one call.
 * @QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_3: Internal reason 3, one call.
 *
 * Duration of the preference setting.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_PREFERENCE_DURATION_PERMANENT           = 0x00,
    QMI_NAS_PREFERENCE_DURATION_POWER_CYCLE         = 0x01,
    QMI_NAS_PREFERENCE_DURATION_ONE_CALL            = 0x02,
    QMI_NAS_PREFERENCE_DURATION_ONE_CALL_OR_TIME    = 0x03,
    QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_1 = 0x04,
    QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_2 = 0x05,
    QMI_NAS_PREFERENCE_DURATION_INTERNAL_ONE_CALL_3 = 0x06
} QmiNasPreferenceDuration;

/**
 * qmi_nas_preference_duration_get_string:
 *
 * Since: 1.0
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get/Set System Selection Preference'
 * requests/responses */

/**
 * QmiNasRatModePreference:
 * @QMI_NAS_RAT_MODE_PREFERENCE_CDMA_1X: CDMA2000 1X.
 * @QMI_NAS_RAT_MODE_PREFERENCE_CDMA_1XEVDO: CDMA2000 HRPD (1xEV-DO).
 * @QMI_NAS_RAT_MODE_PREFERENCE_GSM: GSM.
 * @QMI_NAS_RAT_MODE_PREFERENCE_UMTS: UMTS.
 * @QMI_NAS_RAT_MODE_PREFERENCE_LTE: LTE.
 * @QMI_NAS_RAT_MODE_PREFERENCE_TD_SCDMA: TD-SCDMA.
 * @QMI_NAS_RAT_MODE_PREFERENCE_5GNR: 5GNR. Since 1.26.
 *
 * Flags specifying radio access technology mode preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_RAT_MODE_PREFERENCE_CDMA_1X     = 1 << 0,
    QMI_NAS_RAT_MODE_PREFERENCE_CDMA_1XEVDO = 1 << 1,
    QMI_NAS_RAT_MODE_PREFERENCE_GSM         = 1 << 2,
    QMI_NAS_RAT_MODE_PREFERENCE_UMTS        = 1 << 3,
    QMI_NAS_RAT_MODE_PREFERENCE_LTE         = 1 << 4,
    QMI_NAS_RAT_MODE_PREFERENCE_TD_SCDMA    = 1 << 5,
    QMI_NAS_RAT_MODE_PREFERENCE_5GNR        = 1 << 6,
} QmiNasRatModePreference;

/**
 * qmi_nas_rat_mode_preference_build_string_from_mask:
 *
 * Since: 1.0
 */

/**
 * QmiNasCdmaPrlPreference:
 * @QMI_NAS_CDMA_PRL_PREFERENCE_A_SIDE_ONLY: System A only.
 * @QMI_NAS_CDMA_PRL_PREFERENCE_B_SIDE_ONLY: System B only.
 * @QMI_NAS_CDMA_PRL_PREFERENCE_ANY: Any system.
 *
 * Flags specifying the preference when using CDMA Band Class 0.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_CDMA_PRL_PREFERENCE_A_SIDE_ONLY = 0x0001,
    QMI_NAS_CDMA_PRL_PREFERENCE_B_SIDE_ONLY = 0x0002,
    QMI_NAS_CDMA_PRL_PREFERENCE_ANY         = 0x3FFF
} QmiNasCdmaPrlPreference;

/**
 * qmi_nas_cdma_prl_preference_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasRoamingPreference:
 * @QMI_NAS_ROAMING_PREFERENCE_OFF: Only non-roaming networks.
 * @QMI_NAS_ROAMING_PREFERENCE_NOT_OFF: Only roaming networks.
 * @QMI_NAS_ROAMING_PREFERENCE_NOT_FLASHING: Only non-roaming networks or not flashing.
 * @QMI_NAS_ROAMING_PREFERENCE_ANY: Don't filter by roaming when acquiring networks.
 *
 * Roaming preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_ROAMING_PREFERENCE_OFF          = 0x01,
    QMI_NAS_ROAMING_PREFERENCE_NOT_OFF      = 0x02,
    QMI_NAS_ROAMING_PREFERENCE_NOT_FLASHING = 0x03,
    QMI_NAS_ROAMING_PREFERENCE_ANY          = 0xFF
} QmiNasRoamingPreference;

/**
 * qmi_nas_roaming_preference_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasNetworkSelectionPreference:
 * @QMI_NAS_NETWORK_SELECTION_PREFERENCE_AUTOMATIC: Automatic.
 * @QMI_NAS_NETWORK_SELECTION_PREFERENCE_MANUAL: Manual.
 *
 * Network selection preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_NETWORK_SELECTION_PREFERENCE_AUTOMATIC = 0x00,
    QMI_NAS_NETWORK_SELECTION_PREFERENCE_MANUAL    = 0x01
} QmiNasNetworkSelectionPreference;

/**
 * qmi_nas_network_selection_preference_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasChangeDuration:
 * @QMI_NAS_CHANGE_DURATION_PERMANENT: Permanent.
 * @QMI_NAS_CHANGE_DURATION_POWER_CYCLE: Until the next power cycle.
 *
 * Duration of the change setting.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_CHANGE_DURATION_POWER_CYCLE = 0x00,
    QMI_NAS_CHANGE_DURATION_PERMANENT   = 0x01
} QmiNasChangeDuration;

/**
 * qmi_nas_change_duration_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasServiceDomainPreference:
 * @QMI_NAS_SERVICE_DOMAIN_PREFERENCE_CS_ONLY: Circuit-switched only.
 * @QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_ONLY: Packet-switched only.
 * @QMI_NAS_SERVICE_DOMAIN_PREFERENCE_CS_PS: Circuit-switched and packet-switched.
 * @QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_ATTACH: Packet-switched attach.
 * @QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_DETACH:Packet-switched dettach.
 *
 * Service domain preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_SERVICE_DOMAIN_PREFERENCE_CS_ONLY   = 0x00,
    QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_ONLY   = 0x01,
    QMI_NAS_SERVICE_DOMAIN_PREFERENCE_CS_PS     = 0x02,
    QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_ATTACH = 0x03,
    QMI_NAS_SERVICE_DOMAIN_PREFERENCE_PS_DETACH = 0x04,
} QmiNasServiceDomainPreference;

/**
 * qmi_nas_service_domain_preference_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasGsmWcdmaAcquisitionOrderPreference:
 * @QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_AUTOMATIC: Automatic.
 * @QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_GSM: GSM first, then WCDMA.
 * @QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_WCDMA: WCDMA first, then GSM.
 *
 * GSM/WCDMA acquisition order preference.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_AUTOMATIC = 0x00,
    QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_GSM       = 0x01,
    QMI_NAS_GSM_WCDMA_ACQUISITION_ORDER_PREFERENCE_WCDMA     = 0x02
} QmiNasGsmWcdmaAcquisitionOrderPreference;

/**
 * qmi_nas_gsm_wcdma_acquisition_order_preference_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasTdScdmaBandPreference:
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_A: Band A.
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_B: Band B.
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_C: Band C.
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_D: Band D.
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_E: Band E.
 * @QMI_NAS_TD_SCDMA_BAND_PREFERENCE_F: Band F.
 *
 * Flags to specify TD-SCDMA-specific frequency band preferences.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_A = 1 << 0,
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_B = 1 << 1,
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_C = 1 << 2,
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_D = 1 << 3,
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_E = 1 << 4,
    QMI_NAS_TD_SCDMA_BAND_PREFERENCE_F = 1 << 5
} QmiNasTdScdmaBandPreference;

/**
 * qmi_nas_td_scdma_band_preference_build_string_from_mask:
 *
 * Since: 1.0
 */

/**
 * QmiNasVoiceDomainPreference:
 * @QMI_NAS_VOICE_DOMAIN_PREFERENCE_CS_ONLY: Circuit-switched voice only
 * @QMI_NAS_VOICE_DOMAIN_PREFERENCE_PS_ONLY: Packet-switched voice only.
 * @QMI_NAS_VOICE_DOMAIN_PREFERENCE_CS_PREFERRED: Circuit-switched voice is preferred.
 * @QMI_NAS_VOICE_DOMAIN_PREFERENCE_PS_PREFERRED: Packet-switched voice is preferred.
 *
 * Voice domain preference.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_VOICE_DOMAIN_PREFERENCE_CS_ONLY      = 0x00,
    QMI_NAS_VOICE_DOMAIN_PREFERENCE_PS_ONLY      = 0x01,
    QMI_NAS_VOICE_DOMAIN_PREFERENCE_CS_PREFERRED = 0x02,
    QMI_NAS_VOICE_DOMAIN_PREFERENCE_PS_PREFERRED = 0x03,
} QmiNasVoiceDomainPreference;

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get System Info' request/response */

/**
 * QmiNasNetworkSelectionRegistrationRestriction:
 * @QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_UNRESTRICTED: Device follows the normal registration process.
 * @QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_CAMPED_ONLY: Device camps on the network according to its provisioning, but does not register.
 * @QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_LIMITED: Device selects the network for limited service.
 *
 * Registration restriction.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_UNRESTRICTED = 0x00,
    QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_CAMPED_ONLY  = 0x01,
    QMI_NAS_NETWORK_SELECTION_REGISTRATION_RESTRICTION_LIMITED      = 0x02,
} QmiNasNetworkSelectionRegistrationRestriction;

/**
 * QmiNasLteRegistrationDomain:
 * @QMI_NAS_LTE_REGISTRATION_DOMAIN_NOT_APPLICABLE: Not applicable since the UE is not in "Camp Only" mode.
 * @QMI_NAS_LTE_REGISTRATION_DOMAIN_CS_ONLY: UE is in "Camp Only" mode and the PLMN can provide CS service only.
 * @QMI_NAS_LTE_REGISTRATION_DOMAIN_PS_ONLY: UE is in "Camp Only" mode and the PLMN can provide PS service only.
 * @QMI_NAS_LTE_REGISTRATION_DOMAIN_CS_PS: UE is in "Camp Only" mode and the PLMN can provide CS and PS service.
 * @QMI_NAS_LTE_REGISTRATION_DOMAIN_LIMITED_SERVICE: UE is in "Camp Only" mode but the PLMN cannot provide any service.
 *
 * LTE registration domain.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_LTE_REGISTRATION_DOMAIN_NOT_APPLICABLE  = 0x00,
    QMI_NAS_LTE_REGISTRATION_DOMAIN_CS_ONLY         = 0x01,
    QMI_NAS_LTE_REGISTRATION_DOMAIN_PS_ONLY         = 0x02,
    QMI_NAS_LTE_REGISTRATION_DOMAIN_CS_PS           = 0x03,
    QMI_NAS_LTE_REGISTRATION_DOMAIN_LIMITED_SERVICE = 0x04,
} QmiNasLteRegistrationDomain;

/**
 * QmiNasRoamingStatus:
 * @QMI_NAS_ROAMING_STATUS_OFF: Off.
 * @QMI_NAS_ROAMING_STATUS_ON: On.
 * @QMI_NAS_ROAMING_STATUS_BLINK: Blinking.
 * @QMI_NAS_ROAMING_STATUS_OUT_OF_NEIGHBORHOOD: Out of neighborhood.
 * @QMI_NAS_ROAMING_STATUS_OUT_OF_BUILDING: Out of building.
 * @QMI_NAS_ROAMING_STATUS_PREFERRED_SYSTEM: Preferred system.
 * @QMI_NAS_ROAMING_STATUS_AVAILABLE_SYSTEM: Available system.
 * @QMI_NAS_ROAMING_STATUS_ALLIANCE_PARTNER: Alliance partner.
 * @QMI_NAS_ROAMING_STATUS_PREMIUM_PARTNER: Premium partner.
 * @QMI_NAS_ROAMING_STATUS_FULL_SERVICE: Full service.
 * @QMI_NAS_ROAMING_STATUS_PARTIAL_SERVICE: Partial service.
 * @QMI_NAS_ROAMING_STATUS_BANNER_ON: Banner on.
 * @QMI_NAS_ROAMING_STATUS_BANNER_OFF: Banner off.
 *
 * Roaming status.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_ROAMING_STATUS_OFF                 = 0x00,
    QMI_NAS_ROAMING_STATUS_ON                  = 0x01,
    /* Next ones only for 3GPP2 */
    QMI_NAS_ROAMING_STATUS_BLINK               = 0x02,
    QMI_NAS_ROAMING_STATUS_OUT_OF_NEIGHBORHOOD = 0x03,
    QMI_NAS_ROAMING_STATUS_OUT_OF_BUILDING     = 0x04,
    QMI_NAS_ROAMING_STATUS_PREFERRED_SYSTEM    = 0x05,
    QMI_NAS_ROAMING_STATUS_AVAILABLE_SYSTEM    = 0x06,
    QMI_NAS_ROAMING_STATUS_ALLIANCE_PARTNER    = 0x07,
    QMI_NAS_ROAMING_STATUS_PREMIUM_PARTNER     = 0x08,
    QMI_NAS_ROAMING_STATUS_FULL_SERVICE        = 0x09,
    QMI_NAS_ROAMING_STATUS_PARTIAL_SERVICE     = 0x0A,
    QMI_NAS_ROAMING_STATUS_BANNER_ON           = 0x0B,
    QMI_NAS_ROAMING_STATUS_BANNER_OFF          = 0x0C
} QmiNasRoamingStatus;

/**
 * qmi_nas_roaming_status_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasLteCellAccessStatus:
 * @QMI_NAS_CELL_ACCESS_STATUS_NORMAL_ONLY: Access is allowed for normal calls only.
 * @QMI_NAS_CELL_ACCESS_STATUS_EMERGENCY_ONLY: Access is allowed for emergency calls only.
 * @QMI_NAS_CELL_ACCESS_STATUS_NO_CALLS: Access is not allowed for any call type.
 * @QMI_NAS_CELL_ACCESS_STATUS_ALL_CALLS: Access is allowed for all call types.
 * @QMI_NAS_CELL_ACCESS_STATUS_UNKNOWN: Unknown.
 *
 * Cell access status for LTE calls.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_CELL_ACCESS_STATUS_NORMAL_ONLY    = 0x00,
    QMI_NAS_CELL_ACCESS_STATUS_EMERGENCY_ONLY = 0x01,
    QMI_NAS_CELL_ACCESS_STATUS_NO_CALLS       = 0x02,
    QMI_NAS_CELL_ACCESS_STATUS_ALL_CALLS      = 0x03,
    QMI_NAS_CELL_ACCESS_STATUS_UNKNOWN        = 0xFF,
} QmiNasLteCellAccessStatus;

/**
 * QmiNasHdrProtocolRevision:
 * @QMI_NAS_HDR_PROTOCOL_REVISION_NONE: None.
 * @QMI_NAS_HDR_PROTOCOL_REVISION_REL_0: HDR Rel 0.
 * @QMI_NAS_HDR_PROTOCOL_REVISION_REL_A: HDR Rel A.
 * @QMI_NAS_HDR_PROTOCOL_REVISION_REL_B: HDR Rel B.
 *
 * HDR protocol revision.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_HDR_PROTOCOL_REVISION_NONE  = 0x00,
    QMI_NAS_HDR_PROTOCOL_REVISION_REL_0 = 0x01,
    QMI_NAS_HDR_PROTOCOL_REVISION_REL_A = 0x02,
    QMI_NAS_HDR_PROTOCOL_REVISION_REL_B = 0x03
} QmiNasHdrProtocolRevision;

/**
 * qmi_nas_hdr_protocol_revision_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasWcdmaHsService:
 * @QMI_NAS_WCDMA_HS_SERVICE_HSDPA_HSUPA_UNSUPPORTED: HSDPA and HSUPA not supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_HSDPA_SUPPORTED: HSDPA supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_HSUPA_SUPPORTED: HSUPA supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_HSDPA_HSUPA_SUPPORTED: HSDPA and HSUPA supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_HSDPA_PLUS_SUPPORTED: HSDPA+ supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_HSDPA_PLUS_HSUPA_SUPPORTED: HSDPA+ and HSUPA supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_DC_HSDPA_PLUS_SUPPORTED: DC-HSDPA+ supported.
 * @QMI_NAS_WCDMA_HS_SERVICE_DC_HSDPA_PLUS_HSUPA_SUPPORTED: DC-HSDPA+ and HSUPA supported.
 *
 * Call status on high speed.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_WCDMA_HS_SERVICE_HSDPA_HSUPA_UNSUPPORTED       = 0x00,
    QMI_NAS_WCDMA_HS_SERVICE_HSDPA_SUPPORTED               = 0x01,
    QMI_NAS_WCDMA_HS_SERVICE_HSUPA_SUPPORTED               = 0x02,
    QMI_NAS_WCDMA_HS_SERVICE_HSDPA_HSUPA_SUPPORTED         = 0x03,
    QMI_NAS_WCDMA_HS_SERVICE_HSDPA_PLUS_SUPPORTED          = 0x04,
    QMI_NAS_WCDMA_HS_SERVICE_HSDPA_PLUS_HSUPA_SUPPORTED    = 0x05,
    QMI_NAS_WCDMA_HS_SERVICE_DC_HSDPA_PLUS_SUPPORTED       = 0x06,
    QMI_NAS_WCDMA_HS_SERVICE_DC_HSDPA_PLUS_HSUPA_SUPPORTED = 0x07
} QmiNasWcdmaHsService;

/**
 * qmi_nas_wcdma_hs_service_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasCellBroadcastCapability:
 * @QMI_NAS_CELL_BROADCAST_CAPABILITY_UNKNOWN: Unknown.
 * @QMI_NAS_CELL_BROADCAST_CAPABILITY_OFF: Cell broadcast not supported.
 * @QMI_NAS_CELL_BROADCAST_CAPABILITY_ON: Cell broadcast supported.
 *
 * Cell broadcast support.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_CELL_BROADCAST_CAPABILITY_UNKNOWN = 0x00,
    QMI_NAS_CELL_BROADCAST_CAPABILITY_OFF     = 0x01,
    QMI_NAS_CELL_BROADCAST_CAPABILITY_ON      = 0x02
} QmiNasCellBroadcastCapability;

/**
 * qmi_nas_cell_broadcast_capability_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasSimRejectState:
 * @QMI_NAS_SIM_REJECT_STATE_SIM_UNAVAILABLE: SIM not available.
 * @QMI_NAS_SIM_REJECT_STATE_SIM_AVAILABLE: SIM available.
 * @QMI_NAS_SIM_REJECT_STATE_SIM_CS_INVALID: SIM invalid for circuit-switched connections.
 * @QMI_NAS_SIM_REJECT_STATE_SIM_PS_INVALID: SIM invalid for packet-switched connections.
 * @QMI_NAS_SIM_REJECT_STATE_SIM_CS_PS_INVALID: SIM invalid for circuit-switched and packet-switched connections.
 *
 * Reject information of the SIM.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_SIM_REJECT_STATE_SIM_UNAVAILABLE   = 0,
    QMI_NAS_SIM_REJECT_STATE_SIM_AVAILABLE     = 1,
    QMI_NAS_SIM_REJECT_STATE_SIM_CS_INVALID    = 2,
    QMI_NAS_SIM_REJECT_STATE_SIM_PS_INVALID    = 3,
    QMI_NAS_SIM_REJECT_STATE_SIM_CS_PS_INVALID = 4
} QmiNasSimRejectState;

/**
 * qmi_nas_sim_reject_state_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasCdmaPilotType:
 * @QMI_NAS_CDMA_PILOT_TYPE_ACTIVE: the pilot is part of the active set.
 * @QMI_NAS_CDMA_PILOT_TYPE_NEIGHBOR: the pilot is part of the neighbor set.
 *
 * The pilot set the pilot belongs to.
 *
 * Since: 1.0
 */
typedef enum {
    QMI_NAS_CDMA_PILOT_TYPE_ACTIVE   = 0,
    QMI_NAS_CDMA_PILOT_TYPE_NEIGHBOR = 1,
} QmiNasCdmaPilotType;

/**
 * qmi_nas_cdma_pilot_type_get_string:
 *
 * Since: 1.0
 */

/**
 * QmiNasDayOfWeek:
 * @QMI_NAS_DAY_OF_WEEK_MONDAY: Monday
 * @QMI_NAS_DAY_OF_WEEK_TUESDAY: Tuesday
 * @QMI_NAS_DAY_OF_WEEK_WEDNESDAY: Wednesday
 * @QMI_NAS_DAY_OF_WEEK_THURSDAY: Thursday
 * @QMI_NAS_DAY_OF_WEEK_FRIDAY: Friday
 * @QMI_NAS_DAY_OF_WEEK_SATURDAY: Saturday
 * @QMI_NAS_DAY_OF_WEEK_SUNDAY: Sunday
 *
 * The day of the week.
 *
 * Since: 1.4
 */
typedef enum {
    QMI_NAS_DAY_OF_WEEK_MONDAY    = 0,
    QMI_NAS_DAY_OF_WEEK_TUESDAY   = 1,
    QMI_NAS_DAY_OF_WEEK_WEDNESDAY = 2,
    QMI_NAS_DAY_OF_WEEK_THURSDAY  = 3,
    QMI_NAS_DAY_OF_WEEK_FRIDAY    = 4,
    QMI_NAS_DAY_OF_WEEK_SATURDAY  = 5,
    QMI_NAS_DAY_OF_WEEK_SUNDAY    = 6
} QmiNasDayOfWeek;

/**
 * qmi_nas_day_of_week_get_string:
 *
 * Since: 1.4
 */

/**
 * QmiNasDaylightSavingsAdjustment:
 * @QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_NONE: no adjustment
 * @QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_ONE_HOUR: one hour adjustment
 * @QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_TWO_HOURS: two hours adjustment
 *
 * The number of hours a time is adjusted for daylight savings.
 *
 * Since: 1.4
 */
typedef enum {
    QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_NONE      = 0,
    QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_ONE_HOUR  = 1,
    QMI_NAS_DAYLIGHT_SAVINGS_ADJUSTMENT_TWO_HOURS = 2
} QmiNasDaylightSavingsAdjustment;

/**
 * qmi_nas_daylight_savings_adjustment_get_string:
 *
 * Since: 1.4
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Cell Location Info' request/response */

/**
 * QmiNasWcdmaRrcState:
 * @QMI_NAS_WCDMA_RRC_STATE_DISCONNECTED: Disconnected.
 * @QMI_NAS_WCDMA_RRC_STATE_CELL_PCH: WCDMA RRC state is CELL_PCH.
 * @QMI_NAS_WCDMA_RRC_STATE_URA_PCH: WCDMA RRC state is URA_PCH.
 * @QMI_NAS_WCDMA_RRC_STATE_CELL_FACH: WCDMA RRC state is CELL_FACH.
 * @QMI_NAS_WCDMA_RRC_STATE_CELL_DCH: WCDMA RRC state is CELL_DCH.
 *
 * RRC state.
 *
 * Since: 1.10
 */
typedef enum {
    QMI_NAS_WCDMA_RRC_STATE_DISCONNECTED = 0,
    QMI_NAS_WCDMA_RRC_STATE_CELL_PCH     = 1,
    QMI_NAS_WCDMA_RRC_STATE_URA_PCH      = 2,
    QMI_NAS_WCDMA_RRC_STATE_CELL_FACH    = 3,
    QMI_NAS_WCDMA_RRC_STATE_CELL_DCH     = 4
} QmiNasWcdmaRrcState;

/**
 * qmi_nas_wcdma_rrc_state_get_string:
 *
 * Since: 1.10
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get LTE Cphy CA Info' request/response */

/**
 * QmiNasDLBandwidth:
 * @QMI_NAS_DL_BANDWIDTH_1_4: 1.4 MHz
 * @QMI_NAS_DL_BANDWIDTH_3: 3 MHz
 * @QMI_NAS_DL_BANDWIDTH_5: 5 MHz
 * @QMI_NAS_DL_BANDWIDTH_10: 10 MHz
 * @QMI_NAS_DL_BANDWIDTH_15: 15 MHz
 * @QMI_NAS_DL_BANDWIDTH_20: 20 MHz
 * @QMI_NAS_DL_BANDWIDTH_INVALID: Invalid
 * @QMI_NAS_DL_BANDWIDTH_UNKNOWN: Unknown
 *
 * DL Bandwidth.
 *
 * Since: 1.16
 */
typedef enum {
    QMI_NAS_DL_BANDWIDTH_1_4      = 0,
    QMI_NAS_DL_BANDWIDTH_3        = 1,
    QMI_NAS_DL_BANDWIDTH_5        = 2,
    QMI_NAS_DL_BANDWIDTH_10       = 3,
    QMI_NAS_DL_BANDWIDTH_15       = 4,
    QMI_NAS_DL_BANDWIDTH_20       = 5,
    QMI_NAS_DL_BANDWIDTH_INVALID  = 6,
    QMI_NAS_DL_BANDWIDTH_UNKNOWN  = 0xFF
} QmiNasDLBandwidth;

/**
 * qmi_nas_dl_bandwidth_get_string:
 *
 * Since: 1.16
 */

/**
 * QmiNasScellState:
 * @QMI_NAS_SCELL_STATE_DECONFIGURED: Deconfigured
 * @QMI_NAS_SCELL_STATE_DEACTIVATED: Deactivated
 * @QMI_NAS_SCELL_STATE_ACTIVATED: Activated
 *
 * SCell State.
 *
 * Since: 1.16
 */
typedef enum {
    QMI_NAS_SCELL_STATE_DECONFIGURED = 0,
    QMI_NAS_SCELL_STATE_DEACTIVATED  = 1,
    QMI_NAS_SCELL_STATE_ACTIVATED    = 2
} QmiNasScellState;

/**
 * qmi_nas_scell_state_get_string:
 *
 * Since: 1.16
 */

/*****************************************************************************/
/* Helper enums for the 'QMI NAS Get Operator Name' request/response */
/**
 * QmiNasPlmnEncodingScheme:
 * @QMI_NAS_PLMN_ENCODING_SCHEME_GSM: GSM default alphabet packed encoding (ETSI GSM 03.38)
 * @QMI_NAS_PLMN_ENCODING_SCHEME_UCS2LE: UCS-2 little-endian
 *
 * PLMN name encoding schemes.  See 3GPP TS 24.008 section "Network Name
 * information element".
 *
 * Since: 1.18
 */
typedef enum {
    QMI_NAS_PLMN_ENCODING_SCHEME_GSM    = 0,
    QMI_NAS_PLMN_ENCODING_SCHEME_UCS2LE = 1,
} QmiNasPlmnEncodingScheme;

/**
 * qmi_nas_read_string_from_plmn_encoded_array:
 * @encoding: a #QmiNasPlmnEncodingScheme.
 * @array: a #GArray with the encoded data.
 *
 * Converts the encoded data in @array to UTF-8 and returns a newly allocated
 * NUL-terminated string.
 *
 * Returns: the UTF-8 encoded string, or %NULL if an error happened during the conversion.
 * The returned value should be freed with g_free().
 *
 * Since: 1.24.6
 */
gchar *qmi_nas_read_string_from_plmn_encoded_array (QmiNasPlmnEncodingScheme  encoding,
                                                    const GArray             *array);

/**
 * QmiNasNetworkNameDisplayCondition:
 * @QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_DISPLAY_REGISTERED_PLMN_IF_KNOWN_NETWORK: if
 * set, display of the registered PLMN is required when the registered PLMN is either
 * the HPLMN or a PLMN in the Service Provider PLMN List (see EFspdi). Otherwise
 * display of the registered PLMN is not required in this case.
 * @QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_DISPLAY_SPN_NOT_REQUIRED_IF_UNKNOWN_NETWORK: if
 * set, display of the Service Provider Name is not required when registered PLMN is
 * neither HPLMN nor a PLMN in the service provider PLMN list (see EFspdi). If not set,
 * SPN display is required in this case.
 *
 * Flags used to control display of the PLMN name and Service Provider Name. See
 * 3GPP TS 51.011 descripton of the EFspn SIM file for more details.
 *
 * Since: 1.18
 */
typedef enum {
    QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_DISPLAY_REGISTERED_PLMN_IF_KNOWN_NETWORK    = 1 << 0,
    QMI_NAS_NETWORK_NAME_DISPLAY_CONDITION_DISPLAY_SPN_NOT_REQUIRED_IF_UNKNOWN_NETWORK = 1 << 1,
} QmiNasNetworkNameDisplayCondition;

/**
 * QmiNasPlmnNameCountryInitials:
 * @QMI_NAS_PLMN_NAME_COUNTRY_INITIALS_DO_NOT_ADD: don't add country initials
 * @QMI_NAS_PLMN_NAME_COUNTRY_INIITALS_ADD: add country initials
 * @QMI_NAS_PLMN_NAME_COUNTRY_INIITALS_UNSPECIFIED: unspecified
 *
 * PLMN name country initials options. See 3GPP TS 24.008
 * section "Network Name information element".
 *
 * Since: 1.18
 */
typedef enum {
    QMI_NAS_PLMN_NAME_COUNTRY_INITIALS_DO_NOT_ADD  = 0,
    QMI_NAS_PLMN_NAME_COUNTRY_INIITALS_ADD         = 1,
    QMI_NAS_PLMN_NAME_COUNTRY_INIITALS_UNSPECIFIED = 0xFF,
} QmiNasPlmnNameCountryInitials;

/**
 * QmiNasNetworkNameSource:
 * @QMI_NAS_NETWORK_NAME_SOURCE_UNKNOWN: Unknown.
 * @QMI_NAS_NETWORK_NAME_SOURCE_OPERATOR_PLMN_LIST_AND_PLMN_NETWORK_NAME: Operator PLMN list and PLMN network name.
 * @QMI_NAS_NETWORK_NAME_SOURCE_COMMON_PCN_HANDSET_SPECIFICATION_AND_OPERATOR_NAME_STRING: Common PCN handset specification and operator name string.
 * @QMI_NAS_NETWORK_NAME_SOURCE_NITZ: Network identity and time zone.
 * @QMI_NAS_NETWORK_NAME_SOURCE_SE13: GSMA SE13 table.
 * @QMI_NAS_NETWORK_NAME_SOURCE_MCC_MNC: MCC and MNC.
 * @QMI_NAS_NETWORK_NAME_SOURCE_SERVICE_PROVIDER_NAME: Service provider name.
 *
 * Network name source.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_NETWORK_NAME_SOURCE_UNKNOWN                                                   = 0x00,
    QMI_NAS_NETWORK_NAME_SOURCE_OPERATOR_PLMN_LIST_AND_PLMN_NETWORK_NAME                  = 0x01,
    QMI_NAS_NETWORK_NAME_SOURCE_COMMON_PCN_HANDSET_SPECIFICATION_AND_OPERATOR_NAME_STRING = 0x02,
    QMI_NAS_NETWORK_NAME_SOURCE_NITZ                                                      = 0x03,
    QMI_NAS_NETWORK_NAME_SOURCE_SE13                                                      = 0x04,
    QMI_NAS_NETWORK_NAME_SOURCE_MCC_MNC                                                   = 0x05,
    QMI_NAS_NETWORK_NAME_SOURCE_SERVICE_PROVIDER_NAME                                     = 0x06,
} QmiNasNetworkNameSource;

/**
 * QmiNasPlmnNameSpareBits:
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_UNKNOWN: unknown
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BIT_8: bit 8 is spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_78: bits 7 - 8 are spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_68: bits 6 - 8 are spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_58: bits 5 - 8 are spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_48: bits 4 - 8 are spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_38: bits 3 - 8 are spare
 * @QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_28: bits 2 - 8 are spare
 *
 * PLMN name spare bits in last octet of a network name.  See 3GPP TS 24.008
 * section "Network Name information element".
 *
 * Since: 1.18
 */
typedef enum {
    QMI_NAS_PLMN_NAME_SPARE_BITS_UNKNOWN = 0,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BIT_8   = 1,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_78 = 2,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_68 = 3,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_58 = 4,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_48 = 5,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_38 = 6,
    QMI_NAS_PLMN_NAME_SPARE_BITS_BITS_28 = 7,
} QmiNasPlmnNameSpareBits;

/**
 * QmiNasUsagePreference:
 * @QMI_NAS_USAGE_PREFERENCE_UNKNOWN: Unknown.
 * @QMI_NAS_USAGE_PREFERENCE_VOICE_CENTRIC: Voice centric.
 * @QMI_NAS_USAGE_PREFERENCE_DATA_CENTRIC: Data centric.
 *
 * Modem usage preference.
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_USAGE_PREFERENCE_UNKNOWN       = 0x00,
    QMI_NAS_USAGE_PREFERENCE_VOICE_CENTRIC = 0x01,
    QMI_NAS_USAGE_PREFERENCE_DATA_CENTRIC  = 0x02
} QmiNasUsagePreference;

/**
 * QmiNasSwiModemMode:
 * @QMI_NAS_SWI_MODEM_MODE_POWERING_OFF: Powering off
 * @QMI_NAS_SWI_MODEM_MODE_FACTORY_TEST: Factory test
 * @QMI_NAS_SWI_MODEM_MODE_OFFLINE: Offline
 * @QMI_NAS_SWI_MODEM_MODE_OFFLINE_AMPS: Offline AMPS
 * @QMI_NAS_SWI_MODEM_MODE_OFFLINE_CDMA: Offline CDMA
 * @QMI_NAS_SWI_MODEM_MODE_ONLINE: Online
 * @QMI_NAS_SWI_MODEM_MODE_LOW_POWER: Low power
 * @QMI_NAS_SWI_MODEM_MODE_RESETTING: Resetting
 * @QMI_NAS_SWI_MODEM_MODE_NETWORK_TEST: Network test
 * @QMI_NAS_SWI_MODEM_MODE_OFFLINE_REQUEST: Offline request
 * @QMI_NAS_SWI_MODEM_MODE_PSEUDO_ONLINE: Pseudo online
 * @QMI_NAS_SWI_MODEM_MODE_RESETTING_MODEM: Resetting modem
 * @QMI_NAS_SWI_MODEM_MODE_UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_MODEM_MODE_POWERING_OFF    = 0x00,
    QMI_NAS_SWI_MODEM_MODE_FACTORY_TEST    = 0x01,
    QMI_NAS_SWI_MODEM_MODE_OFFLINE         = 0x02,
    QMI_NAS_SWI_MODEM_MODE_OFFLINE_AMPS    = 0x03,
    QMI_NAS_SWI_MODEM_MODE_OFFLINE_CDMA    = 0x04,
    QMI_NAS_SWI_MODEM_MODE_ONLINE          = 0x05,
    QMI_NAS_SWI_MODEM_MODE_LOW_POWER       = 0x06,
    QMI_NAS_SWI_MODEM_MODE_RESETTING       = 0x07,
    QMI_NAS_SWI_MODEM_MODE_NETWORK_TEST    = 0x08,
    QMI_NAS_SWI_MODEM_MODE_OFFLINE_REQUEST = 0x09,
    QMI_NAS_SWI_MODEM_MODE_PSEUDO_ONLINE   = 0x0a,
    QMI_NAS_SWI_MODEM_MODE_RESETTING_MODEM = 0x0b,
    QMI_NAS_SWI_MODEM_MODE_UNKNOWN         = 0xff
} QmiNasSwiModemMode;

/**
 * QmiNasSwiSystemMode:
 * @QMI_NAS_SWI_SYSTEM_MODE_NO_SERVICE: No service
 * @QMI_NAS_SWI_SYSTEM_MODE_AMPS: AMPS
 * @QMI_NAS_SWI_SYSTEM_MODE_CDMA: CDMA
 * @QMI_NAS_SWI_SYSTEM_MODE_GSM: GSM
 * @QMI_NAS_SWI_SYSTEM_MODE_HDR: HDR
 * @QMI_NAS_SWI_SYSTEM_MODE_WCDMA: WCDMA
 * @QMI_NAS_SWI_SYSTEM_MODE_GPS: GPS
 * @QMI_NAS_SWI_SYSTEM_MODE_WLAN: WLAN
 * @QMI_NAS_SWI_SYSTEM_MODE_LTE: LTE
 * @QMI_NAS_SWI_SYSTEM_MODE_UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_SYSTEM_MODE_NO_SERVICE = 0x00,
    QMI_NAS_SWI_SYSTEM_MODE_AMPS       = 0x01,
    QMI_NAS_SWI_SYSTEM_MODE_CDMA       = 0x02,
    QMI_NAS_SWI_SYSTEM_MODE_GSM        = 0x03,
    QMI_NAS_SWI_SYSTEM_MODE_HDR        = 0x04,
    QMI_NAS_SWI_SYSTEM_MODE_WCDMA      = 0x05,
    QMI_NAS_SWI_SYSTEM_MODE_GPS        = 0x06,
    QMI_NAS_SWI_SYSTEM_MODE_WLAN       = 0x08,
    QMI_NAS_SWI_SYSTEM_MODE_LTE        = 0x09,
    QMI_NAS_SWI_SYSTEM_MODE_UNKNOWN    = 0xff
} QmiNasSwiSystemMode;

/**
 * QmiNasSwiImsRegState:
 * @QMI_NAS_SWI_IMS_REG_NO_SRV: No service
 * @QMI_NAS_SWI_IMS_REG_IN_PROG: In prog
 * @QMI_NAS_SWI_IMS_REG_FAILED: Failed
 * @QMI_NAS_SWI_IMS_REG_LIMITED: Limited
 * @QMI_NAS_SWI_IMS_REG_FULL_SRV: Full service
 * @QMI_NAS_SWI_IMS_REG__UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_IMS_REG_NO_SRV   = 0x00,
    QMI_NAS_SWI_IMS_REG_IN_PROG  = 0x01,
    QMI_NAS_SWI_IMS_REG_FAILED   = 0x02,
    QMI_NAS_SWI_IMS_REG_LIMITED  = 0x03,
    QMI_NAS_SWI_IMS_REG_FULL_SRV = 0x04,
    QMI_NAS_SWI_IMS_REG__UNKNOWN = 0xff
} QmiNasSwiImsRegState;

/**
 * QmiNasSwiPsState:
 * @QMI_NAS_SWI_PS_STATE_ATTACHED: Attached
 * @QMI_NAS_SWI_PS_STATE_DETACHED: Detached
 * @QMI_NAS_SWI_PS_STATE_UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_PS_STATE_ATTACHED = 0x00,
    QMI_NAS_SWI_PS_STATE_DETACHED = 0x01,
    QMI_NAS_SWI_PS_STATE_UNKNOWN  = 0xff
} QmiNasSwiPsState;

/**
 * QmiNasSwiEmmState:
 * @QMI_NAS_SWI_EMM_STATE_DEREGISTERED: Deregistered
 * @QMI_NAS_SWI_EMM_STATE_REG_INITIATED: Registration initiated
 * @QMI_NAS_SWI_EMM_STATE_REGISTERED: Registered
 * @QMI_NAS_SWI_EMM_STATE_TAU_INITIATED: TAU initiated
 * @QMI_NAS_SWI_EMM_STATE_SR_INITIATED: SR initiated
 * @QMI_NAS_SWI_EMM_STATE_DEREG_INITIATED: Deregistration initiated
 * @QMI_NAS_SWI_EMM_STATE_INVALID: Invalid
 * @QMI_NAS_SWI_EMM_STATE_UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_EMM_STATE_DEREGISTERED    = 0x00,
    QMI_NAS_SWI_EMM_STATE_REG_INITIATED   = 0x01,
    QMI_NAS_SWI_EMM_STATE_REGISTERED      = 0x02,
    QMI_NAS_SWI_EMM_STATE_TAU_INITIATED   = 0x03,
    QMI_NAS_SWI_EMM_STATE_SR_INITIATED    = 0x04,
    QMI_NAS_SWI_EMM_STATE_DEREG_INITIATED = 0x05,
    QMI_NAS_SWI_EMM_STATE_INVALID         = 0x06,
    QMI_NAS_SWI_EMM_STATE_UNKNOWN         = 0xff
} QmiNasSwiEmmState;

/**
 * QmiNasSwiEmmConnectionState:
 * @QMI_NAS_SWI_EMM_CONN_STATE_RRC_IDLE: RRC idle
 * @QMI_NAS_SWI_EMM_CONN_STATE_WAITING_RRC_CFM: Waiting RRC Cfm
 * @QMI_NAS_SWI_EMM_CONN_STATE_RRC_CONNECTING: RRC connecting
 * @QMI_NAS_SWI_EMM_CONN_STATE_RRC_RELEASING: RRC releasing
 * @QMI_NAS_SWI_EMM_CONN_STATE_UNKNOWN: Unknown
 *
 * Since: 1.24
 */
typedef enum {
    QMI_NAS_SWI_EMM_CONN_STATE_RRC_IDLE        = 0x00,
    QMI_NAS_SWI_EMM_CONN_STATE_WAITING_RRC_CFM = 0x01,
    QMI_NAS_SWI_EMM_CONN_STATE_RRC_CONNECTING  = 0x02,
    QMI_NAS_SWI_EMM_CONN_STATE_RRC_RELEASING   = 0x03,
    QMI_NAS_SWI_EMM_CONN_STATE_UNKNOWN  = 0xff
} QmiNasSwiEmmConnectionState;

#endif /* _LIBQMI_GLIB_QMI_ENUMS_NAS_H_ */
