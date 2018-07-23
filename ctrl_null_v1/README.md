# QMK Keymapping for Keebio Iris Keyboard

<img src="https://qmk.fm/qmk_icon_48.png" alt="QMK Firmware" style="width:50px;"></img>

### Note
* This is a mapping dedicated for development/ gaming/ and browsing (multilayerd)
* Setup has:
    * RGB Underglow and definitions applied
    * cherry mx, led's and its definitions applied
    * (in progress) wireless bluetooth
    * 2x promicros using TRRS cables(split design)
### Layer used here
    /*
     * ,-----+-----+-----+-----+-----+-----+                ,-----+-----+-----+-----+-----+-----+
     * | ESC |  1  |  2  |  3  |  4  |  5  |                |  6  |  7  |  8  |  9  |  0  | DEL |
     * |-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | TAB |  Q  |  W  |  E  |  R  |  T  |                |  Y  |  U  |  I  |  O  |  P  |     |
     * +-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | LCTL|  A  |  S  |  D  |  F  |  G  |                |  H  |  J  |  K  |  L  |  ;  |  '  |
     * +-----+-----+-----+-----+-----+-----+-----.    ,-----+-----+-----+-----+-----+-----+-----+
     * | LSFT|  Z  |  X  |  C  |  V  |  B  | ~   /    \     |  N  |  M  |  ,  |  .  |  /  | ENT |
     * +-----+-----+-----+--+--+-----+-----+    /      \    +-----+-----+--+--+-----+-----+-----+
     *                      \ LGUI| LOWR| SPC  /        \ BSPC | RASE| LALT/
     *                      `-----+-----+-----'          `-----+-----+----'
     */
    /*
     * ,-----+-----+-----+-----+-----+-----+                ,-----+-----+-----+-----+-----+-----+
     * |  ~  |  !  |  @  |  #  |  $  |  %  |                |  ^  |  &  |  *  |  (  |  )  | BSPC|
     * |-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | RST |  `  |     |     |     |     |                |     |  7  |  8  |  9  |  0  |  |  |
     * +-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | DEL |     |     |     |  -  |  [  |                |  ]  |  4  |  5  |  6  |  +  |     |
     * +-----+-----+-----+-----+-----+-----+-----.    ,-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |  _  |  {  |     /    \     |  }  |  1  |  2  |  3  |  -  |  =  |
     * +-----+-----+-----+--+--+-----+-----+ DEL/      \ DEL+-----+-----+--+--+-----+-----+-----+
     *                      \     |     |      /        \      |  0  |     /
     *                      `-----+-----+-----'          `-----+-----+----'
     */
    /*
     * ,-----+-----+-----+-----+-----+-----+                ,-----+-----+-----+-----+-----+-----+
     * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |                |  F6 |  F7 |  F8 |  F9 | F10 | F11 |
     * |-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | Home|     |     |     |     |     |                |     |     |     |     |     | F12 |
     * +-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | End | Prev| Next| Vol+| PgUp|  _  |                |     | LEFT| RGHT|  UP | DOWN|  \  |
     * +-----+-----+-----+-----+-----+-----+-----.    ,-----+-----+-----+-----+-----+-----+-----+
     * | Mute| Stop| Play| Vol-| PgDn|  -  |LCTL /    \     |     |     |     |     |     |Debug|
     * +-----+-----+-----+--+--+-----+-----+    /      \    +-----+-----+--+--+-----+-----+-----+
     *                      \     |     |      /        \      |  0  |     /
     *                      `-----+-----+-----'          `-----+-----+----'
     */

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
make iris/rev2:[qmk-keymap_work_home]
```
3) press reset (flash each side)
4) plug in usb to *left* side

### Source links
[Checkout the keyboard](https://keeb.io/products/iris-keyboard-split-ergonomic-keyboard?variant=2650673709086)
---
[QMK Documentation](https://docs.qmk.fm/#/)
---
[QMK repo](https://github.com/qmk/qmk_firmware)