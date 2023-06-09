#ifndef _DYN_TAG_H
#define _DYN_TAG_H

#define ACTION_MORE_TAG 0x00000000
#define ACTION_MORE1_TAG 0x00000001
#define ACTION_EXPAND_TAG 0x00000002
#define ACTION_CANCEL_TAG 0x00000003
#define ACTION_ACCEPT_TAG 0x00000004
#define ACTION_ADD_TAG 0x00000005
#define ACTION_CHECK_TAG 0x00000006
#define ACTION_CONTINUE_TAG 0x00000007
#define ACTION_DELETE_TAG 0x00000008
#define ACTION_DONE_TAG 0x00000009
#define ACTION_EDIT_TAG 0x0000000A
#define ACTION_HELP_TAG 0x0000000B
#define ACTION_SELECT_TAG 0x0000000C
#define ACTION_INFO_TAG 0x0000000D
#define ACTION_CONTACTS_TAG 0x0000000E
#define ACTION_NOT_EMPTY_TAG 0x0000000F
#define ACTION_NO_TAG 0x00000010
#define ACTION_OK_TAG 0x00000011
#define ACTION_SAVE_TAG 0x00000012
#define ACTION_SELECT1_TAG 0x00000013
#define ACTION_UNCHECK_TAG 0x00000014
#define ACTION_YES_TAG 0x00000015
#define KEY_UP_TAG 0x00000016
#define KEY_DOWN_TAG 0x00000017
#define KEY_LEFT_TAG 0x00000018
#define KEY_RIGHT_TAG 0x00000019
#define KEY_ENTER_TAG 0x0000001A
#define KEY_ESC_TAG 0x0000001B
#define KEY_DEL_TAG 0x0000001C
#define KEY_LEFT_SOFT_TAG 0x0000001D
#define KEY_RIGHT_SOFT_TAG 0x0000001E
#define KEY_TASK_TAG 0x0000001F
#define KEY_PLAY_TAG 0x00000020
#define KEY_CAMERA_FOCUS_TAG 0x00000021
#define KEY_CAMERA_SHOT_TAG 0x00000022
#define KEY_VOL_UP_TAG 0x00000023
#define KEY_VOL_DOWN_TAG 0x00000024
#define KEY_LENS_COVER_OPEN_TAG 0x00000025
#define KEY_LENS_COVER_CLOSE_TAG 0x00000026
#define KEY_STAR_TAG 0x00000027
#define KEY_DIEZ_TAG 0x00000028
#define KEY_POWER_TAG 0x00000029
#define KBD_SHORT_PRESS_TAG 0x0000002A
#define KBD_SHORT_RELEASE_TAG 0x0000002B
#define KBD_LONG_PRESS_TAG 0x0000002C
#define KBD_LONG_RELEASE_TAG 0x0000002D
#define KBD_REPEAT_TAG 0x0000002E
#define FONT_D_7R_TAG 0x0000002F
#define FONT_E_14R_TAG 0x00000030
#define FONT_E_14B_TAG 0x00000031
#define FONT_E_14I_TAG 0x00000032
#define FONT_E_14BI_TAG 0x00000033
#define FONT_E_16R_TAG 0x00000034
#define FONT_E_16B_TAG 0x00000035
#define FONT_E_16I_TAG 0x00000036
#define FONT_E_16BI_TAG 0x00000037
#define FONT_E_20R_TAG 0x00000038
#define FONT_E_20B_TAG 0x00000039
#define FONT_E_20I_TAG 0x0000003A
#define FONT_E_20BI_TAG 0x0000003B
#define FONT_D_24B_TAG 0x0000003C
#define FONT_D_29B_TAG 0x0000003D
#define FONT_ICON_16BIT_V2_TAG 0x0000003E
#define FONT_ICON_2BIT_V2_2NDLCD_TAG 0x0000003F
#define NIL_EVENT_TAG 0x00000040
#define BOOK_DESTROYED_EVENT_TAG 0x00000041
#define PAGE_ENTER_EVENT_TAG 0x00000042
#define PAGE_EXIT_EVENT_TAG 0x00000043
#define MAIN_WINDOW_GOT_FOCUS_EVENT_TAG 0x00000044
#define MAIN_WINDOW_LOST_FOCUS_EVENT_TAG 0x00000045
#define SECOND_WINDOW_GOT_FOCUS_EVENT_TAG 0x00000046
#define SECOND_WINDOW_LOST_FOCUS_EVENT_TAG 0x00000047
#define MAIN_WINDOW_MINIMIZED_EVENT_TAG 0x00000048
#define MAIN_WINDOW_RESTORED_EVENT_TAG 0x00000049
#define SECOND_WINDOW_MINIMIZED_EVENT_TAG 0x0000004A
#define SECOND_WINDOW_RESTORED_EVENT_TAG 0x0000004B
#define ACCEPT_EVENT_TAG 0x0000004C
#define PREVIOUS_EVENT_TAG 0x0000004D
#define CANCEL_EVENT_TAG 0x0000004E
#define ERROR_EVENT_TAG 0x0000004F
#define LONG_ACCEPT_EVENT_TAG 0x00000050
#define SYSTEM_MODE_CHANGED_EVENT_TAG 0x00000051
#define APP_NEEDS_VIDEOMEMORY_EVENT_TAG 0x00000052
#define USER_INACTIVITY_EVENT_TAG 0x00000053
#define MAIN_DISPLAY_OVERLAY_MODE_ON_TAG 0x00000054
#define MAIN_DISPLAY_OVERLAY_MODE_OFF_TAG 0x00000055
#define ONOFFKEY_LONG_PRESS_EVENT_TAG 0x00000056
#define VN_BUTTON_SHORT_PRESS_EVENT_TAG 0x00000057
#define VN_BUTTON_LONG_PRESS_EVENT_TAG 0x00000058
#define FLIP_OPEN_EVENT_TAG 0x00000059
#define FLIP_OPEN_SHIFT_EVENT_TAG 0x0000005A
#define FLIP_CLOSE_EVENT_TAG 0x0000005B
#define FLIP_CLOSE_SHIFT_EVENT_TAG 0x0000005C
#define JACKKNIFE_OPEN_EVENT_TAG 0x0000005D
#define JACKKNIFE_CLOSE_EVENT_TAG 0x0000005E
#define CAMERA_LENSCOVER_OPEN_EVENT_TAG 0x0000005F
#define CAMERA_LENSCOVER_CLOSE_EVENT_TAG 0x00000060
#define PHF_PRESSED_EVENT_TAG 0x00000061
#define PHF_SEND_PRESSED_EVENT_TAG 0x00000062
#define PHF_ENDOF_PRESSED_EVENT_TAG 0x00000063
#define CAMERAKEY_PRESSED_EVENT_TAG 0x00000064
#define CAMERAKEY_LONG_PRESS_EVENT_TAG 0x00000065
#define LOCKKEY_EVENT_TAG 0x00000066
#define OPERATORKEY_PRESSED_EVENT_TAG 0x00000067
#define VIDEOCALLKEY_PRESSED_EVENT_TAG 0x00000068
#define VIDEOCALLKEY_LONG_PRESS_EVENT_TAG 0x00000069
#define VOLUMEUPKEY_SHORT_PRESS_EVENT_TAG 0x0000006A
#define VOLUMEUPKEY_LONG_PRESS_EVENT_TAG 0x0000006B
#define VOLUMEUPKEY_REPEAT_EVENT_TAG 0x0000006C
#define VOLUMEDOWNKEY_SHORT_PRESS_EVENT_TAG 0x0000006D
#define VOLUMEDOWNKEY_LONG_PRESS_EVENT_TAG 0x0000006E
#define VOLUMEDOWNKEY_REPEAT_EVENT_TAG 0x0000006F
#define VOLUMEUPKEY_PRESSED_EVENT_TAG 0x00000070
#define VOLUMEUPKEY_LONG_RELEASE_EVENT_TAG 0x00000071
#define VOLUMEDOWNKEY_PRESSED_EVENT_TAG 0x00000072
#define VOLUMEDOWNKEY_LONG_RELEASE_EVENT_TAG 0x00000073
#define STARKEY_PRESSED_EVENT_TAG 0x00000074
#define PTT_KEY_PRESSED_EVENT_TAG 0x00000075
#define PTT_KEY_RELEASE_EVENT_TAG 0x00000076
#define PTT_KEY_LONG_PRESSED_EVENT_TAG 0x00000077
#define PTT_KEY_LONG_RELEASE_EVENT_TAG 0x00000078
#define MULTIKEY_PRESSED_EVENT_TAG 0x00000079
#define LAMPKEY_PRESSED_EVENT_TAG 0x0000007A
#define LAMPKEY_LONG_PRESS_EVENT_TAG 0x0000007B
#define TIMER_SLIDERRELEASED_TIMEOUT_EVENT_TAG 0x0000007C
#define ACCESSORIES_NEW_ACCESSORY_EVENT_TAG 0x0000007D
#define ACCESSORIES_NEW_SUBMENU_EVENT_TAG 0x0000007E
#define ACCESSORIES_CREATE_STATUS_TEXT_EVENT_TAG 0x0000007F
#define ACCESSORIES_STATUS_TEXT_READ_EVENT_TAG 0x00000080
#define ACCESSORIES_CREATE_DIALOG_EVENT_TAG 0x00000081
#define ACCESSORIES_REMOVE_ACCESSORY_EVENT_TAG 0x00000082
#define ACCESSORIES_ACCESSORY_CONNECTED_EVENT_TAG 0x00000083
#define ACCESSORIES_ACCESSORY_DISCONNECTED_EVENT_TAG 0x00000084
#define ACCESSORIES_MESSAGE_APPLICATION_START_EVENT_TAG 0x00000085
#define ACCESSORIES_PHONEBOOK_APPLICATION_START_EVENT_TAG 0x00000086
#define ACCESSORIES_EMAIL_APPLICATION_START_EVENT_TAG 0x00000087
#define ACCESSORIES_WAP_APPLICATION_START_EVENT_TAG 0x00000088
#define ACCESSORIES_CALENDAR_APPLICATION_START_EVENT_TAG 0x00000089
#define ACCESSORIES_IMAGEBROWSER_APPLICATION_START_EVENT_TAG 0x0000008A
#define ACCESSORIES_NOTES_APPLICATION_START_EVENT_TAG 0x0000008B
#define ACCESSORIES_APPLICATION_INQUIRY_EVENT_TAG 0x0000008C
#define MESSAGE_APPLICATION_START_EVENT_TAG 0x0000008D
#define PHONEBOOK_APPLICATION_START_EVENT_TAG 0x0000008E
#define EMAIL_APPLICATION_START_EVENT_TAG 0x0000008F
#define WAP_APPLICATION_START_EVENT_TAG 0x00000090
#define CALENDAR_APPLICATION_START_EVENT_TAG 0x00000091
#define IMAGEBROWSER_APPLICATION_START_EVENT_TAG 0x00000092
#define NOTES_APPLICATION_START_EVENT_TAG 0x00000093
#define CHF_CONNECTED_EVENT_TAG 0x00000094
#define CHF_DISCONNECTED_EVENT_TAG 0x00000095
#define CLOCK_DATEANDTIME_IND_EVENT_TAG 0x00000096
#define CLOCK_ALARMCLOCK_STATUS_EVENT_TAG 0x00000097
#define DISPATCH_ALARMRECURSTATUS_IND_EVENT_TAG 0x00000098
#define DISPATCH_NITZ_NETWORK_NAME_IND_EVENT_TAG 0x00000099
#define SIM_STATE_ACTIVE_EVENT_TAG 0x0000009A
#define ALL_LOCKS_UNLOCKED_EVENT_TAG 0x0000009B
#define MC_PHONE_LOCK_STATUS_IND_EVENT_TAG 0x0000009C
#define UIBASIC_MC_ETSI_LOCK_SIM_OK_IND_EVENT_TAG 0x0000009D
#define MC_PHONE_LOCK_OPEN_CNF_EVENT_TAG 0x0000009E
#define RADIO_RECEIVE_STATUS_EVENT_TAG 0x0000009F
#define UPDATE_BATTERY_ICON_EVENT_TAG 0x000000A0
#define SIM_INITDATA_READ_EVENT_TAG 0x000000A1
#define SCREENSAVER_FINISHED_EVENT_TAG 0x000000A2
#define PROFILE_ACTIVATED_EVENT_TAG 0x000000A3
#define PB_STATUS_CHANGED_EVENT_TAG 0x000000A4
#define CT_CORDLESS_INRANGE_EVENT_TAG 0x000000A5
#define CT_CORDLESS_OUTRANGE_EVENT_TAG 0x000000A6
#define FS_STATUS_EVENT_TAG 0x000000A7
#define BACKLIGHT_RESTORE_EVENT_TAG 0x000000A8
#define REQUEST_CONSUMER_GET_APPSKILL_EVENT_TAG 0x000000A9
#define REQUEST_CONSUMER_GET_FILENAME_EVENT_TAG 0x000000AA
#define REQUEST_CONSUMER_END_OF_DATA_EVENT_TAG 0x000000AB
#define UPDATE_CUSTOMIZATION_PROGRESS_EVENT_TAG 0x000000AC
#define UI_CONTROLLED_SHUTDOWN_CONTINUE_OK_EVENT_TAG 0x000000AD
#define UI_CONTROLLED_SHUTDOWN_OK_EVENT_TAG 0x000000AE
#define RESPONSE_BTPORTSTATUS_EVENT_TAG 0x000000AF
#define BATTERY_CAPACITY_CHANGED_EVENT_TAG 0x000000B0
#define BATTERY_CONNECTED_EVENT_TAG 0x000000B1
#define BATTERY_DISCONNECTED_EVENT_TAG 0x000000B2
#define BATTERY_CHARGER_CONNECTED_EVENT_TAG 0x000000B3
#define BATTERY_CHARGER_DISCONNECTED_EVENT_TAG 0x000000B4
#define BATTERY_CHARGING_STATE_EVENT_TAG 0x000000B5
#define BATTERY_CHARGING_ALERT_EVENT_TAG 0x000000B6
#define BATTERY_SYSTEM_VOLTAGE_STATUS_EVENT_TAG 0x000000B7
#define SYS_CTL_ON_SYSTEM_MODE_CHANGED_EVENT_TAG 0x000000B8
#define UI_UTIL_SIM_GREETING_READ_EVENT_TAG 0x000000B9
#define MONITOR_HEAP_EVENT_TAG 0x000000BA
#define STANDBY_DISPLAY_DESKTOP_EVENT_TAG 0x000000BB
#define KEYLOCK_BYPASS_VOLUMEUP_SHORT_EVENT_TAG 0x000000BC
#define VOLUMECONTROL_DECREASE_REPEAT_EVENT_TAG 0x000000BD
#define KEYLOCK_BYPASS_VOLUMEUP_LONG_EVENT_TAG 0x000000BE
#define KEYLOCK_BYPASS_VOLUMEDOWN_LONG_EVENT_TAG 0x000000BF
#define KEYLOCK_BYPASS_VOLUMEUP_REPEAT_EVENT_TAG 0x000000C0
#define KEYLOCK_BYPASS_VOLUMEDOWN_REPEAT_EVENT_TAG 0x000000C1
#define UI_INITIATING_EVENT_TAG 0x000000C2
#define UI_INITIATING_CHARGING_EVENT_TAG 0x000000C3
#define UI_INITIATING_ALARM_EVENT_TAG 0x000000C4
#define UI_INITIATING_CUSTOMIZATION_EVENT_TAG 0x000000C5
#define UI_INITIATED_EVENT_TAG 0x000000C6
#define UI_INITIATED_SPECIAL_EVENT_TAG 0x000000C7
#define UI_SECRET_SEQ_DETECTED_EVENT_TAG 0x000000C8
#define MSGBOX_ACCEPT_EVENT_TAG 0x000000C9
#define MSGBOX_PREVIOUS_EVENT_TAG 0x000000CA
#define MSGBOX_CANCEL_EVENT_TAG 0x000000CB
#define UI_CONTROLLED_SHUTDOWN_REQUESTED_EVENT_TAG 0x000000CC
#define PHONE_NUMBER_SEND_EVENT_TAG 0x000000CD
#define LONG_PHONE_NUMBER_SEND_EVENT_TAG 0x000000CE
#define SEND_EVENT_TAG 0x000000CF
#define PTT_INITIATE_EVENT_TAG 0x000000D0
#define MUTE_EVENT_TAG 0x000000D1
#define UNMUTE_EVENT_TAG 0x000000D2
#define TEST_SAT_EVENT_TAG 0x000000D3
#define RETURN_TO_STANDBY_EVENT_TAG 0x000000D4
#define RETURN_TO_STANDBY_REFUSED_EVENT_TAG 0x000000D5
#define TERMINATE_SESSION_EVENT_TAG 0x000000D6
#define TERMINATE_SESSION_REFUSED_EVENT_TAG 0x000000D7
#define PHONE_IN_STBY_EVENT_TAG 0x000000D8
#define PREVIOUS_IN_STBY_IDLE_EVENT_TAG 0x000000D9
#define UI_STANDBY_TICKER_CREATED_EVENT_TAG 0x000000DA
#define UI_STANDBY_TICKER_OPEN_BROWSER_EVENT_TAG 0x000000DB
#define UI_SLEEPMODE_DEACTIVATED_EVENT_TAG 0x000000DC
#define UI_STANDBY_UNFOCUS_EVENT_TAG 0x000000DD
#define UI_APPLICATION_VOLUMEUP_EVENT_TAG 0x000000DE
#define UI_APPLICATION_VOLUMEDOWN_EVENT_TAG 0x000000DF
#define UI_APPLICATION_VOLUMEUP_LONG_EVENT_TAG 0x000000E0
#define UI_APPLICATION_VOLUMEDOWN_LONG_EVENT_TAG 0x000000E1
#define PROFILE_UPDATE_TIMEOUT_EVENT_TAG 0x000000E2
#define ACTIVE_PROFILE_CHANGED_EVENT_TAG 0x000000E3
#define DISPATCH_NITZTIMEINFORMATION_IND_EVENT_TAG 0x000000E4
#define RESPONSE_ALS_MSISDN_STATUS_EVENT_TAG 0x000000E5
#define IR_AUTO_OFF_TIMER_EVENT_TAG 0x000000E6
#define NEW_UNIQUE_ACCESSORY_EVENT_TAG 0x000000E7
#define PROFILE_CHANGED_EVENT_TAG 0x000000E8
#define MMI_LANGUAGE_CHANGED_EVENT_TAG 0x000000E9
#define DISPATCH_OFFICE_HF_STATE_CHANGED_EVENT_TAG 0x000000EA
#define UI_SETTINGS_ICB_SIM_APPLICATION_TOOLKIT_REFRESH_EVENT_TAG 0x000000EB
#define DISPATCH_SIM_SELECTED_LINE_CHANGED_EVENT_TAG 0x000000EC
#define RESPONSE_IMAGEHANDLER_DECODE_EVENT_TAG 0x000000ED
#define MEMORYMANAGER_FILESYSTEM_FULL_EVENT_TAG 0x000000EE
#define THEMES_CHANGED_PROFILE_EVENT_TAG 0x000000EF
#define RESPONSE_PROFILE_RESETPROFILES_EVENT_TAG 0x000000F0
#define HANDLE_TIMEZONE_RESULT_EVENT_TAG 0x000000F1
#define MASTER_RESET_VALUES_EVENT_TAG 0x000000F2
#define MASTER_RESET_ALL_EVENT_TAG 0x000000F3
#define THEME_DOWNLOADED_EVENT_TAG 0x000000F4
#define THEMES_CORRUPT_FILE_EVENT_TAG 0x000000F5
#define THEME_CHANGED_EVENT_TAG 0x000000F6
#define EXTERNAL_ACCESSORY_EVENT_TAG 0x000000F7
#define INCOMING_MT_CALL_EVENT_TAG 0x000000F8
#define CALL_ON_EVENT_TAG 0x000000F9
#define CALL_OFF_EVENT_TAG 0x000000FA
#define VAD_DELETED_EVENT_TAG 0x000000FB
#define VC_START_MAGICWORD_EVENT_TAG 0x000000FC
#define VC_STOP_MAGICWORD_EVENT_TAG 0x000000FD
#define VC_START_NAMEDIAL_EVENT_TAG 0x000000FE
#define VC_STOP_NAMEDIAL_EVENT_TAG 0x000000FF
#define VC_START_ANSWER_EVENT_TAG 0x00000100
#define VC_STOP_ANSWER_EVENT_TAG 0x00000101
#define SPEECH_AUDIO_TERMINATED_EVENT_TAG 0x00000102
#define SPEECH_TRAINING_STARTED_EVENT_TAG 0x00000103
#define SPEECH_TRAINING_STOPPED_EVENT_TAG 0x00000104
#define SPEECH_TRAINING_FINISHED_EVENT_TAG 0x00000105
#define SPEECH_RECOGNITION_STOPPED_EVENT_TAG 0x00000106
#define SPEECH_RECOGNITION_SETUP_FAILURE_EVENT_TAG 0x00000107
#define SPEECH_RECOGNITION_SETUP_FINISHED_EVENT_TAG 0x00000108
#define SPEECH_RECOGNITION_FINISHED_EVENT_TAG 0x00000109
#define VAD_TAG_PLAYED_EVENT_TAG 0x0000010A
#define VC_MAGICWORD_ACTIVATED_EVENT_TAG 0x0000010B
#define VC_MAGICWORD_DEACTIVATED_EVENT_TAG 0x0000010C
#define VC_MAGICWORD_SERVICE_FAILED_EVENT_TAG 0x0000010D
#define VC_MAGICWORD_RECOGNISED_EVENT_TAG 0x0000010E
#define VC_NAMEDIAL_ACTIVATED_EVENT_TAG 0x0000010F
#define VC_NAMEDIAL_DEACTIVATED_EVENT_TAG 0x00000110
#define VC_NAMEDIAL_SERVICE_FAILED_EVENT_TAG 0x00000111
#define VC_NAMEDIAL_RECOGNISED_EVENT_TAG 0x00000112
#define VC_ANSWER_ACTIVATED_EVENT_TAG 0x00000113
#define VC_ANSWER_DEACTIVATED_EVENT_TAG 0x00000114
#define VC_ANSWER_SERVICE_FAILED_EVENT_TAG 0x00000115
#define VC_ANSWER_ACCEPT_RECOGNISED_EVENT_TAG 0x00000116
#define VC_ANSWER_REJECT_RECOGNISED_EVENT_TAG 0x00000117
#define KEY_MEDIAPLAYER_TAG 0x00000118
#define ONOFFKEY_SHORT_PRESS_EVENT_TAG 0x00000119
#define GOMUSICKEY_PRESSED_EVENT_TAG 0x0000011A
#define GOMUSICKEY_LONG_PRESSED_EVENT_TAG 0x0000011B
#define MEDIAPLAYERKEY_PRESSED_EVENT_TAG 0x0000011C
#define MEDIAPLAYERKEY_LONG_PRESSED_EVENT_TAG 0x0000011D
#define STANDBY_NOT_IDLE_EVENT_TAG 0x0000011E
#define UI_TRANSFER_FOCUS_BY_SESSION_MANAGER_EVENT_TAG 0x0000011F
#define UI_NEW_CALL_CONNECTED_EVENT_TAG 0x00000120
#define UI_CALLMANAGER_IDLE_EVENT_TAG 0x00000121
#define UI_MEDIAPLAYER_VOLUMEUP_EVENT_TAG 0x00000122
#define UI_MEDIAPLAYER_VOLUMEDOWN_EVENT_TAG 0x00000123
#define UI_MEDIAPLAYER_PREV_TRACK_EVENT_TAG 0x00000124
#define UI_MEDIAPLAYER_NEXT_TRACK_EVENT_TAG 0x00000125
#define PROFILE_SETTING_CHANGED_EVENT_TAG 0x00000126
#define ASR_PLAY_STORED_SPEECH_RESULT_EVENT_TAG 0x00000127
#define AB_ITEM_FIELD_NAME_TAG 0x00000128
#define AB_ITEM_FIELD_NEW_ITEM_TAG 0x00000129
#define AB_ITEM_FIELD_N_MOBILE_TAG 0x0000012A
#define AB_ITEM_FIELD_N_HOME_TAG 0x0000012B
#define AB_ITEM_FIELD_N_WORK_TAG 0x0000012C
#define AB_ITEM_FIELD_N_FAX_TAG 0x0000012D
#define AB_ITEM_FIELD_N_OTHER_TAG 0x0000012E
#define AB_ITEM_FIELD_EMAIL1_TAG 0x0000012F
#define AB_ITEM_FIELD_EMAIL2_TAG 0x00000130
#define AB_ITEM_FIELD_EMAIL3_TAG 0x00000131
#define AB_ITEM_FIELD_USERNAME_TAG 0x00000132
#define AB_ITEM_FIELD_WEB_TAG 0x00000133
#define AB_ITEM_FIELD_IMAGE_TAG 0x00000134
#define AB_ITEM_FIELD_RINGTONE_TAG 0x00000135
#define AB_ITEM_FIELD_VOICE_CMD1_TAG 0x00000136
#define AB_ITEM_FIELD_VOICE_CMD2_TAG 0x00000137
#define AB_ITEM_FIELD_VOICE_CMD3_TAG 0x00000138
#define AB_ITEM_FIELD_VOICE_CMD4_TAG 0x00000139
#define AB_ITEM_FIELD_VOICE_CMD5_TAG 0x0000013A
#define AB_ITEM_FIELD_TITLE_TAG 0x0000013B
#define AB_ITEM_FIELD_COMPANY_TAG 0x0000013C
#define AB_ITEM_FIELD_STREET_TAG 0x0000013D
#define AB_ITEM_FIELD_CITY_TAG 0x0000013E
#define AB_ITEM_FIELD_REGION_TAG 0x0000013F
#define AB_ITEM_FIELD_POST_INDEX_TAG 0x00000140
#define AB_ITEM_FIELD_COUNTRY_TAG 0x00000141
#define AB_ITEM_FIELD_INFO_TAG 0x00000142
#define AB_ITEM_FIELD_DR_TAG 0x00000143
#define AB_ITEM_FPI_TAG 0x00000144
#define ACTION_BACK_TAG 0x00000145
#define ACTION_LONG_BACK_TAG 0x00000146
#define KEY_PHF_TAG 0x00000147
#define KEY_PHF1_TAG 0x00000148
#define KEY_PHF_ENDOF_TAG 0x00000149
#define KEY_FLIP_OPEN_TAG 0x0000014A
#define KEY_FLIP_CLOSE_TAG 0x0000014B
#define FONT_D_18B_TAG 0x0000014C
#define ICON_WRITE_NEW_TAG 0x0000014D
#define ICON_OLD_GREEN_PHONE_TAG 0x0000014E
#define AB_ITEM_DESC_SIZE_TAG 0x0000014F
#define AB_ITEM_DESC_ID_DISPLACE_TAG 0x00000150
#define AB_ITEM_DESC_ICON_DISPLACE_TAG 0x00000151
#define AB_ITEM_DESC_NUM_DISPLACE_TAG 0x00000152
#define KEY_DIGITAL_0_TAG 0x00000153
#define KEY_OPERATOR_TAG 0x00000154
#define KEY_GAME_A_TAG 0x00000155
#define KEY_GAME_B_TAG 0x00000156
#define DB_UPDATE_EVENT_TAG 0x00000157
#define KEY_SLIDER_OPEN_TAG 0x00000158
#define KEY_SLIDER_CLOSE_TAG 0x00000159
#define KEY_JACKKNIFE_OPEN_TAG 0x0000015A
#define KEY_JACKKNIFE_CLOSE_TAG 0x0000015B
#define FONT_E_8R_TAG 0x0000015C
#define FONT_E_18R_TAG 0x0000015D
#define FONT_E_18B_TAG 0x0000015E
#define FONT_E_18I_TAG 0x0000015F
#define FONT_E_18BI_TAG 0x00000160
#define FONT_E_22R_TAG 0x00000161
#define FONT_E_22B_TAG 0x00000162
#define FONT_E_22I_TAG 0x00000163
#define FONT_E_22BI_TAG 0x00000164
#define FONT_E_24R_TAG 0x00000165
#define FONT_E_24B_TAG 0x00000166
#define FONT_E_25R_TAG 0x00000167
#define FONT_E_25B_TAG 0x00000168
#define FONT_E_25I_TAG 0x00000169
#define FONT_E_25BI_TAG 0x0000016A
#define FONT_E_30R_TAG 0x0000016B
#define FONT_E_36R_TAG 0x0000016C
#define FONT_E_40R_TAG 0x0000016D
#define FONT_E_60R_TAG 0x0000016E
#define FONT_E_75R_TAG 0x0000016F
#define FONT_E_100R_TAG 0x00000170
#define MSG_CONSUMED_META_EVENT_TAG 0x00000171
#define MASTER_SESSION_WINDOW_GOT_FOCUS_EVENT_TAG 0x00000172
#define MASTER_SESSION_WINDOW_LOST_FOCUS_EVENT_TAG 0x00000173
#define SESSION_CREATED_EVENT_TAG 0x00000174
#define SESSION_DESTROYED_EVENT_TAG 0x00000175
#define SECOND_DISPLAY_OVERLAY_MODE_ON_TAG 0x00000176
#define SECOND_DISPLAY_OVERLAY_MODE_OFF_TAG 0x00000177
#define SLIDER_OPEN_EVENT_TAG 0x00000178
#define SLIDER_CLOSE_EVENT_TAG 0x00000179
#define CAMERAKEY_RELEASE_EVENT_TAG 0x0000017A
#define CAMERAKEY_LONG_RELEASE_EVENT_TAG 0x0000017B
#define CAMERAFOCUSKEY_PRESSED_EVENT_TAG 0x0000017C
#define CAMERAFOCUSKEY_RELEASE_EVENT_TAG 0x0000017D
#define CAMERAFOCUSKEY_LONG_PRESS_EVENT_TAG 0x0000017E
#define CAMERAFOCUSKEY_LONG_RELEASE_EVENT_TAG 0x0000017F
#define CAMERACAPTUREKEY_PRESSED_EVENT_TAG 0x00000180
#define CAMERACAPTUREKEY_RELEASE_EVENT_TAG 0x00000181
#define CAMERACAPTUREKEY_LONG_PRESS_EVENT_TAG 0x00000182
#define CAMERACAPTUREKEY_LONG_RELEASE_EVENT_TAG 0x00000183
#define LOCKKEYSWITCH_ON_EVENT_TAG 0x00000184
#define LOCKKEYSWITCH_OFF_EVENT_TAG 0x00000185
#define OPERATORKEY_LONG_PRESSED_EVENT_TAG 0x00000186
#define IMODEKEY_PRESSED_EVENT_TAG 0x00000187
#define IMODEKEY_LONG_PRESSED_EVENT_TAG 0x00000188
#define KEYPLAYSTOP_PRESSED_EVENT_TAG 0x00000189
#define KEYPLAYSTOP_LONG_PRESSED_EVENT_TAG 0x0000018A
#define MEDIAPLAYERKEY_PRESS_EVENT_TAG 0x0000018B
#define MEDIAPLAYERKEY_LONG_RELEASE_EVENT_TAG 0x0000018C
#define MULTIKEY_LONG_PRESSED_EVENT_TAG 0x0000018D
#define JOYSTICK_UP_PRESSED_EVENT_TAG 0x0000018E
#define JOYSTICK_DOWN_PRESSED_EVENT_TAG 0x0000018F
#define JOYSTICK_LEFT_PRESSED_EVENT_TAG 0x00000190
#define JOYSTICK_RIGHT_PRESSED_EVENT_TAG 0x00000191
#define GAMEINTERNALKEYA_PRESSED_EVENT_TAG 0x00000192
#define GAMEINTERNALKEYB_PRESSED_EVENT_TAG 0x00000193
#define MESSAGINGKEY_PRESSED_EVENT_TAG 0x00000194
#define RADIO_ON_EVENT_TAG 0x00000195
#define RADIO_OFF_EVENT_TAG 0x00000196
#define RADIO_ACTIVATING_EVENT_TAG 0x00000197
#define RADIO_DEACTIVATING_EVENT_TAG 0x00000198
#define MAGIC_WORD_DETECT_EVENT_TAG 0x00000199
#define ASR_TAG_PLAYED_EVENT_TAG 0x0000019A
#define ALIEN_BATTERY_CHARGER_CONNECTED_EVENT_TAG 0x0000019B
#define ALIEN_BATTERY_CHARGER_DISCONNECTED_EVENT_TAG 0x0000019C
#define RIGHTNOW_UPDATE_DATA_EVENT_TAG 0x0000019D
#define RIGHTNOW_BUILD_OPERATOR_TAB_EVENT_TAG 0x0000019E
#define RIGHTNOW_START_SHORTCUT_EVENT_TAG 0x0000019F
#define RIGHTNOW_START_HOOK_EVENT_TAG 0x000001A0
#define RIGHTNOW_START_URL_EVENT_TAG 0x000001A1
#define RIGHTNOW_START_OPERATOR_ACTION_EVENT_TAG 0x000001A2
#define VOLUMECONTROL_INCREASE_EVENT_TAG 0x000001A3
#define VOLUMECONTROL_DECREASE_EVENT_TAG 0x000001A4
#define VOLUMECONTROL_INCREASE_REPEAT_EVENT_TAG 0x000001A5
#define KEYLOCK_BYPASS_VOLUME_10_SEC_EVENT_TAG 0x000001A6
#define UI_FLIGHTMODE_SELECTION_EVENT_TAG 0x000001A7
#define UI_SCREENSAVER_ACTIVATE_EVENT_TAG 0x000001A8
#define UI_SCREENSAVER_DEACTIVATE_EVENT_TAG 0x000001A9
#define UI_SCREENSAVER_FINISHED_EVENT_TAG 0x000001AA
#define UI_SCREENSAVER_SHOW_INFO_EVENT_TAG 0x000001AB
#define UI_SLEEPMODE_ACTIVATE_EVENT_TAG 0x000001AC
#define UI_SLEEPMODE_DEACTIVATE_EVENT_TAG 0x000001AD
#define UI_PRELOCK_ACTIVATE_EVENT_TAG 0x000001AE
#define UI_PRELOCK_DEACTIVATE_EVENT_TAG 0x000001AF
#define UI_KEYLOCK_ACTIVATE_EVENT_TAG 0x000001B0
#define UI_KEYLOCK_DEACTIVATE_EVENT_TAG 0x000001B1
#define UI_KEYLOCK_REACTIVATE_EVENT_TAG 0x000001B2
#define UI_EXTERNAL_KEYLOCK_ACTIVATE_EVENT_TAG 0x000001B3
#define UI_EXTERNAL_KEYLOCK_DEACTIVATE_EVENT_TAG 0x000001B4
#define UI_SLEEPMODE_ACTIVATED_EVENT_TAG 0x000001B5
#define KEYLOCK_BYPASS_MEDIAPLAYERKEY_PRESS_EVENT_TAG 0x000001B6
#define KEYLOCK_BYPASS_MEDIAPLAYERKEY_PRESSED_EVENT_TAG 0x000001B7
#define KEYLOCK_BYPASS_MEDIAPLAYERKEY_LONG_PRESSED_EVENT_TAG 0x000001B8
#define KEYLOCK_BYPASS_MEDIAPLAYERKEY_LONG_RELEASE_EVENT_TAG 0x000001B9
#define ON_CALLMANAGER_EVENT_TAG 0x000001BA
#define FONT_E_12R_TAG 0x000001BB
#define FONT_E_12B_TAG 0x000001BC
#define FONT_E_24I_TAG 0x000001BD
#define FONT_E_24BI_TAG 0x000001BE
#define CAMERA_APPLICATION_START_EVENT_TAG 0x000001BF
#define MEDIAPLAYER_APPLICATION_START_EVENT_TAG 0x000001C0
#define SOUNDHANDLER_APPLICATION_START_EVENT_TAG 0x000001C1
#define STANDBY_IDLE_EVENT_TAG 0x000001C2
#define KEYLOCK_BYPASS_VOLUMEDOWN_SHORT_EVENT_TAG 0x000001C3
#define PROFILE_ACTIVATED_SECOND_EVENT_TAG 0x000001C4
#define REQUEST_CONSUMER_GET_APPSKILL_SECOND_EVENT_TAG 0x000001C5
#define REQUEST_CONSUMER_GET_FILENAME_SECOND_EVENT_TAG 0x000001C6
#define REQUEST_CONSUMER_END_OF_DATA_SECOND_EVENT_TAG 0x000001C7
#define ONGOINGCALL_SET_CALLTIME_EVENT_TAG 0x000001C8
#define ONGOINGCALL_SET_CALLCOST_EVENT_TAG 0x000001C9
#define ONGOINGCALL_SPEAKER_ONOFF_EVENT_TAG 0x000001CA
#define ONGOINGCALL_CALL_CONNECTED_EVENT_TAG 0x000001CB
#define ONGOINGCALL_CALL_START_EVENT_TAG 0x000001CC
#define MISSED_CALL_EVENT_TAG 0x000001CD
#define CALLMANAGER_CALL_END_SET_CALLTIME_EVENT_TAG 0x000001CE
#define CALLMANAGER_KILL_CALLBOOK_EVENT_TAG 0x000001CF
#define UI_CONNECTIONMANAGER_SESSION_ESTABLISHED_EVENT_TAG 0x000001D0
#define UI_CONNECTIONMANAGER_SESSION_TERMINATED_EVENT_TAG 0x000001D1
#define PHONEBOOK_CONTACT_CREATED_EVENT_TAG 0x000001D2
#define PHONEBOOK_CONTACT_CHANGED_EVENT_TAG 0x000001D3
#define PHONEBOOK_CONTACT_DELETED_EVENT_TAG 0x000001D4
#define UI_MEDIAPLAYER_STOP_PRESSED_EVENT_TAG 0x000001D5
#define UI_MEDIAPLAYER_PLAY_PRESSED_EVENT_TAG 0x000001D6
#define UI_MEDIAPLAYER_PAUSE_PRESSED_EVENT_TAG 0x000001D7
#define UI_MEDIAPLAYER_CREATED_EVENT_TAG 0x000001D8
#define UI_MEDIAPLAYER_DESTROYED_EVENT_TAG 0x000001D9
#define UI_MEDIAPLAYER_AUDIO_PLAYING_TIME_EVENT_TAG 0x000001DA
#define UI_MEDIAPLAYER_VIDEO_PLAYING_TIME_EVENT_TAG 0x000001DB
#define FMRADIO_MODE_CHANGED_EVENT_TAG 0x000001DC
#define FMRADIO_RDS_DATA_RECEIVED_EVENT_TAG 0x000001DD
#define UI_MEDIAPLAYER_CONTROL_EVENT_TAG 0x000001DE
#define UI_FMRADIO_CONTROL_EVENT_TAG 0x000001DF
#define UI_MEDIAPLAYER_VIDEO_CREATED_EVENT_TAG 0x000001E0
#define UI_BLUETOOTH_STATE_CHANGED_EVENT_TAG 0x000001E1
#define UI_BLUETOOTH_ACTIVITY_CHANGED_EVENT_TAG 0x000001E2
#define UI_FMRADIO_CREATED_EVENT_TAG 0x000001E3
#define UI_CONNECTIONMANAGER_SESSION_ACTIVE_EVENT_TAG 0x000001E4
#define UI_CONNECTIONMANAGER_SESSION_ACTIVITY_EVENT_TAG 0x000001E5
#define UI_CONNECTIONMANAGER_SESSION_SUSPENDED_EVENT_TAG 0x000001E6
#define UI_OBEX_FILE_ACCEPTED_EVENT_TAG 0x000001E7
#define UI_OBEX_ACCEPT_FILE_REQUEST_EVENT_TAG 0x000001E8
#define UI_OBEX_REFRESH_RECEIVE_PROGRESS_EVENT_TAG 0x000001E9
#define UI_OBEX_STATE_CHANGED_EVENT_TAG 0x000001EA
#define UI_OBEX_RECEIVE_FAILED_EVENT_TAG 0x000001EB
#define UI_OBEX_FTP_SEND_FILE_EVENT_TAG 0x000001EC
#define UI_OBEX_REFRESH_TRANSFER_PROGRESS_EVENT_TAG 0x000001ED
#define UI_OBEX_CONNECTING_STATE_EVENT_TAG 0x000001EE
#define UI_OBEX_TRANSFER_FAILED_EVENT_TAG 0x000001EF
#define UI_MESSAGING_SMS_RECEIVED_EVENT_TAG 0x000001F0
#define UI_MESSAGING_SMS_SENT_EVENT_TAG 0x000001F1
#define UI_MESSAGING_SMS_SENDING_EVENT_TAG 0x000001F2
#define UI_MESSAGING_SMS_SENDING_ERROR_EVENT_TAG 0x000001F3
#define UI_MESSAGING_MMS_SENDING_CANCELED_EVENT_TAG 0x000001F4
#define UI_MESSAGING_MMS_RECEIVED_EVENT_TAG 0x000001F5
#define UI_MESSAGING_MMS_SENT_EVENT_TAG 0x000001F6
#define UI_MESSAGING_MMS_SENDING_EVENT_TAG 0x000001F7
#define DATA_DOWNLOAD_ERROR_EVENT_TAG 0x000001F8
#define UI_OBEX_UPD_STATE_EVENT_TAG 0x000001F9
#define DOWNLOAD_ERROR_EVENT_TAG 0x000001FA
#define DOWNLOAD_PROGRESS_EVENT_TAG 0x000001FB
#define DOWNLOAD_COMPLETED_EVENT_TAG 0x000001FC
#define EVENT_ID_ICA_AUTHENTICATIONSTATUSINFORMATION_REQUEST_TAG 0x000001FD
#define EVENT_ID_ICA_AUTHENTICATIONSTATUSINFORMATION_RESPONSE_TAG 0x000001FE
#define EVENT_ID_ICA_CONNECTIONSTATUSINFORMATION_REQUEST_TAG 0x000001FF
#define EVENT_ID_ICA_CONNECTIONSTATUSINFORMATION_RESPONSE_TAG 0x00000200
#define EVENT_ID_ICA_DATACOUNTERS_ENDSESSION_REQUEST_TAG 0x00000201
#define EVENT_ID_ICA_DATACOUNTERS_ENDSESSION_RESPONSE_TAG 0x00000202
#define EVENT_ID_ICA_DATACOUNTERS_REQUEST_TAG 0x00000203
#define EVENT_ID_ICA_DATACOUNTERS_RESPONSE_TAG 0x00000204
#define DB_CMD_RUN_TAG 0x00000205
#define DB_CMD_DELETE_TAG 0x00000206
#define DB_CMD_RENAME_TAG 0x00000207
#define DB_CMD_INFO_TAG 0x00000208
#define DB_CMD_SETSMALLICON_TAG 0x00000209
#define DB_CMD_DESTROY_SUBROUTINE_TAG 0x0000020A
#define DB_CMD_LAST_TAG 0x0000020B
#define USSD_RECIEVED_EVENT_TAG 0x0000020C

