#include QMK_KEYBOARD_H

/* Layers */
enum { _BASE, _FN };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (3x7 per side) */
[_BASE] = LAYOUT_split_3x7(
  /* Left r0 */ KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,
  /* Left r1 */ KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    MO(_FN),
  /* Left r2 */ KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LSFT,

  /* Right r0 */ KC_PSCR, KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  /* Right r1 */ KC_LGUI, KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  /* Right r2 */ KC_SPC,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT
),

/* Fn */
[_FN] = LAYOUT_split_3x7(
  /* Left r0 */ KC_CAPS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_DEL,
  /* Left r1 */ KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, MO(_FN),
  /* Left r2 */ KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LSFT,

  /* Right r0 */ KC_PSCR, KC_7,   KC_8,    KC_9,    KC_MINS, KC_EQL,  KC_TRNS,
  /* Right r1 */ KC_LGUI, KC_4,   KC_5,    KC_6,    KC_0,    KC_TRNS, KC_TRNS,
  /* Right r2 */ KC_SPC,  KC_1,   KC_2,    KC_3,    KC_MUTE, KC_VOLD, KC_VOLU
)

};
