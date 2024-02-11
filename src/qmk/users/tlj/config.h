#pragma once

// Disable auto shift functionality for alpha characters
#define NO_AUTO_SHIFT_ALPHA

// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 40
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100


#ifdef WPM_ENABLE
//  Enable transmitting the current WPM to slave for oled display/anim
#   define SPLIT_WPM_ENABLE
#endif

#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS

// Pick good defaults for enabling homerow modifiers
//#define TAPPING_TERM 200
//#define PERMISSIVE_HOLD
//#define QUICK_TAP_TERM 0

// neccessary for split keyboards using pro micros with usb-c
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 1000

#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_TIMEOUT 120000
#    define RGB_MATRIX_STARTUP_MODE RBG_MATRIX_JELLYBEANS_RAINDROPS
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#endif

#ifdef OLED_ENABLE
//   Turn off oled after 2 minutes of inactivity
#    define OLED_TIMEOUT 120000
//   Enable transmuttung the current oled on/off status to slave
#    define SPLIT_OLED_ENABLE
//   Enable transmitting modifier state to slave for oled display
#    define SPLIT_MODS_ENABLE
//   Enable syncing of layer state for oled display on slave
#    define SPLIT_LAYER_STATE_ENABLE
//   Mirror master side matrix to slave for features to react (rgb/oled)
#    define SPLIT_TRANSPORT_MIRROR
#endif