#define VAR_ARG_BOOK_TAG 0x0000020D
#define VAR_ARG_HTEXT_TAG 0x0000020E
#define VAR_ARG_CALL_BACK_OK_TAG 0x0000020F
#define VAR_ARG_CALL_BACK_PREV_ACT_TAG 0x00000210
#define VAR_ARG_CALL_BACK_LONG_BACK_TAG 0x00000211
#define VAR_ARG_STRINP_MODE_TAG 0x00000212
#define VAR_ARG_STRINP_FIXED_TEXT_TAG 0x00000213
#define VAR_ARG_STRINP_TEXT_TAG 0x00000214
#define VAR_ARG_STRINP_NEW_LINE_TAG 0x00000215
#define VAR_ARG_STRINP_EMPTY_STR_EN_TAG 0x00000216
#define VAR_ARG_STRINP_MAX_LEN_TAG 0x00000217
#define VAR_ARG_STRINP_MIN_LEN_TAG 0x00000218
#define VAR_ARG_STRINP_IS_PASS_MODE_TAG 0x00000219
#define VAR_ARG_STRINP_OK_ON_DIEZ_TAG 0x0000021A

#define VAR_ARG_STRINP_SET_INT_VAL_TAG 0x0000021B
#define VAR_ARG_STRINP_MIN_INT_VAL_TAG 0x0000021C
#define VAR_ARG_STRINP_MAX_INT_VAL_TAG 0x0000021D

