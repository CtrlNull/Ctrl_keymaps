
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define KC_LOWR LOWER
#define KC_RASE RAISE
#define KC_RST RESET
#define KC_DBUG DEBUG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
    /*
     * ,-----+-----+-----+-----+-----+-----+                ,-----+-----+-----+-----+-----+-----+
     * | ESC |  1  |  2  |  3  |  4  |  5  |                |  6  |  7  |  8  |  9  |  0  | DEL |
     * |-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | TAB |  Q  |  W  |  E  |  R  |  T  |                |  Y  |  U  |  I  |  O  |  P  |     |
     * +-----+-----+-----+-----+-----+-----+                +-----+-----+-----+-----+-----+-----+
     * | LCTL|  A  |  S  |  D  |  F  |  G  |                |  H  |  J  |  K  |  L  |  ;  |  '  |
     * +-----+-----+-----+-----+-----+-----+-----.    ,-----+-----+-----+-----+-----+-----+-----+
     * | LSFT|  Z  |  X  |  C  |  V  |  B  |    /    \     |  N  |  M  |  ,  |  .  |  /  | ENT |
     * +-----+-----+-----+--+--+-----+-----+    /      \    +-----+-----+--+--+-----+-----+-----+
     *                      \ LGUI| LOWR| SPC  /        \ BSPC | RASE| LALT/
     *                      `-----+-----+-----'          `-----+-----+----'
     */
     ESC , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,BSPC,
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,,
     LCTL, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
     LSFT, Z  , X  , C  , V  , B  ,   ,         , N  , M  ,COMM,DOT ,SLSH,ENT,
                       LGUI,LOWR, SPC ,       BSPC,RASE,LALT
  ),

  [_LOWER] = LAYOUT_kc(
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
     TILD,EXLM, AT ,HASH,DLR ,PERC,               CIRC,AMPR,ASTR,LPRN,RPRN,BSPC,
     RST ,    ,    ,    ,    ,    ,                   , 7  , 8  , 9  , 0  ,PIPE,
     DEL ,    ,    ,    ,UNDS,LBRC,               RBRC, P4 , P5 , P6 ,PLUS,    ,
         ,    ,    ,    ,MINS,LCBR,    ,         ,RCBR, P1 , P2 , P3 ,MINS,    ,
                           ,    ,DEL ,         DEL , P0 , 
  ),

  [_RAISE] = LAYOUT_kc(
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
     GRV , F1 , F2 , F3 , F4 , F5 ,                F6 , F7 , F8 , F9 ,F10 ,F11 ,
     HOME,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,F12 ,
     END ,MPRV,MNXT,VOLU,PGUP,UNDS,                   ,LEFT,RGHT, UP ,DOWN,BSLS,
     MUTE,MSTP,MPLY,VOLD,PGDN,MINS,LCTL,         ,    ,    ,    ,    ,    ,DBUG,
                           ,    ,    ,             , P0 ,
  ),
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _QWERTY);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _QWERTY);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _QWERTY);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _QWERTY);
      }
      return false;
      break;
  }
  return true;
}
