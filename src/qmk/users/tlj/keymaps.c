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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,            KC_Y,          KC_U,         KC_I,         KC_O,         KC_P,
        KC_ALTA,      KC_CTRS,      KC_GUID,      KC_SHFF,      KC_GNAV,         KC_HNUM,       KC_SHFJ,      KC_GUIK,      KC_CTRL,      KC_ALTS,
        KC_Z,         KC_X,         KC_NORC,      KC_V,         KC_B,            KC_N,          KC_M,         KC_COMM,      KC_DOT,       KC_ENT,
                                                  KC_SYMC,      KC_MEHT,         KC_MEBS,       KC_SYMC
    ),
	[_SYMBOLS] = LAYOUT(
        KC_NO,        KC_PERC,      KC_LCBR,      KC_RCBR,      KC_CIRC,         KC_AMPR,       KC_GRV,       KC_QUOT,      KC_NO,        KC_NO,
        KC_LSFT,      KC_AT,        KC_LPRN,      KC_RPRN,      KC_DLR,          KC_SLSH,       KC_COLN,      KC_EQL,       KC_DQUO,      KC_RSFT,
        KC_NO,        KC_EXCLAIM,   KC_LBRC,      KC_RBRC,      KC_ASTR,         KC_PIPE,       KC_BSLS,      KC_MINS,      KC_UNDS,      KC_NO,
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
	[_NUMBERS] = LAYOUT(
        KC_NO,        KC_NO,        KC_7,         KC_8,         KC_9,            KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_LSFT,      KC_NO,        KC_4,         KC_5,         KC_6,            KC_NO,         KC_LSFT,      KC_NO,        KC_NO,        KC_LSFT,
        KC_NO,        KC_NO,        KC_1,         KC_2,         KC_3,            KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
                                                  KC_0,         KC_PENT,         KC_NO,         KC_NO
    ),
	[_NAVI] = LAYOUT(
        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,           KC_F6,         KC_F7,        KC_F8,        KC_F9,        KC_F10,
        KC_LALT,      KC_LCTL,      KC_LGUI,      KC_LSFT,      KC_NO,           KC_LEFT,       KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,
        KC_F11,       KC_F12,       KC_NO,        KC_NO,        KC_NO,           KC_HOME,       KC_PGDN,      KC_PGUP,      KC_END,       TG(_MOUSE),
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
	[_MEDIA] = LAYOUT(
        RGB_MOD,      RGB_HUI,      RGB_SAI,      RGB_VAI,      RGB_SPI,         KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        RGB_TOG,      KC_NO,        KC_ESC,       KC_ENT,       KC_NO,           KC_MUTE,       KC_VOLD,      KC_VOLU,      KC_NO,        KC_NO,
        RGB_RMOD,     RGB_HUD,      RGB_SAD,      RGB_VAD,      RGB_SPD,         KC_MPLY,       KC_MPRV,      KC_MNXT,      KC_NO,        KC_NO,
                                                  KC_NO,        QK_BOOT,         KC_NO,         KC_NO
    ),
    [_MOUSE] = LAYOUT(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_WH_D,      KC_WH_U,      KC_NO,        KC_NO,
        KC_NO,        KC_NO,        KC_BTN2,      KC_BTN1,      KC_NO,           KC_MS_L,       KC_MS_D,      KC_MS_U,      KC_MS_R,      KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_GUIR,       KC_GUIL,      KC_GURB,      KC_NO,        TG(_MOUSE),
                                                  KC_NO,        KC_NO,           KC_BTN2,       KC_BTN1
    ),
	[_NORDIC] = LAYOUT(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_LSFT,      KC_NO,           KC_NO,         KC_NOAE,      KC_NOOE,      KC_NOAA,      KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
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
const uint16_t PROGMEM copy_combo[] = {KC_NORC, KC_V, COMBO_END};
const uint16_t PROGMEM past_combo[] = {KC_NORC, KC_V, KC_SYMC, COMBO_END};

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
    COMBO(copy_combo, LGUI(KC_C)),
    COMBO(past_combo, LGUI(KC_V)),
};

