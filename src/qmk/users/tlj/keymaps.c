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
const uint16_t PROGMEM caps_combo[] = {KC_NORC, KC_V, COMBO_END};
const uint16_t PROGMEM asterix_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM num_word_combo[] = {KC_HNUM, KC_SHFJ, COMBO_END};
const uint16_t PROGMEM turbo_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM arrow_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM hash_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM notlike_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM tmuxsesh_combo[] = {KC_GUIK, KC_CTRL, COMBO_END};
const uint16_t PROGMEM tmuxleader_combo[] = {KC_CTRS, KC_GUID, COMBO_END};

enum combo_events { 
    C_ESC,
    C_ENTER,
    C_CAPS,
    C_NUMWORD,
    C_TURBO,
    C_NOTLIKE,
    C_TMUXSESH,
    C_TMUXLEADER,
    C_COPY,
    C_PAST,
    C_ARROW,
    C_HASH,
    C_ASTERIX,
};

combo_t key_combos[] = {
    [C_ESC] = COMBO(esc_combo, KC_ESC),
    [C_ENTER] = COMBO(enter_combo, KC_ENT),
    [C_CAPS] = COMBO(caps_combo, CW_TOGG),
    [C_HASH] = COMBO(hash_combo, KC_HASH),
    [C_NUMWORD] = COMBO(num_word_combo, NUMWORD),
    [C_TURBO] = COMBO(turbo_combo, TURBO),
    [C_ASTERIX] = COMBO(asterix_combo, KC_ASTR),
    [C_ARROW] = COMBO_ACTION(arrow_combo),
    [C_TMUXSESH] = COMBO_ACTION(tmuxsesh_combo),
    [C_NOTLIKE] = COMBO_ACTION(notlike_combo),
    [C_TMUXLEADER] = COMBO_ACTION(tmuxleader_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case C_ARROW:
            if (pressed) {
                SEND_STRING("->");
            }
            break;
        case C_NOTLIKE:
            if (pressed) {
                SEND_STRING("!=");
            }
            break;
        case C_TMUXSESH:
            if (pressed) {
                SEND_STRING(SS_LCTL("e") "T");
            }
            break;
        case C_TMUXLEADER:
            if (pressed) {
                SEND_STRING(SS_LCTL("e"));
            }
            break;
    }
}

