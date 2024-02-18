#!/usr/bin/env bash

KEYBOARD_HOME="$(pwd)"
QMK_HOME="$KEYBOARD_HOME/qmk_firmware"
ZSA_HOME="$KEYBOARD_HOME/zsa_firmware"
USER_SPACE="$QMK_HOME/users"
ZSA_USER_SPACE="$ZSA_HOME/users"

KEYBOARDS="cantor ferris reviung/reviung34 splitkb/aurora/sweep bastardkb/charybdis/3x5 fc660c"
KEYBOARD_VARIATIONS="cantor/remix"

ZSA_KEYBOARDS="moonlander"

if [[ ! -d "$QMK_HOME" ]]; then
    echo "Add QMK submodule..."
    git submodule add -f https://github.com/qmk/qmk_firmware
fi

if [[ ! -d "$ZSA_HOME" ]]; then
  echo "Add ZSA QMK submodule..."
  git submodule add https://github.com/zsa/qmk_firmware zsa_firmware
fi

echo "Update git sub-modules..."
git submodule sync --recursive
git submodule update --init --recursive --progress

if [[ ! -d "${USER_SPACE}/tlj" ]]; then
  echo "Creating userspace symbolic link..."
  ln -s "$KEYBOARD_HOME/src/qmk/users/tlj" "$USER_SPACE"
fi

if [[ ! -d "${ZSA_USER_SPACE}/tlj" ]]; then
  echo "Creating ZSA userspace symbolic link..."
  ln -s "$KEYBOARD_HOME/src/qmk/users/tlj" "$ZSA_USER_SPACE"
fi

for KEYBOARD_VARIATION in $KEYBOARD_VARIATIONS; do
  if [[ ! -d "$QMK_HOME/keyboards/$KEYBOARD_VARIATION" ]]; then
    echo "Creating keyboard variation symbolic link for $KEYBOARD_VARIATION"
    ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD_VARIATION" "$QMK_HOME/keyboards/$KEYBOARD_VARIATION"
  fi
done

for KEYBOARD in $KEYBOARDS; do
  if [[ ! -d "$QMK_HOME/keyboards/$KEYBOARD/keymaps/tlj" ]]; then
    echo "Creating keyboard symbolic link for $KEYBOARD..."
    ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD/keymaps/tlj" "$QMK_HOME/keyboards/$KEYBOARD/keymaps/tlj"
  fi
done

for KEYBOARD in $ZSA_KEYBOARDS; do
  if [[ ! -d "$ZSA_HOME/keyboards/$KEYBOARD/keymaps/tlj" ]]; then
    echo "Creating keyboard symbolic link for $KEYBOARD..."
    ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD/keymaps/tlj" "$ZSA_HOME/keyboards/$KEYBOARD/keymaps/tlj"
  fi
done

