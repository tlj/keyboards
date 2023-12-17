
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

