/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define USB_SUSPEND_WAKEUP_DELAY 0

#define NO_AUTO_SHIFT_ALPHA
#define FIRMWARE_VERSION u8"dAA/M71"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4

#define RGB_MATRIX_STARTUP_SPD 60

#define MOUSE_TURBO_CLICK_KEY KC_NO
#define MOUSE_TURBO_CLICK_PERIOD 60000 // 60 seconds

