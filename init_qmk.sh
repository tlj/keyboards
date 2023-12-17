#!/usr/bin/env bash

KEYBOARD_HOME="$(pwd)"
QMK_HOME="$KEYBOARD_HOME/qmk_firmware"
USER_SPACE="$QMK_HOME/users"

KEYBOARDS="cantor ferris reviung/reviung34 splitkb/aurora/sweep"
KEYBOARD_VARIATIONS="cantor/remix"

if [[ ! -d "$QMK_HOME" ]]
then
    echo "Add git sub-modules..."
    git submodule add -f https://github.com/qmk/qmk_firmware
fi
echo "Update git sub-modules..."
git submodule sync --recursive
git submodule update --init --recursive --progress

if [[ ! -d "${USER_SPACE}/tlj" ]]; then
  echo "Creating userspace symbolic link..."
  ln -s "$KEYBOARD_HOME/src/qmk/users/tlj" "$USER_SPACE"
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

