# QMK Keymapping for Keebio Iris Keyboard

<img src="https://qmk.fm/qmk_icon_48.png" alt="QMK Firmware" style="width:50px;"></img>

### Note
* This is a mapping dedicated for development/ gaming/ and browsing (multilayerd)
* Setup has:
    * RGB Underglow and definitions applied
    * cherry mx, led's and its definitions applied
    * (in progress) wireless bluetooth
    * 2x promicros using TRRS cables(split design)
	
### See specific keymapping folder for example
	

## Setup Guide
* As of 7/20/2018

### Linux Setup Directions *easiest
1) clone [QMK repo](https://github.com/qmk/qmk_firmware)
2) cd qmk_firmware
3) Run
```
sudo util/install_dependencies.sh // this will run apt upgrade
```
### Windows Instructions
* I do not recommend this route due to the multiple downloads and step required
[Windows Instructions](https://github.com/CampAsAChamp/LetsSplitWindowsGuide/blob/master/Setting%20Up.md)
### Directions to load keymap
1) To build .hex file
```
make iris/rev2:[qmk-keymap_work_home]
```

2) To Flash
```
make iris/rev2:[qmk-keymap_work_home]:avrdude
```
3) press reset (flash each side)
4) plug in usb to *left* side

### Source links
[Checkout the keyboard](https://keeb.io/products/iris-keyboard-split-ergonomic-keyboard?variant=2650673709086)
---
[QMK Documentation](https://docs.qmk.fm/#/)
---
[QMK repo](https://github.com/qmk/qmk_firmware)