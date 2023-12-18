#include QMK_KEYBOARD_H
#include "tlj.h"

// turn off the controller led
void keyboard_pre_init_user(void) {
    // set liatris led pin as output
    setPinOutput(24);
    // Turn the led off
    writePinHigh(24);
}

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_2(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_wrapper(
        __________________ALPHA1_L1__________, __________________ALPHA1_R1__________,
        __________________ALPHA1_L2__________, __________________ALPHA1_R2__________,
        __________________ALPHA1_L3__________, __________________ALPHA1_R3__________,
                            ___ALPHA1_L4_____, ___ALPHA1_R4_____
    ),
	[_SYMBOLS] = LAYOUT_wrapper(
        __________________SYMBOL_L1__________, __________________SYMBOL_R1__________,
        __________________SYMBOL_L2__________, __________________SYMBOL_R2__________,
        __________________SYMBOL_L3__________, __________________SYMBOL_R3__________,
                            ___SYMBOL_L4_____, ___SYMBOL_R4_____
    ),
	[_NUMBERS] = LAYOUT_wrapper(
        __________________NUMBER_L1__________, __________________NUMBER_R1__________,
        __________________NUMBER_L2__________, __________________NUMBER_R2__________,
        __________________NUMBER_L3__________, __________________NUMBER_R3__________,
                            ___NUMBER_L4_____, ___NUMBER_R4_____
    ),
	[_NAVI] = LAYOUT_wrapper(
        __________________NAVIGA_L1__________, __________________NAVIGA_R1__________,
        __________________NAVIGA_L2__________, __________________NAVIGA_R2__________,
        __________________NAVIGA_L3__________, __________________NAVIGA_R3__________,
                            ___NAVIGA_L4_____, ___NAVIGA_R4_____
    ),
	[_MEDIA] = LAYOUT_wrapper(
        __________________MEDIA1_L1__________, __________________MEDIA1_R1__________,
        __________________MEDIA1_L2__________, __________________MEDIA1_R2__________,
        __________________MEDIA1_L3__________, __________________MEDIA1_R3__________,
                            ___MEDIA1_L4_____, ___MEDIA1_R4_____
    ),
    [_MOUSE] = LAYOUT_wrapper(
        __________________MOUSE1_L1__________, __________________MOUSE1_R1__________,
        __________________MOUSE1_L2__________, __________________MOUSE1_R2__________,
        __________________MOUSE1_L3__________, __________________MOUSE1_R3__________,
                            ___MOUSE1_L4_____, ___MOUSE1_R4_____
    ),
	[_NORDIC] = LAYOUT_wrapper(
        __________________NORDIC_L1__________, __________________NORDIC_R1__________,
        __________________NORDIC_L2__________, __________________NORDIC_R2__________,
        __________________NORDIC_L3__________, __________________NORDIC_R3__________,
                            ___NORDIC_L4_____, ___NORDIC_R4_____
    ),
};
