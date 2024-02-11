COMBO_ENABLE      = yes
MOUSEKEY_ENABLE   = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE  = no
UNICODE_COMMON    = yes
UNICODE_ENABLE    = no
UNICODEMAP_ENABLE = yes
CAPS_WORD_ENABLE  = yes

INTROSPECTION_KEYMAP_C = keymaps.c # keymaps
SRC += tlj.c

ifdef OLED_ENABLE
  SRC += extras/oled/oled.c
endif
