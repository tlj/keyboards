#!/usr/bin/env bash

KEYBOARD_HOME="$(pwd)"
QMK_HOME="$KEYBOARD_HOME/qmk_firmware"
ZSA_HOME="$KEYBOARD_HOME/zsa_firmware"
USER_SPACE="$QMK_HOME/users"
ZSA_USER_SPACE="$ZSA_HOME/users"

KEYBOARDS="cantor ferris reviung/reviung34 splitkb/aurora/sweep bastardkb/charybdis/3x5 fc660c tlj/scotto40"
KEYBOARD_VARIATIONS="cantor/remix tlj"

ZSA_KEYBOARDS="moonlander voyager"

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

echo "Creating userspace symbolic link..."
rm -f "${USER_SPACE}/tlj"
ln -s "$KEYBOARD_HOME/src/qmk/users/tlj" "$USER_SPACE"

echo "Creating ZSA userspace symbolic link..."
rm -f "${ZSA_USER_SPACE}/tlj"
ln -s "$KEYBOARD_HOME/src/qmk/users/tlj" "$ZSA_USER_SPACE"

for KEYBOARD_VARIATION in $KEYBOARD_VARIATIONS; do
  echo "Creating keyboard variation symbolic link for $KEYBOARD_VARIATION"
  rm -f "$QMK_HOME/keyboards/$KEYBOARD_VARIATION"
  ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD_VARIATION" "$QMK_HOME/keyboards/$KEYBOARD_VARIATION"
done

for KEYBOARD in $KEYBOARDS; do
  echo "Creating keyboard symbolic link for $KEYBOARD..."
  rm -f "$QMK_HOME/keyboards/$KEYBOARD/keymaps/tlj"
  ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD/keymaps/tlj" "$QMK_HOME/keyboards/$KEYBOARD/keymaps/tlj"
done

for KEYBOARD in $ZSA_KEYBOARDS; do
  echo "Creating keyboard symbolic link for $KEYBOARD..."
  rm -f "$ZSA_HOME/keyboards/$KEYBOARD/keymaps/tlj"
  ln -s "$KEYBOARD_HOME/src/qmk/keyboards/$KEYBOARD/keymaps/tlj" "$ZSA_HOME/keyboards/$KEYBOARD/keymaps/tlj"
done

