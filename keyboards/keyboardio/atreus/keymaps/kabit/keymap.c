/* Copyright (C) 2019, 2020  Keyboard.io, Inc
   Layout - Kabit
   KabitTarah@gmail.com
*/

#include QMK_KEYBOARD_H
#include "kabit.h"

enum layer_names {
    _GENERIC,
    _CELESTE,
    _STARDEW,
};

const uint16_t PROGMEM combo_celeste[] =  {KC_AMPR, KC_PGUP, COMBO_END};
const uint16_t PROGMEM combo_stardew[] =  {KC_AMPR, KC_ASTR, COMBO_END};
const uint16_t PROGMEM combo_generic[] =  {KC_AMPR, KC_PGDN, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_celeste, TO(_CELESTE)),
    COMBO(combo_stardew, TO(_STARDEW)),
    COMBO(combo_generic, TO(_GENERIC)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_GENERIC] = LAYOUT( /* Generic gamepad */
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_AMPR, XXXXXXX, KC_UP  , XXXXXXX, KC_W   ,                   KC_ESC , KC_X   , KC_Y   , KC_Z   , KC_PGUP,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_S   , KC_T   , XXXXXXX, KC_A   , KC_B   , KC_C   , KC_ASTR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_Q   , KC_R   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN
    ),

  /*
   *  !       @     up     {    }        ||     pgup    7     8     9    *
   *  #     left   down  right  $        ||     pgdn    4     5     6    +
   *  [       ]      (     )    &        ||       `     1     2     3    \
   * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
   */
  [_CELESTE] = LAYOUT( /* Celeste gamepad */
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
    KC_AMPR, XXXXXXX, KC_UP  , XXXXXXX, XXXXXXX,                   XXXXXXX, KC_X   , KC_Y   , KC_Z   , KC_PGUP,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_S   , KC_T   , XXXXXXX, KC_A   , KC_B   , KC_C   , KC_ASTR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_Q   , KC_R   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN
    ),
  /*
   * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
   *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
   *       volup             reset      ||             F1    F2    F3   F12
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_STARDEW] = LAYOUT( /* Celeste gamepad */
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_AMPR, XXXXXXX, KC_UP  , XXXXXXX, KC_W   ,                   KC_ESC , KC_X   , KC_Y   , KC_Z   , KC_PGUP,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_S   , KC_T   , XXXXXXX, KC_A   , KC_B   , KC_C   , KC_ASTR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_Q   , KC_R   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN
    ),
};
