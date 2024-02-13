#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"


#define __________________EMPTY______________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO

#define __________________ALPHA1_L1__________  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __________________ALPHA1_R1__________  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __________________ALPHA1_L2__________  KC_ALTA, KC_CTRS, KC_GUID, KC_SHFF, KC_GNAV
#define __________________ALPHA1_R2__________  KC_HNUM, KC_SHFJ, KC_GUIK, KC_CTRL, KC_ALTS
#define __________________ALPHA1_L3__________  KC_ZMOU, KC_X,    KC_NORC, KC_V,    KC_B
#define __________________ALPHA1_R3__________  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_ENT
#define                     ___ALPHA1_L4_____  KC_SYMC, KC_MEHT
#define ___ALPHA1_R4_____                      KC_MEBS, KC_SYMC

#define __________________SYMBOL_L1__________  KC_NO,   KC_PERC, KC_LCBR, KC_RCBR, KC_CIRC
#define __________________SYMBOL_R1__________  KC_AMPR, KC_GRV,  KC_QUOT, KC_NO,   KC_NO
#define __________________SYMBOL_L2__________  KC_LSFT, KC_AT,   KC_LPRN, KC_RPRN, KC_DLR
#define __________________SYMBOL_R2__________  KC_SLSH, KC_COLN, KC_EQL,  KC_DQUO, KC_RSFT
#define __________________SYMBOL_L3__________  KC_NO, KC_EXCLAIM,KC_LBRC, KC_RBRC, KC_ASTR
#define __________________SYMBOL_R3__________  KC_PIPE, KC_BSLS, KC_MINS, KC_UNDS, KC_NO
#define                     ___SYMBOL_L4_____  KC_NO,   KC_NO
#define ___SYMBOL_R4_____                      KC_NO,   KC_NO

#define __________________NUMBER_L1__________  KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9
#define __________________NUMBER_R1__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________NUMBER_L2__________  KC_LSFT, KC_NO,   KC_4,    KC_5,    KC_6
#define __________________NUMBER_R2__________  KC_NO,   KC_LSFT, KC_NO,   KC_NO,   KC_LSFT
#define __________________NUMBER_L3__________  KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3
#define __________________NUMBER_R3__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define                     ___NUMBER_L4_____  KC_0,    KC_PENT
#define ___NUMBER_R4_____                      KC_NO,   KC_NO

#define __________________NAVIGA_L1__________  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define __________________NAVIGA_R1__________  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define __________________NAVIGA_L2__________  KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_NO
#define __________________NAVIGA_R2__________  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO
#define __________________NAVIGA_L3__________  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO
#define __________________NAVIGA_R3__________  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  TG(_MOUSE)
#define                     ___NAVIGA_L4_____  KC_NO,   KC_NO
#define ___NAVIGA_R4_____                      KC_NO,   KC_NO


#define __________________MEDIA1_L1__________  RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI
#define __________________MEDIA1_R1__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________MEDIA1_L2__________  RGB_TOG, KC_NO,   KC_ESC,  KC_ENT,  KC_NO
#define __________________MEDIA1_R2__________  KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,   KC_NO
#define __________________MEDIA1_L3__________  RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD
#define __________________MEDIA1_R3__________  KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,   KC_NO
#define                     ___MEDIA1_L4_____  KC_NO,   QK_BOOT
#define ___MEDIA1_R4_____                      KC_NO,   KC_NO

#define __________________MOUSE1_L1__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________MOUSE1_R1__________  KC_NO,   KC_WH_D, KC_WH_U, KC_NO,   KC_NO
#define __________________MOUSE1_L2__________  KC_NO,   KC_NO,   KC_BTN2, KC_BTN1, KC_NO
#define __________________MOUSE1_R2__________  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO
#define __________________MOUSE1_L3__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________MOUSE1_R3__________  KC_GUIR, KC_GUIL, KC_GURB, KC_NO,   TG(_MOUSE)
#define                     ___MOUSE1_L4_____  KC_NO,   KC_NO
#define ___MOUSE1_R4_____                      KC_BTN2, KC_BTN1


#define __________________NORDIC_L1__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________NORDIC_R1__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________NORDIC_L2__________  KC_NO,   KC_NO,   KC_NO,   KC_LSFT, KC_NO
#define __________________NORDIC_R2__________  KC_NO,   KC_NOAE, KC_NOOE, KC_NOAA, KC_NO
#define __________________NORDIC_L3__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __________________NORDIC_R3__________  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define                     ___NORDIC_L4_____  KC_NO,   KC_NO
#define ___NORDIC_R4_____                      KC_NO,   KC_NO

