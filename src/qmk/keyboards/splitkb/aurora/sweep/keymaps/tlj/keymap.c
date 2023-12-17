#include QMK_KEYBOARD_H

// turn off the controller led
void keyboard_pre_init_user(void) {
    // set liatris led pin as output
    setPinOutput(24);
    // Turn the led off
    writePinHigh(24);
}

