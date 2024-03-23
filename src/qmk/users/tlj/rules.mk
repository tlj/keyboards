COMBO_ENABLE      = yes
MOUSEKEY_ENABLE   = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE  = no
UNICODE_COMMON    = yes
UNICODE_ENABLE    = no
UNICODEMAP_ENABLE = yes
CAPS_WORD_ENABLE  = yes
USER_NUM_WORD_ENABLE = yes
TAP_DANCE_ENABLE  = no

INTROSPECTION_KEYMAP_C = keymaps.c # keymaps
SRC += tlj.c

ifdef OLED_ENABLE
  SRC += extras/oled/oled.c
endif

ifeq ($(strip $(USER_NUM_WORD_ENABLE)), yes)
  SRC += features/num_word.c
  OPT_DEFS += -DUSER_NUM_WORD_ENABLE
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += features/tap_dances.c
endif

SRC += process_records.c

