# Quantum Mechanical Keyboard Firmware for POK3R

This repository contains keyboard firmware based on the [qmk\_firmware](http://github.com/qmk/qmk_firmware) project for a number of Holtek MCU-based keyboards. See below for supported and planned keyboards.

## Building
```sh
make git-submodule
make vortex/core:ewpratten
```

## Installation

**WARNING: This firmware only works on [unlocked](https://github.com/pok3r-custom/pok3r_re_firmware/wiki/HT32-Unlocking) keyboards.**
*On not-unlocked keyboards, the firmware will hard fault at boot, requiring a JTAG programmer to reprogram.*

```sh
./pok3rtool -t vortex-core flash QMK_CORE_EW ./vortex_core_ewpratten.bin
```

## Supported Keyboards

At the moment, I only support the Vortex Core. Upstream versions of this repo support more boards.
