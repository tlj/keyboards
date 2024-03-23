#include "tap_dances.h"
#include QMK_KEYBOARD_H
#include "keycodes.h"

tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_COMMA_ASTERISK] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_ASTR),
    [TD_H_HASH] = ACTION_TAP_DANCE_DOUBLE(KC_HNUM, KC_HASH),
};
