#include "Hamilton.h"
#include "keys.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [0] Base layer
    KEYMAP(ESC,     F1,   F1,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,   PSCR,  HOME,   \
           GRV,     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, MINS, EQL,   BSPC,  END,    \
           TAB,     Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC,  ENT,   PGUP,   \
           CAPS,    A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, NUHS,  /*E*/  PGDN,   \
           RSFT,    Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, FN4,  FN2,   UP,    DEL,    \
           LCTL,    FN1,  LALT,             SPC,              RALT, RGUI, RCTL, LEFT, DOWN,  RIGHT),
    
    // [1] Media Layer
    KEYMAP(TRNS, MUTE, VDWN, VLUP, MPLY, MPRV, MNXT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, /* E */ TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
    
    // [2] Greek Layer
    KEYMAP(TRNS,     TRNS,       TRNS,      TRNS,         TRNS,         TRNS,      TRNS, TRNS, TRNS,      TRNS,       TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       TRNS,      TRNS,         TRNS,         TRNS,      TRNS, TRNS, TRNS,      TRNS,       TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     UC(ALPHA),  UC(ZETA),  TRNS,         UC(EPSILON),  UC(TAU),   TRNS, TRNS, TRNS,      UC(OMEGA),  UC(PI),    TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       UC(SIGMA), UC(DELTA),    UC(PHI),      UC(GAMMA), TRNS, TRNS, UC(CHI),   UC(LAMBDA), UC(KC_MU), TRNS, TRNS, /* E */ TRNS,  \
            FN3,     UC(PSI),    UC(XI),    TRNS,         TRNS,         UC(BETA),  TRNS, TRNS, TRNS,      TRNS,       TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       TRNS,      TRNS,                     /* SPACE */                         TRNS,       TRNS,      TRNS, TRNS, TRNS,   TRNS),

    // [3] Capital Greek Layer
    KEYMAP(TRNS,     TRNS,       TRNS,        TRNS,         TRNS,         TRNS,        TRNS, TRNS, TRNS,      TRNS,         TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       TRNS,        TRNS,         TRNS,         TRNS,        TRNS, TRNS, TRNS,      TRNS,         TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       TRNS,        TRNS,         TRNS,         UC(C_THETA), TRNS, TRNS, TRNS,      UC(C_OMEGA),  UC(C_PI),  TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       UC(C_SIGMA), UC(C_DELTA),  UC(C_PHI),    UC(C_GAMMA), TRNS, TRNS, UC(C_CHI), UC(C_LAMBDA), TRNS,      TRNS, TRNS, /* E */ TRNS,  \
            FN3,     UC(C_PSI),  UC(C_XI),    TRNS,         TRNS,         TRNS,        TRNS, TRNS, TRNS,      TRNS,         TRNS,      TRNS, TRNS, TRNS,   TRNS,  \
           TRNS,     TRNS,       TRNS,        TRNS,                     /* SPACE */                         TRNS,           TRNS,      TRNS, TRNS, TRNS,   TRNS),

    // [4] Mathematical Layer
    KEYMAP(TRNS,    TRNS,       TRNS,      TRNS,         TRNS,         TRNS,      TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,       TRNS,      TRNS,  \
           UC(_IN), UC(LOR),    TRNS,      TRNS,         TRNS,         TRNS,      TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     UC(DIFF),   TRNS,      TRNS,  \
           TRNS,    UC(ALL),    UC(BBZ),   UC(EXIS),     UC(BBR),      UC(EQUV),  UC(UPAR), UC(UNIN), UC(INTR), UC(IFF),  UC(IF),   TRNS,     TRNS,       TRNS,      TRNS,  \
           TRNS,    UC(BBQ),    UC(EMPT),  UC(PART),     UC(INFY),     UC(LEAR),  UC(DNAR), UC(RIAR), UC(APPX), UC(NABL), TRNS,     UC(PROP), UC(INFR),   /* E */    TRNS,  \
           TRNS,    UC(LNOT),   UC(TIMS),  UC(BBC),      UC(SQRT),     TRNS,      UC(BBN),  UC(INTG), UC(DIVD), UC(PSMN), TRNS,     TRNS,     TRNS,       UC(UPAR),  TRNS,  \
           TRNS,    TRNS,       TRNS,       TRNS,                     /* SPACE */                                TRNS,     TRNS,     TRNS,    UC(LEAR),   UC(DNAR),  UC(RIAR)),    
};

#define L_DEFAULT      0
#define L_MEDIA        1
#define L_GREEK        2
#define L_CAPITALGREEK 3
#define L_MATH         4

const uint16_t PROGMEM fn_actions[] = 
{
    ACTION_LAYER_MOMENTARY (L_DEFAULT),               // FN0 (Default)
    ACTION_LAYER_MOMENTARY (L_MEDIA),                 // FN1 (Media)
    ACTION_LAYER_MOMENTARY (L_GREEK),                 // FN2 (Greek)
    ACTION_LAYER_TAP_TOGGLE(L_CAPITALGREEK),          // FN3 (Capital Greek)
    ACTION_LAYER_MOMENTARY (L_MATH),                  // FN4 (Math)    
};

int currentLayer = L_DEFAULT;
bool greekPressed = false;
bool shiftPressed = false;

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_LSFT);
          } else {
            unregister_code(KC_LSFT);
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