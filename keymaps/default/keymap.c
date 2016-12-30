#include "Hamilton.h"
#include "keys.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(ESC,  F1,   F1,   F3,  F4,  F5,  F6,  F7,  F8,   F9,   F10,  F11,  F12,  FN2,  PSCR,    HOME,   \
           GRV,  KC_1, KC_2,KC_3,KC_4, KC_5,KC_6,KC_7,KC_8, KC_9, KC_0, MINS, EQL,  BSPC, END,             \
           TAB,  Q,    W,    E,   R,   T,   Y,   U,   I,    O,    P,    LBRC, RBRC, ENT,  PGUP,            \
           CAPS, A,    S,    D,   F,   G,   H,   J,   K,    L,    SCLN, QUOT, NUHS,       PGDN,            \
           LSFT, Z,    X,    C,   V,   B,   N,   M,   COMM, DOT,  SLSH, RCTL, RSFT, UP,   DEL,             \
           LCTL, LGUI, LALT,            SPC,                RALT, FN0,  FN1,  LEFT, DOWN, RIGHT),
};

const uint16_t PROGMEM fn_actions[] = 
{
    ACTION_LAYER_MOMENTARY(1),                  // FN0
    ACTION_LAYER_MOMENTARY(2),                  // FN1
    ACTION_LAYER_MOMENTARY(1)                   // FN2
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}