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
```
  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     ESC , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,DEL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LSFT, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LCTL, Z  , X  , C  , V  , B  ,HOME,     END , N  , M  ,COMM,DOT ,SLSH,RSFT,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LGUI,LOWR, SPC,         ENT ,RASE,LALT
  //                  `----+----+----'        `----+----+----'
  ),
  ```

  ```
  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TILD,EXLM, AT ,HASH,DLR ,PERC,               CIRC,AMPR,ASTR,LPRN,RPRN,BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     RST ,    ,    ,    ,    ,UNDS,               BSLS, P7 , P8 , P9 ,PLUS,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     DEL ,    ,    ,    ,    ,LBRC,               RBRC, P4 , P5 , P6 ,MINS,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     BL_S,    ,    ,    ,    ,LCBR,LPRN,     RPRN,RCBR, P1 , P2 , P3 ,    ,PIPE,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,SPC ,         DEL ,    , P0
  //                  `----+----+----'        `----+----+----'
  ),
```


```
  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     F12 , F1 , F2 , F3 , F4 , F5 ,                F6 , F7 , F8 , F9 ,F10 ,F11 ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,MPRV,MNXT,VOLU,PGUP,    ,                   ,LEFT,RGHT, UP ,DOWN,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     MUTE,MSTP,MPLY,VOLD,PGDN,    ,LALT,         ,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,SPC ,        ENT  ,    ,
  //                  `----+----+----'        `----+----+----'
  ),
  ```

  ```
  [_ADJUST] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     RTOG,RMOD,RHUI,RSAI,RVAI,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,DBUG,RHUD,RSAD,RVAD,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     BL_S,RST ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  )
```


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
make iris/rev2:[qmk-keymap_work_home]:AVRDuDE
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