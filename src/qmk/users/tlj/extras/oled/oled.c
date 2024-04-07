#include "bongo_cat.c"
#include "mouse_pointer.c"
#include "tlj.h"
#include <stdio.h>
char wpm_str[10];

void render_space_tlj(void) {
    oled_write_P(PSTR("     "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;
    }

    return rotation;
}

void render_mod_status_gui_alt_tlj(uint8_t modifiers) {
    static const char PROGMEM gui_off_1[] = {0x85, 0x86, 0};
    static const char PROGMEM gui_off_2[] = {0xa5, 0xa6, 0};
    static const char PROGMEM gui_on_1[] = {0x8d, 0x8e, 0};
    static const char PROGMEM gui_on_2[] = {0xad, 0xae, 0};

    static const char PROGMEM alt_off_1[] = {0x87, 0x88, 0};
    static const char PROGMEM alt_off_2[] = {0xa7, 0xa8, 0};
    static const char PROGMEM alt_on_1[] = {0x8f, 0x90, 0};
    static const char PROGMEM alt_on_2[] = {0xaf, 0xb0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[] = {0xc7, 0};
    static const char PROGMEM on_off_2[] = {0xc8, 0};
    static const char PROGMEM off_on_1[] = {0xc9, 0};
    static const char PROGMEM off_on_2[] = {0xca, 0};
    static const char PROGMEM on_on_1[] = {0xcb, 0};
    static const char PROGMEM on_on_2[] = {0xcc, 0};

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_1, false);
    } else {
        oled_write_P(gui_off_1, false);
    }

    if ((modifiers & MOD_MASK_GUI) && (modifiers & MOD_MASK_ALT)) {
        oled_write_P(on_on_1, false);
    } else if(modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_1, false);
    } else if(modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_1, false);
    } else {
        oled_write_P(alt_off_1, false);
    }

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_2, false);
    } else {
        oled_write_P(gui_off_2, false);
    }

    if (modifiers & MOD_MASK_GUI & MOD_MASK_ALT) {
        oled_write_P(on_on_2, false);
    } else if(modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_2, false);
    } else if(modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_2, false);
    } else {
        oled_write_P(alt_off_2, false);
    }
}

void render_mod_status_ctrl_shift_tlj(uint8_t modifiers) {
    static const char PROGMEM ctrl_off_1[] = {0x89, 0x8a, 0};
    static const char PROGMEM ctrl_off_2[] = {0xa9, 0xaa, 0};
    static const char PROGMEM ctrl_on_1[] = {0x91, 0x92, 0};
    static const char PROGMEM ctrl_on_2[] = {0xb1, 0xb2, 0};

    static const char PROGMEM shift_off_1[] = {0x8b, 0x8c, 0};
    static const char PROGMEM shift_off_2[] = {0xab, 0xac, 0};
    static const char PROGMEM shift_on_1[] = {0xcd, 0xce, 0};
    static const char PROGMEM shift_on_2[] = {0xcf, 0xd0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[] = {0xc7, 0};
    static const char PROGMEM on_off_2[] = {0xc8, 0};
    static const char PROGMEM off_on_1[] = {0xc9, 0};
    static const char PROGMEM off_on_2[] = {0xca, 0};
    static const char PROGMEM on_on_1[] = {0xcb, 0};
    static const char PROGMEM on_on_2[] = {0xcc, 0};

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_1, false);
    } else {
        oled_write_P(ctrl_off_1, false);
    }

    if ((modifiers & MOD_MASK_CTRL) && (modifiers & MOD_MASK_SHIFT)) {
        oled_write_P(on_on_1, false);
    } else if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_1, false);
    } else if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_1, false);
    } else {
        oled_write_P(shift_off_1, false);
    }

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_2, false);
    } else {
        oled_write_P(ctrl_off_2, false);
    }

    if (modifiers & MOD_MASK_CTRL & MOD_MASK_SHIFT) {
        oled_write_P(on_on_2, false);
    } else if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_2, false);
    } else if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_2, false);
    } else {
        oled_write_P(shift_off_2, false);
    }
}

bool oled_task_user(void) {
    if (!is_keyboard_master()) {
        if (get_highest_layer(layer_state) == _MOUSE) {
            oled_write_raw_P(mouse_pointer, sizeof(mouse_pointer));
            return false;
        } else {
            render_anim();
            // sets cursor to (row, column) using charactar spacing (5 rows on 128x32 screen, anything more will overflow back to the top)
            oled_set_cursor(0, 0);
            // edit the string to change wwhat shows up, edit %03d to change how many digits show up
            sprintf(wpm_str, "WPM:%03d", get_current_wpm());
            oled_write(wpm_str, false);
            return false;
        }
    }

    // A 128x32 OLED rotated 90 degrees is 5 characters wide and 16 characters tall
    static const char PROGMEM left_arrow[] = {0x1B, 0};
    static const char PROGMEM down_arrow[] = {0x19, 0};
    static const char PROGMEM up_arrow[] = {0x18, 0};
    static const char PROGMEM right_arrow[] = {0x1A, 0};

    oled_set_cursor(0, 0);

    switch (get_highest_layer(layer_state)) {
        case _DEFAULT:
            render_space_tlj();
            render_space_tlj();

            oled_write_P("qwertasdfgzxcvb", false);
            render_space_tlj();

            oled_write_P("yuiophjkl;nm,. ", false);
            break;
        case _SYMBOLS:
            oled_write_P("Symbs", false);
            render_space_tlj();

            oled_write_P(" %{}^ @()$  []*", false);
            render_space_tlj();

            oled_write_P(" `'  /:=\"  \\-  ", false);

            break;
        case _NUMBERS:
            oled_write_P("Numbs", false);
            render_space_tlj();

            oled_write_P("  789  456  123  0  ", false);

            render_space_tlj();
            render_space_tlj();
            render_space_tlj();

            break;
        case _NAVI:
            oled_write("Navi ", false);
            render_space_tlj();

            render_space_tlj();
            render_space_tlj();
            render_space_tlj();
            render_space_tlj();

            render_space_tlj();
            oled_write_P(left_arrow, false);
            oled_write_P(down_arrow, false);
            oled_write_P(up_arrow, false);
            oled_write_P(right_arrow, false);
            oled_write_P(" ", false);
            render_space_tlj();

            break;
        case _MEDIA:
            oled_clear();
            oled_write("Media          ", false);
            return false;
            break;
        case _MOUSE:
            oled_clear();
            oled_write("Mouse          ", false);
            return false;
            break;
        case _GAMING:
            oled_clear();
            oled_write("Gaming         ", false);
            return false;
            break;
    }

    render_space_tlj();
    render_mod_status_gui_alt_tlj(get_mods()|get_oneshot_mods());
    render_mod_status_ctrl_shift_tlj(get_mods()|get_oneshot_mods());
    render_space_tlj();

    return false;
}

