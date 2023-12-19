#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "tlj.h"

#define LAYOUT_wrapper(...) LAYOUT_reviung34_2u(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_wrapper(
        __________________ALPHA1_L1__________, __________________ALPHA1_R1__________,
        __________________ALPHA1_L2__________, __________________ALPHA1_R2__________,
        __________________ALPHA1_L3__________, __________________ALPHA1_R3__________,
                             KC_SYBS, KC_MEHT, KC_SYMC
    ),
	[_SYMBOLS] = LAYOUT_wrapper(
        __________________SYMBOL_L1__________, __________________SYMBOL_R1__________,
        __________________SYMBOL_L2__________, __________________SYMBOL_R2__________,
        __________________SYMBOL_L3__________, __________________SYMBOL_R3__________,
                             KC_NO,   KC_NO,   KC_NO
    ),
	[_NUMBERS] = LAYOUT_wrapper(
        __________________NUMBER_L1__________, __________________NUMBER_R1__________,
        __________________NUMBER_L2__________, __________________NUMBER_R2__________,
        __________________NUMBER_L3__________, __________________NUMBER_R3__________,
                             KC_PENT, KC_0,    KC_NO
    ),
	[_NAVI] = LAYOUT_wrapper(
        __________________NAVIGA_L1__________, __________________NAVIGA_R1__________,
        __________________NAVIGA_L2__________, __________________NAVIGA_R2__________,
        __________________NAVIGA_L3__________, __________________NAVIGA_R3__________,
                             KC_NO,   KC_NO,   KC_NO
    ),
	[_MEDIA] = LAYOUT_wrapper(
        __________________MEDIA1_L1__________, __________________MEDIA1_R1__________,
        __________________MEDIA1_L2__________, __________________MEDIA1_R2__________,
        __________________MEDIA1_L3__________, __________________MEDIA1_R3__________,
                             KC_NO,   KC_NO,   QK_BOOT
    ),
    [_MOUSE] = LAYOUT_wrapper(
        __________________MOUSE1_L1__________, __________________MOUSE1_R1__________,
        __________________MOUSE1_L2__________, __________________MOUSE1_R2__________,
        __________________MOUSE1_L3__________, __________________MOUSE1_R3__________,
                             KC_BTN2, KC_BTN1, KC_BTN1
    ),
	[_NORDIC] = LAYOUT_wrapper(
        __________________NORDIC_L1__________, __________________NORDIC_R1__________,
        __________________NORDIC_L2__________, __________________NORDIC_R2__________,
        __________________NORDIC_L3__________, __________________NORDIC_R3__________,
                             KC_NO,   KC_NO,   KC_NO
    ),
};
