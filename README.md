# tlj's keyboard layouts

## Prerequisites

```shell

sudo apt install -y git python3-pip
python3 -m pip install --user qmk
qmk setup -H ~/src/keyboards/qmk_firmware
```

## Building

Fetch QMK and set up all the symlinks:

```shell
./init_qmk.sh
```

Build all keyboards:
```shell
make all
```

### Flashing under WSL

If the keyboard has an RP2040 or similar which creates a disk drive when in flash mode, you can use a command like this or similar, then put the keyboard into flash mode:

```
sleep 10 && sudo mount -t drvfs D: /mnt/d && cp qmk_firmware/splitkb_aurora_sweep_rev1_tlj_liatris.uf2 /mnt/d
```

## References

### Keyboards

- [Cantor Remix](https://github.com/nilokr/cantor-remix)
- [Ferris Sweep](https://github.com/davidphilipbarr/Sweep)
- [Reviung34 Split MK.II](https://github.com/gtips/reviung/tree/master/reviung34split_Mk-II)
- [Reviung34 Split MK.II](https://github.com/gtips/reviung/tree/master/reviung34split_Mk-II) (wireless zmk)
- [Splitkb Aurora Sweep](https://splitkb.com/products/aurora-sweep)
- [ZSA Moonlander](https://www.zsa.io/moonlander/)
- [Charybdis Nano](https://bastardkb.com/product/charybdis-nano-kit/)
- [Leopold FC660C (Topre) w/hasu controller](https://https://deskthority.net/wiki/Leopold_FC660C)

