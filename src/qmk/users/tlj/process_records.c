/* Copyright 2021 Joshua T.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "process_records.h"

uint8_t mod_state;


__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Returning true here will cause QMK to continue handling the key normally.
    // Returning false indicates that we've handled everything the keycode should do, and QMK
    // should not continue handling the keypress.
    //
    // NOTE: There is also a process_record_kb function that can be defined in the keyboard-
    // specific code. This allows the keyboard to have its own process_record function.
    // This is supposed to be "higher" than the user function, meaning the kb function
    // is shared for all keymaps for the keyboard.
    //
    // For this reason, I add my own function, called process_record_user_kb, and at the end
    // of this function, I defer to that one if it exists.
    // return process_record_user(keycode, record);


    // Custom keycode / function handling, based on the core function
    // process_record_quantum
    // https://github.com/qmk/qmk_firmware/blob/master/quantum/quantum.c

    if (!(
#ifdef USER_NUM_WORD_ENABLE
        process_record_num_word(keycode, record) &&
#endif
#ifdef USER_MOUSE_TURBO_CLICK_ENABLE
        process_mouse_turbo_click(keycode, record, TURBO) &&
#endif
        true)) {
        return false;
    }

    return process_record_user_kb(keycode, record);
}