#define VAR_ARG_YESNO_PRE_QUESTION_TAG 0x0000021E
#define VAR_ARG_YESNO_QUESTION_TAG 0x0000021F
#define VAR_ARG_YESNO_YES_ACTION_TAG 0x00000220
#define VAR_ARG_YESNO_NO_ACTION_TAG 0x00000221
#define VAR_ARG_PERINP_ROW_NUMBERS_TAG 0x00000222
#define VAR_ARG_PERINP_CUR_PERCENT_TAG 0x00000223

#define VAR_ARG_DATEINP_DATE_FORMAT_TAG 0x00000224
#define VAR_ARG_DATEINP_DATE_TAG 0x00000225
#define VAR_ARG_TIMEINP_TIME_FORMAT_TAG 0x00000226
#define VAR_ARG_TIMEINP_TIME_TAG 0x00000227

#define DB_CMD_SETSAVEDICON_TAG 0x00000228
#define DB_CMD_SETTHUMBNAILICON_TAG 0x00000229
#define DB_CMD_EDIT_TAG 0x0000022A
#define DB_CMD_SETITEMTEXT_TAG 0x0000022B

#define UI_CONNECTIONMANAGER_SESSION_CREATED_EVENT_TAG 0x0000022C

#define VAR_ARG_TIMEINP_TIME_FORMAT_SEC_TAG 0x0000022D

