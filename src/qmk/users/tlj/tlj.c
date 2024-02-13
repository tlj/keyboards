#include QMK_KEYBOARD_H
#include "tlj.h"

// for transporting keypresses between halves
bool should_process_keypress(void) { return true; }

__attribute__ ((weak))
void keyboard_post_init_user_kb(void) { }

void keyboard_post_init_user(void) {
    keyboard_post_init_user_kb();
}
