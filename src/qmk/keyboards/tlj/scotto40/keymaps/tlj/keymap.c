#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "tlj.h"

#define LAYOUT_wrapper(...) LAYOUT_ortho_3x10_6(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_wrapper(
        __________________ALPHA1_L1__________, __________________ALPHA1_R1__________,
        __________________ALPHA1_L2__________, __________________ALPHA1_R2__________,
        __________________ALPHA1_L3__________, __________________ALPHA1_R3__________,
                    KC_ESC, ___ALPHA1_L4_____, ___ALPHA1_R4_____, KC_MUTE
    ),
	[_SYMBOLS] = LAYOUT_wrapper(
        __________________SYMBOL_L1__________, __________________SYMBOL_R1__________,
        __________________SYMBOL_L2__________, __________________SYMBOL_R2__________,
        __________________SYMBOL_L3__________, __________________SYMBOL_R3__________,
                     KC_NO, ___SYMBOL_L4_____, ___SYMBOL_R4_____, KC_NO
    ),
	[_NUMBERS] = LAYOUT_wrapper(
        __________________NUMBER_L1__________, __________________NUMBER_R1__________,
        __________________NUMBER_L2__________, __________________NUMBER_R2__________,
        __________________NUMBER_L3__________, __________________NUMBER_R3__________,
                     KC_NO, ___NUMBER_L4_____, ___NUMBER_R4_____, KC_NO
    ),
	[_NAVI] = LAYOUT_wrapper(
        __________________NAVIGA_L1__________, __________________NAVIGA_R1__________,
        __________________NAVIGA_L2__________, __________________NAVIGA_R2__________,
        __________________NAVIGA_L3__________, __________________NAVIGA_R3__________,
                     KC_NO, ___NAVIGA_L4_____, ___NAVIGA_R4_____, KC_NO
    ),
	[_MEDIA] = LAYOUT_wrapper(
        __________________MEDIA1_L1__________, __________________MEDIA1_R1__________,
        __________________MEDIA1_L2__________, __________________MEDIA1_R2__________,
        __________________MEDIA1_L3__________, __________________MEDIA1_R3__________,
                     KC_NO, ___MEDIA1_L4_____, ___MEDIA1_R4_____, KC_NO
    ),
    [_MOUSE] = LAYOUT_wrapper(
        __________________MOUSE1_L1__________, __________________MOUSE1_R1__________,
        __________________MOUSE1_L2__________, __________________MOUSE1_R2__________,
        __________________MOUSE1_L3__________, __________________MOUSE1_R3__________,
                     KC_NO, ___MOUSE1_L4_____, ___MOUSE1_R4_____, KC_NO
    ),
	[_NORDIC] = LAYOUT_wrapper(
        __________________NORDIC_L1__________, __________________NORDIC_R1__________,
        __________________NORDIC_L2__________, __________________NORDIC_R2__________,
        __________________NORDIC_L3__________, __________________NORDIC_R3__________,
                     KC_NO, ___NORDIC_L4_____, ___NORDIC_R4_____, KC_NO
    ),
};

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 0) {
        if (clockwise) {
            tap_code(KC_A);
        } else {
            tap_code(KC_B);
        }
    }
    return true;
}
