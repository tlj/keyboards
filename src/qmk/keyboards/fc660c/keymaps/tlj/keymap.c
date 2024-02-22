#include QMK_KEYBOARD_H
#include "tlj.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_wrapper(
    KC_ESC,   __________________ALPHA1_L0__________, __________________ALPHA1_R0__________,   KC_MINS, KC_EQL,  KC_MEBS, KC_INS,
    KC_MEHT,  __________________ALPHA1_L1__________, __________________ALPHA1_R1__________,   KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
    KC_MESC,  __________________ALPHA1_L2__________, __________________ALPHA1_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________ALPHA1_L3__________, KC_N, KC_M,  KC_COMM, KC_DOT, KC_SLSH,   KC_RSFT, KC_UP,
    KC_LCTL,  KC_LGUI, KC_LALT,      KC_SYMC,                     KC_RALT, KC_RCTL, MO(1),    KC_LEFT,KC_DOWN,KC_RGHT
    ),
  [_SYMBOLS] = LAYOUT_wrapper(
    KC_GRV,   __________________SYMBOL_L0__________, __________________SYMBOL_R0__________,   KC_F11,  KC_F12,  KC_DEL,  KC_PGUP,
    KC_TAB,   __________________SYMBOL_L1__________, __________________SYMBOL_R1__________,   KC_HOME, KC_PGDN, KC_END,  KC_PGDN,
    KC_ESC,   __________________SYMBOL_L2__________, __________________SYMBOL_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________SYMBOL_L3__________, __________________SYMBOL_R3__________,   KC_RSFT, KC_PGUP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_HOME,KC_PGDN,KC_END
    ),
  [_NUMBERS] = LAYOUT_wrapper(
    KC_TILD,  KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,KC_RPRN, KC_UNDS, KC_PLUS, KC_BSPC, KC_DEL,
    KC_TAB,   __________________NUMBER_L1__________, __________________NUMBER_R1__________,   KC_LCBR, KC_RCBR, KC_PIPE, KC_DEL,
    KC_ESC,   __________________NUMBER_L2__________, __________________NUMBER_R2__________,   KC_DQUO, KC_ENT,
    KC_LSFT,  __________________NUMBER_L3__________, __________________NUMBER_R3__________,   KC_RSFT, KC_UP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_LEFT,KC_DOWN,KC_RGHT
    ),
  [_NAVI] = LAYOUT_wrapper(
    KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_PGUP,
    KC_TAB,   __________________NAVIGA_L1__________, __________________NAVIGA_R1__________,   KC_HOME, KC_PGDN, KC_END,  KC_PGDN,
    KC_ESC,   __________________NAVIGA_L2__________, __________________NAVIGA_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________NAVIGA_L3__________, __________________NAVIGA_R3__________,   KC_RSFT, KC_PGUP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_HOME,KC_PGDN,KC_END
    ),
  [_MEDIA] = LAYOUT_wrapper(
    KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_PGUP,
    KC_TAB,   __________________MEDIA1_L1__________, __________________MEDIA1_R1__________,   KC_HOME, KC_PGDN, KC_END,  KC_PGDN,
    KC_ESC,   __________________MEDIA1_L2__________, __________________MEDIA1_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________MEDIA1_L3__________, __________________MEDIA1_R3__________,   KC_RSFT, KC_PGUP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_HOME,KC_PGDN,KC_END
    ),
  [_MOUSE] = LAYOUT_wrapper(
    KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_PGUP,
    KC_TAB,   __________________MOUSE1_L1__________, __________________MOUSE1_R1__________,   KC_HOME, KC_PGDN, KC_END,  KC_PGDN,
    KC_ESC,   __________________MOUSE1_L2__________, __________________MOUSE1_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________MOUSE1_L3__________, __________________MOUSE1_R3__________,   KC_RSFT, KC_PGUP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_HOME,KC_PGDN,KC_END
    ),
  [_NORDIC] = LAYOUT_wrapper(
    KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_PGUP,
    KC_TAB,   __________________NORDIC_L1__________, __________________NORDIC_R1__________,   KC_HOME, KC_PGDN, KC_END,  KC_PGDN,
    KC_ESC,   __________________NORDIC_L2__________, __________________NORDIC_R2__________,   KC_QUOT, KC_ENT,
    KC_LSFT,  __________________NORDIC_L3__________, __________________NORDIC_R3__________,   KC_RSFT, KC_PGUP,
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(1),    KC_HOME,KC_PGDN,KC_END
    ),
};
