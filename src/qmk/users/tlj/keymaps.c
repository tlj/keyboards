#include "definitions/keymap_blocks.h"
#include QMK_KEYBOARD_H
#include "tlj.h"

const uint32_t PROGMEM unicode_map[] = {
    [AE_LOWER] = 0x00E6,
    [AE_UPPER] = 0x00C6,
    [OE_LOWER] = 0x00F8,
    [OE_UPPER] = 0x00D8,
    [AA_LOWER] = 0x00E5,
    [AA_UPPER] = 0x00C5,
};

const uint16_t PROGMEM esc_combo[] = {KC_SHFJ, KC_GUIK, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_SHFF, KC_GUID, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_SHFJ, KC_I, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_SHFJ, KC_I, KC_SYMC, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {KC_SHFJ, KC_O, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_SHFJ, KC_O, KC_SYMC, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_SHFJ, KC_COMM, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_SHFJ, KC_COMM, KC_SYMC, COMBO_END};
const uint16_t PROGMEM mins_combo[] = {KC_SHFJ, KC_GUIK, KC_CTRL, COMBO_END};
const uint16_t PROGMEM unsc_combo[] = {KC_SHFJ, KC_GUIK, KC_CTRL, KC_SYMC, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {KC_SHFJ, KC_CTRL, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_SHFJ, KC_CTRL, KC_SYMC, COMBO_END};
const uint16_t PROGMEM quot_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM dquo_combo[] = {KC_U, KC_I, KC_SYMC, COMBO_END};
//const uint16_t PROGMEM copy_combo[] = {KC_NORC, KC_V, COMBO_END};
//const uint16_t PROGMEM past_combo[] = {KC_NORC, KC_V, KC_SYMC, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {KC_NORC, KC_V, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(enter_combo, KC_ENT),
    COMBO(lprn_combo, KC_LPRN),
    COMBO(rprn_combo, KC_RPRN),
    COMBO(lcbr_combo, KC_LCBR),
    COMBO(rcbr_combo, KC_RCBR),
    COMBO(lbrc_combo, KC_LBRC),
    COMBO(rbrc_combo, KC_RBRC),
    COMBO(mins_combo, KC_MINS),
    COMBO(unsc_combo, KC_UNDS),
    COMBO(eql_combo, KC_EQL),
    COMBO(plus_combo, KC_PLUS),
    COMBO(quot_combo, KC_QUOT),
    COMBO(dquo_combo, KC_DQUO),
    COMBO(caps_combo, CW_TOGG),
//    COMBO(copy_combo, LGUI(KC_C)),
//    COMBO(past_combo, LGUI(KC_V)),
};

