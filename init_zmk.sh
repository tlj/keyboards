#!/bin/bash

KEYBOARD_HOME="$(pwd)"
export ZMK_HOME="$KEYBOARD_HOME/zmk"

INIT=false
if [[ ! -d "$ZMK_HOME" ]]
then
    INIT=true
    echo "Add git sub-modules..."
    git submodule add -f https://github.com/tlj/zmk
fi
echo "Update git sub-modules..."
git submodule sync --recursive
git submodule update --init --recursive --progress

echo "Checking out zmk..."
cd $ZMK_HOME
git pull

if [[ "${INIT}" == "true" ]]
then
    echo "Initializing West..."
    west init -l app/
fi

echo "Updating West..."
west update
west zephyr-export
cd ..

if [[ ! -d "~/.local/zephyr-sdk-0.16.3" ]]
then
  brew install cmake ninja gperf python3 ccache qemu dtc wget libmagic
  pip3 install -U west
  pip3 install -U pyelftools
  pip3 install --user --break-system-packages -r zephyr/scripts/requirements-base.txt
  curl -L -o ~/Downloads/zephyr.tar.gz https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v0.15.0/zephyr-sdk-0.15.0_macos-aarch64.tar.gz
  tar zxf ~/Downloads/zephyr.tar.gz -C ~/.local/
fi

