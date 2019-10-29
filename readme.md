Hamilton keyboard firmware
======================

This is the code for my keyboard's firmware. It is based on the [Quantum MK mechanical keyboard firmware](https://github.com/qmk/qmk_firmware). 

This repository needs to be cloned into QMK's [keyboards](https://github.com/qmk/qmk_firmware/tree/master/keyboards) directory. It has purposefuly not been merged into QMK's repository for privacy reasons. 

## Building

Download or clone the whole firmware and navigate to the `keyboards/Hamilton` folder. Type `make` to compile the firmware into a `.hex` file. You can then use the Teensy Loader to program your `.hex` file. 

**DISABLE THE WARNINGS IN THE RULES.MK**

