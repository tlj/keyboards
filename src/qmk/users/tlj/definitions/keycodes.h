#pragma once

#include "quantum_keycodes.h"
enum layers {
    _DEFAULT,
    _SYMBOLS,
    _NUMBERS,
    _NAVI,
    _MEDIA,
    _MOUSE,
    _NORDIC,
};

enum unicode_names {
    AE_LOWER,
    AE_UPPER,
    OE_LOWER,
    OE_UPPER,
    AA_LOWER,
    AA_UPPER,
};

enum userspace_custom_keycodes {
    NUMWORD = SAFE_RANGE,
};

#define KC_ALTA LALT_T(KC_A)
#define KC_CTRS LCTL_T(KC_S)
#define KC_GUID LGUI_T(KC_D)
#define KC_SHFF LSFT_T(KC_F)
#define KC_GNAV LT(_NAVI,KC_G)
#define KC_HNUM LT(_NUMBERS,KC_H)
#define KC_SHFJ RSFT_T(KC_J)
#define KC_GUIK RGUI_T(KC_K)
#define KC_CTRL RCTL_T(KC_L)
#define KC_ALTS RALT_T(KC_SCLN)
#define KC_NORC LT(_NORDIC, KC_C)
#define KC_SYMC LT(_SYMBOLS, KC_SPC)
#define KC_SYBS LT(_SYMBOLS, KC_BSPC)
#define KC_ZMOU LT(_MOUSE, KC_Z)
#define KC_MEHT MEH_T(KC_TAB)
#define KC_MEBS LT(_MEDIA, KC_BSPC)
#define KC_GUIR LGUI(KC_R)
#define KC_GUIL LGUI(KC_LBRC)
#define KC_GURB LGUI(KC_RBRC)
#define KC_NOAE UP(AE_LOWER, AE_UPPER)
#define KC_NOOE UP(OE_LOWER, OE_UPPER)
#define KC_NOAA UP(AA_LOWER, AA_UPPER)


