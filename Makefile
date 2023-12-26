
.PHONY: all
all: ferris_sweep cantor_remix reviung34 splitkb_sweep moonlander

### Ferris Sweep

.PHONY: ferris_sweep
ferris_sweep:
	@echo "Compiling Ferris Sweep tlj keymap..."
	@cd qmk_firmware && make ferris/sweep:tlj

.PHONY: ferris_sweep_flash
ferris_sweep_flash: ferris_sweep
	@cd qmk_firmware && make ferris/sweep:tlj:avrdude-split-left

.PHONY: ferris_sweep_flash_right
ferris_sweep_flash_right: ferris_sweep
	@cd qmk_firmware && make ferris/sweep:tlj:avrdude-split-right

### Cantor Remix

.PHONY: cantor_remix
cantor_remix:
	@echo "Compiling Cantor Remix tlj keymap..."
	@cd qmk_firmware && make cantor/remix:tlj

.PHONY: cantor_remix_flash
cantor_remix_flash: cantor_remix
	@cd qmk_firmware && make cantor/remix:tlj:flash

### Reviung34

.PHONY: reviung34
reviung34:
	@echo "Compiling Reviung34 tlj keymap..."
	@cd qmk_firmware && make reviung/reviung34:tlj

.PHONY: reviung34_flash
reviung34_flash: reviung34
	@cd qmk_firmware && make reviung/reviung34:tlj:avrdude

### Splitkb Sweep

.PHONY: splitkb_sweep
splitkb_sweep:
	@echo "Compiling Splitkb Sweep tlj keymap..."
	@cd qmk_firmware && make splitkb/aurora/sweep/rev1:tlj

.PHONY: splitkb_sweep_flash
splitkb_sweep_flash: splitkb_sweep
	@cd qmk_firmware && make splitkb/aurora/sweep/rev1:tlj:flash

### ZSA Moonlander

.PHONY: moonlander
moonlander:
	@echo "Compiling ZSA Moonlander tlj keymap..."
	@cd zsa_firmware && make moonlander:tlj

.PHONY: moonlander_flash
moonlander_flash: moonlander
	@cd zsa_firmware && make moonlander:tlj:flash

.PHONY: reviung34_zmk
reviung34_zmk:
	@cd zmk && \
		export ZEPHYR_SDK_INSTALL_DIR=~/.local/zephyr-sdk-0.15.0 && \
		export ZEPHYR_TOOLCHAIN_VARIANT=zephyr && \
		source zephyr/zephyr-env.sh && \
		export PATH=$$HOME/Library/Python/3.11/bin:$$PATH && \
		west build --pristine -s zmk/app --board nice_nano_v2 -s ~/src/keyboards/zmk/app -- -DZMK_CONFIG=$$HOME/src/keyboards/zmk-config/config -DSHIELD="reviung34"

.PHONY: reviung34_svg
reviung34_svg:
	@keymap parse -c 10 -z zmk-config/config/reviung34.keymap > reviung34.yaml
	@keymap draw reviung34.yaml > images/reviung34.svg
	@rm reviung34.yaml

.PHONY: reviung34_zmk_flash
reviung34_zmk_flash: reviung34_zmk
	@cd zmk && \
		west flash
