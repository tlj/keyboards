#include "definitions/keycodes.h"
#include "definitions/keymap_blocks.h"
#include "process_combo.h"
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
// const uint16_t PROGMEM lprn_combo[] = {KC_SHFJ, KC_I, COMBO_END};
// const uint16_t PROGMEM rprn_combo[] = {KC_SHFJ, KC_I, KC_SYMC, COMBO_END};
// const uint16_t PROGMEM lcbr_combo[] = {KC_SHFJ, KC_O, COMBO_END};
// const uint16_t PROGMEM rcbr_combo[] = {KC_SHFJ, KC_O, KC_SYMC, COMBO_END};
// const uint16_t PROGMEM lbrc_combo[] = {KC_SHFJ, KC_COMM, COMBO_END};
// const uint16_t PROGMEM rbrc_combo[] = {KC_SHFJ, KC_COMM, KC_SYMC, COMBO_END};
// const uint16_t PROGMEM mins_combo[] = {KC_SHFJ, KC_GUIK, KC_CTRL, COMBO_END};
// const uint16_t PROGMEM unsc_combo[] = {KC_SHFJ, KC_GUIK, KC_CTRL, KC_SYMC, COMBO_END};
// const uint16_t PROGMEM eql_combo[] = {KC_SHFJ, KC_CTRL, COMBO_END};
// const uint16_t PROGMEM plus_combo[] = {KC_SHFJ, KC_CTRL, KC_SYMC, COMBO_END};
// const uint16_t PROGMEM quot_combo[] = {KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM dquo_combo[] = {KC_U, KC_I, KC_SYMC, COMBO_END};
//const uint16_t PROGMEM copy_combo[] = {KC_NORC, KC_V, COMBO_END};
//const uint16_t PROGMEM past_combo[] = {KC_NORC, KC_V, KC_SYMC, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {KC_NORC, KC_V, COMBO_END};
const uint16_t PROGMEM num_word_combo[] = {KC_HNUM, KC_SHFJ, COMBO_END};
const uint16_t PROGMEM arrow_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM dquote_combo[] = {KC_M, KC_COMM, COMBO_END};

enum combo_events { 
    C_ESC,
    C_ENTER,
    C_CAPS,
    C_NUMWORD,
    C_DQUOTE,
    C_ARROW,
};

combo_t key_combos[] = {
    [C_ESC] = COMBO(esc_combo, KC_ESC),
    [C_ENTER] = COMBO(enter_combo, KC_ENT),
    [C_CAPS] = COMBO(caps_combo, CW_TOGG),
    [C_NUMWORD] = COMBO(num_word_combo, NUMWORD),
    [C_DQUOTE] = COMBO(dquote_combo, KC_DQUO),
//    COMBO(copy_combo, LGUI(KC_C)),
//    COMBO(past_combo, LGUI(KC_V)),
    [C_ARROW] = COMBO_ACTION(arrow_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case C_ARROW:
            if (pressed) {
                SEND_STRING("->");
            }
            break;
    }
}