#define ACTION_MORELIST_TAG 0x0000022E

#define MEMORYSTICK_INSERTED_EVENT_TAG 0x0000022F
#define MEMORYSTICK_REMOVED_EVENT_TAG 0x00000230

#define USSD_REQUEST_RECIEVED_EVENT_TAG 0x00000231

#define THEMEITEM_WAPBROWSER_UNDERLINE_TAG 0x00000232
#define THEMEITEM_BACKGROUND_TAG 0x00000233
#define THEMEITEM_WAPBROWSER_TABLEBORDER_TAG 0x00000234
#define THEMEITEM_TEXT_TAG 0x00000235
#define THEMEITEM_HIGHLIGHT_TEXT_TAG 0x00000236
#define THEMEITEM_HIGHLIGHT_TAG 0x00000237
#define THEMEITEM_CALENDAR_WEEKVIEW_MARKINGS_TAG 0x00000238
#define THEMEITEM_ILLUMINATION_TAG 0x00000239
#define THEMEITEM_DESKTOP_TITLE_TEXT_TAG 0x0000023A
#define THEMEITEM_DESKTOP_TAG 0x0000023B
#define THEMEITEM_POPUP_FRAME_TAG 0x0000023C
#define THEMEITEM_POPUP_HIGHLIGHT_TEXT_TAG 0x0000023D
#define THEMEITEM_POPUP_HIGHLIGHT_TAG 0x0000023E
#define THEMEITEM_POPUP_TEXT_TAG 0x0000023F
#define THEMEITEM_POPUP_TAG 0x00000240
#define THEMEITEM_POPUP_SCROLLBAR_SLIDER_TAG 0x00000241
#define THEMEITEM_POPUP_SCROLLBAR_BACKGROUND_TAG 0x00000242
#define THEMEITEM_POPUP_TITLE_TEXT_TAG 0x00000243
#define THEMEITEM_POPUP_DIM_TAG 0x00000244
#define THEMEITEM_SCROLLBAR_SLIDER_TAG 0x00000245
#define THEMEITEM_SCROLLBAR_BACKGROUND_TAG 0x00000246
#define THEMEITEM_STANDBY_OPERATORNAME_TEXT_TAG 0x00000247
#define THEMEITEM_SOFTKEY_LEFT_TAG 0x00000248
#define THEMEITEM_SOFTKEY_RIGHT_TAG 0x00000249
#define THEMEITEM_SOFTKEY_TEXT_LEFT_TAG 0x0000024A
#define THEMEITEM_SOFTKEY_TEXT_LEFT_PRESSED_TAG 0x0000024B
#define THEMEITEM_SOFTKEY_TEXT_RIGHT_TAG 0x0000024C
#define THEMEITEM_SOFTKEY_TEXT_RIGHT_PRESSED_TAG 0x0000024D
#define THEMEITEM_SOFTKEY_TEXT_MIDDLE_TAG 0x0000024E
#define THEMEITEM_SOFTKEY_TEXT_MIDDLE_PRESSED_TAG 0x0000024F
#define THEMEITEM_STANDBY_OPERATORNAME_OUTLINE_TAG 0x00000250
#define THEMEITEM_STANDBY_TIME_TAG 0x00000251
#define THEMEITEM_STANDBY_TIME_OUTLINE_TAG 0x00000252
#define THEMEITEM_STATUSBAR_CLOCK_TAG 0x00000253
#define THEMEITEM_TITLE_TEXT_TAG 0x00000254
#define THEMEITEM_TAB_TAG 0x00000255
#define THEMEITEM_TAB_TEXT_TAG 0x00000256
#define THEMEITEM_TAB_UNSELECTED_TAG 0x00000257
#define THEMEITEM_TAB_SELECTED_TAG 0x00000258
#define THEMEITEM_INPUT_TEXT_TAG 0x00000259
#define THEMEITEM_INPUT_MARKED_TEXT_TAG 0x0000025A
#define THEMEITEM_INPUT_POPUP_TEXT_TAG 0x0000025B
#define THEMEITEM_INPUT_POPUP_TAG 0x0000025C
#define THEMEITEM_INPUT_POPUP_HIGHLIGHT_TEXT_TAG 0x0000025D
#define THEMEITEM_INPUT_POPUP_HIGHLIGHT_TAG 0x0000025E
#define THEMEITEM_INPUT_POPUP_SCROLLBAR_SLIDER_TAG 0x0000025F
#define THEMEITEM_INPUT_POPUP_SCROLLBAR_BACKGROUND_TAG 0x00000260
#define THEMEITEM_INPUT_POPUP_FRAME_TAG 0x00000261
#define THEMEITEM_HOME_SCREEN_TEXT_TAG 0x00000262
#define THEMEITEM_HOME_SCREEN_TAG 0x00000263
#define THEMEITEM_HOME_SCREEN_TAB_TAG 0x00000264
#define THEMEITEM_HOME_SCREEN_TAB_UNSELECTED_TAG 0x00000265
#define THEMEITEM_HOME_SCREEN_TAB_SELECTED_TAG 0x00000266
#define THEMEITEM_HOME_SCREEN_TAB_TEXT_TAG 0x00000267
#define THEMEITEM_HOME_SCREEN_HIGHLIGHT_TEXT_TAG 0x00000268
#define THEMEITEM_HOME_SCREEN_HIGHLIGHT_TAG 0x00000269
#define THEMEITEM_HOME_SCREEN_SCROLLBAR_SLIDER_TAG 0x0000026A
#define THEMEITEM_HOME_SCREEN_SCROLLBAR_BACKGROUND_TAG 0x0000026B
#define THEMEITEM_HOME_SCREEN_FRAME_TAG 0x0000026C
#define THEMEITEM_MORELIST_TEXT_TAG 0x0000026D
#define THEMEITEM_MORELIST_TAG 0x0000026E
#define THEMEITEM_MORELIST_HIGHLIGHT_TEXT_TAG 0x0000026F
#define THEMEITEM_MORELIST_HIGHLIGHT_TAG 0x00000270
#define THEMEITEM_MORELIST_SCROLLBAR_SLIDER_TAG 0x00000271
#define THEMEITEM_MORELIST_SCROLLBAR_BACKGROUND_TAG 0x00000272
#define THEMEITEM_MORELIST_FRAME_TAG 0x00000273
#define THEMEITEM_MEDIA_BACKGROUND_TAG 0x00000274
#define THEMEITEM_MEDIA_BACKGROUND_SEARCH_TAG 0x00000275
#define THEMEITEM_MEDIA_ICON_TAG 0x00000276
#define THEMEITEM_MEDIA_TEXT_TAG 0x00000277
#define THEMEITEM_MEDIA_TEXT_BACKGROUND_TAG 0x00000278
#define THEMEITEM_MEDIA_HIGHLIGHT_ICON_TAG 0x00000279
#define THEMEITEM_MEDIA_HIGHLIGHT_TEXT_TAG 0x0000027A
#define THEMEITEM_MEDIA_HIGHLIGHT_TEXT_BACKGROUND_TAG 0x0000027B
#define THEMEITEM_MEDIA_LINE_TAG 0x0000027C
#define THEMEITEM_MEDIA_WALKMAN_HIGHLIGHT_TAG 0x0000027D
#define THEMEITEM_MEDIA_WALKMAN_PARTICLE_TAG 0x0000027E
#define THEMEITEM_MEDIA_PARTICLE_TAG 0x0000027F
#define THEMEITEM_MEDIA_MULTILETTER_SEARCH_TAG 0x00000280
#define THEMEITEM_MEDIA_HISTORY_BAR_TAG 0x00000281
#define THEMEITEM_MEDIA_PROGRESSBAR_TAG 0x00000282
#define THEMEITEM_MEDIA_PROGRESSBAR_BACKGROUND_TAG 0x00000283
#define THEMEITEM_MEDIA_PROGRESSBAR_BUFFER_TAG 0x00000284
#define THEMEITEM_MEDIA_WHEEL_ICON_TAG 0x00000285
#define THEMEITEM_MEDIA_WALKMAN_ICON_TAG 0x00000286
#define THEMEITEM_MEDIA_WALKMAN_STATE_ICON_TAG 0x00000287
#define THEMEITEM_MEDIA_WALKMAN_MODE_ICON_TAG 0x00000288
#define THEMEITEM_MINIPOPUP_BACKGROUND_TAG 0x00000289
#define THEMEITEM_MINIPOPUP_OUTLINE_TAG 0x0000028A
#define THEMEITEM_MINIPOPUP_TEXT_TAG 0x0000028B
#define THEMEITEM_APP_GEN_BACKGROUND_TAG 0x0000028C
#define THEMEITEM_APP_GEN_TITLE_TEXT_TAG 0x0000028D
#define THEMEITEM_APP_GEN_TITLE_BACKGROUND_TAG 0x0000028E
#define THEMEITEM_APP_GEN_SCROLLBAR_SLIDER_TAG 0x0000028F
#define THEMEITEM_APP_GEN_SCROLLBAR_BACKGROUND_TAG 0x00000290
#define THEMEITEM_APP_TOOLBAR_TEXT_TAG 0x00000291
#define THEMEITEM_APP_TOOLBAR_BACKGROUND_TAG 0x00000292
#define THEMEITEM_APP_TOOLBAR_HIGHLIGHT_TAG 0x00000293
#define THEMEITEM_APP_TOOLBAR_TITLE_TEXT_TAG 0x00000294
#define THEMEITEM_APP_PANEL1_TEXT_TAG 0x00000295
#define THEMEITEM_APP_PANEL1_BACKGROUND_TAG 0x00000296
#define THEMEITEM_APP_PANEL1_OUTLINE_TAG 0x00000297
#define THEMEITEM_APP_PANEL2_TEXT_TAG 0x00000298
#define THEMEITEM_APP_PANEL2_BACKGROUND_TAG 0x00000299
#define THEMEITEM_APP_PANEL2_OUTLINE_TAG 0x0000029A
#define THEMEITEM_APP_PANEL1_MMS_NAME_TAG 0x0000029B
#define THEMEITEM_APP_PANEL1_MMS_DATE_TAG 0x0000029C
#define THEMEITEM_APP_PANEL2_MMS_NAME_TAG 0x0000029D
#define THEMEITEM_APP_PANEL2_MMS_DATE_TAG 0x0000029E
#define THEMEITEM_VOLUME_STAPLES_TAG 0x0000029F
#define THEMEITEM_PROGRESS_BAR_OUTLINE_TAG 0x000002A0
#define THEMEITEM_PROGRESS_BAR_SLIDER_TAG 0x000002A1
#define THEMEITEM_PROGRESS_BAR_FILL_TAG 0x000002A2
#define ACTION_CLIPBOARD_COPYALL_TAG 0x000002A3
#define ACTION_CLIPBOARD_PASTE_TAG 0x000002A4
#define ACTION_CLIPBOARD_MARKANDCOPY_TAG 0x000002A5
#define ACTION_DB_MANAGEFILE_TAG 0x000002A6

#endif
