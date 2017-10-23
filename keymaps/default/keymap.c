#include "Hamilton.h"
#include "unicode.h"
#include "keys.h"

#include "action_layer.h"
#include "eeconfig.h"
#include "process_unicode.h"
#include "quantum.h"

enum unicode_name
{
    UALPH,
    UBETA,
    UGAMM,
    UDELT,
    UEPSI,
    UZETA,
    UETA,
    UTHET,
    UIOTA,
    UKAPP,
    ULAMB,
    UMU,
    UNU,
    UXI,
    UOMIC,
    UPI,
    URHO,
    USIGM,
    UTAU,
    UUPSI,
    UPHI,
    UCHI,
    UPSI,
    UOMEG,

    LALPH,
    LBETA,
    LGAMM,
    LDELT,
    LEPSI,
    LZETA,
    LETA,
    LTHET,
    LIOTA,
    LKAPP,
    LLAMB,
    LMU,
    LNU,
    LXI,
    LOMIC,
    LPI,
    LRHO,
    LSIGM,
    LTAU,
    LUPSI,
    LPHI,
    LCHI,
    LPSI,
    LOMEG,

    FSIGM,   
};


const uint32_t PROGMEM unicode_map[] = {
  // greek letters
  [UALPH] = 0x0391,
  [UBETA] = 0x0392,
  [UGAMM] = 0x0393,
  [UDELT] = 0x0394,
  [UEPSI] = 0x0395,
  [UZETA] = 0x0396,
  [UETA] = 0x0397,
  [UTHET] = 0x0398,
  [UIOTA] = 0x0399,
  [UKAPP] = 0x039A,
  [ULAMB] = 0x039B,
  [UMU] = 0x039C,
  [UNU] = 0x039D,
  [UXI] = 0x039E,
  [UOMIC] = 0x039F,
  [UPI] = 0x03A0,
  [URHO] = 0x03A1,
  [USIGM] = 0x03A3,
  [UTAU] = 0x03A4,
  [UUPSI] = 0x03A5,
  [UPHI] = 0x03A6,
  [UCHI] = 0x03A7,
  [UPSI] = 0x03A8,
  [UOMEG] = 0x03A9,
  [LALPH] = 0x03B1,
  [LBETA] = 0x03B2,
  [LGAMM] = 0x03B3,
  [LDELT] = 0x03B4,
  [LEPSI] = 0x03B5,
  [LZETA] = 0x03B6,
  [LETA] = 0x03B7,
  [LTHET] = 0x03B8,
  [LIOTA] = 0x03B9,
  [LKAPP] = 0x03BA,
  [LLAMB] = 0x03BB,
  [LMU] = 0x03BC,
  [LNU] = 0x03BD,
  [LXI] = 0x03BE,
  [LOMIC] = 0x03BF,
  [LPI] = 0x03C0,
  [LRHO] = 0x03C1,
  [LSIGM] = 0x03C3,
  [LTAU] = 0x03C4,
  [LUPSI] = 0x03C5,
  [LPHI] = 0x03C6,
  [LCHI] = 0x03C7,
  [LPSI] = 0x03C8,
  [LOMEG] = 0x03C9,
  [FSIGM] = 0x03C2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [0] Base layer
    KEYMAP(ESC,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,   PSCR,  HOME,   \
           GRV,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, MINS, EQL,   BSPC,  END,    \
           TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC,  ENT,   PGUP,   \
           CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, NUHS,  /*E*/  PGDN,   \
           RSFT, NUBS, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, FN2,   UP,    DEL,    \
           LCTL, FN1,  LALT,             SPC,                    RALT, RGUI, RCTL, LEFT,  DOWN,  RIGHT),
    
    // [1] Media Layer
    KEYMAP(____, MUTE, VDWN, VLUP, MPLY, MPRV, MNXT, ____, ____, ____, ____, ____, ____, ____,   ____,   \
           ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,   ____,   \
           ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,   ____,   \
           ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, /* E */ ____,   \
           ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,   ____,   \
           ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),
    
    // [2] Greek Layer
    KEYMAP(RESET,     ____,       ____,      ____,         ____,         ____,      ____, ____, ____,      ____,       ____,      ____, ____, ____,   ____,  \
            ____,     ____,       ____,      ____,         ____,         ____,      ____, ____, ____,      ____,       ____,      ____, ____, ____,   ____,  \
            ____,     UC(LALPH),  UC(ZETA),  ____,         UC(EPSILON),  UC(TAU),   ____, ____, ____,      UC(OMEGA),  UC(PI),    ____, ____, ____,   ____,  \
            ____,     ____,       UC(SIGMA), UC(DELTA),    UC(PHI),      UC(GAMMA), ____, ____, UC(CHI),   UC(LAMBDA), UC(KC_MU), ____, ____, /* E */ ____,  \
             FN3,     UC(PSI),    UC(XI),    ____,         ____,         UC(BETA),  ____, ____, ____,      ____,       ____,      ____, ____, ____,   ____,  \
            ____,     ____,       ____,      ____,                     /* SPACE */                         ____,       ____,      ____, ____, ____,   ____),

    // [3] Capital Greek Layer
    KEYMAP(RESET,     ____,       ____,        ____,         ____,         ____,        ____, ____, ____,      ____,         ____,      ____, ____, ____,   ____,  \
            ____,     ____,       ____,        ____,         ____,         ____,        ____, ____, ____,      ____,         ____,      ____, ____, ____,   ____,  \
            ____,     ____,       ____,        ____,         ____,         UC(C_THETA), ____, ____, ____,      UC(C_OMEGA),  UC(C_PI),  ____, ____, ____,   ____,  \
            ____,     ____,       UC(C_SIGMA), UC(C_DELTA),  UC(C_PHI),    UC(C_GAMMA), ____, ____, UC(C_CHI), UC(C_LAMBDA), ____,      ____, ____, /* E */ ____,  \
             FN3,     UC(C_PSI),  UC(C_XI),    ____,         ____,         ____,        ____, ____, ____,      ____,         ____,      ____, ____, ____,   ____,  \
            ____,     ____,       ____,        ____,                     /* SPACE */                         ____,           ____,      ____, ____, ____,   ____),

    // [4] Mathematical Layer
    KEYMAP(  RESET, ____,       ____,      ____,         ____,         ____,      ____,     ____,     ____,     ____,     ____,     ____,     ____,       ____,      ____,  \
           UC(_IN), UC(LOR),    ____,      ____,         ____,         ____,      ____,     ____,     ____,     ____,     ____,     ____,     UC(DIFF),   ____,      ____,  \
              ____, UC(ALL),    UC(BBZ),   UC(EXIS),     UC(BBR),      UC(EQUV),  UC(UPAR), UC(UNIN), UC(INTR), UC(IFF),  UC(IF),   ____,     ____,       ____,      ____,  \
              ____, UC(BBQ),    UC(EMPT),  UC(PART),     UC(INFY),     UC(LEAR),  UC(DNAR), UC(RIAR), UC(APPX), UC(NABL), ____,     UC(PROP), UC(INFR),   /* E */    ____,  \
              ____, UC(LNOT),   UC(TIMS),  UC(BBC),      UC(SQRT),     ____,      UC(BBN),  UC(INTG), UC(DIVD), UC(PSMN), ____,     ____,     ____,       UC(UPAR),  ____,  \
              ____, ____,       ____,       ____,                     /* SPACE */                                ____,     ____,     ____,    UC(LEAR),   UC(DNAR),  UC(RIAR)),    
    // [5] "Capital" Mathematics Layer
    KEYMAP(  RESET, ____,       ____,      ____,         ____,         ____,      ____,     ____,     ____,     ____,     ____,     ____,     ____,       ____,      ____,  \
           UC(_IN), UC(LOR),    ____,      ____,         ____,         ____,      ____,     ____,     ____,     ____,     ____,     ____,     UC(DIFF),   ____,      ____,  \
              ____, UC(ALL),    UC(BBZ),   UC(EXIS),     UC(BBR),      UC(EQUV),  UC(UPAR), UC(UNIN), UC(INTR), UC(IFF),  UC(IF),   ____,     ____,       ____,      ____,  \
              ____, UC(BBQ),    UC(EMPT),  UC(PART),     UC(INFY),     UC(LEAR),  UC(DNAR), UC(RIAR), UC(APPX), UC(NABL), ____,     UC(PROP), UC(INFR),   /* E */    ____,  \
              ____, UC(LNOT),   UC(TIMS),  UC(BBC),      UC(SQRT),     ____,      UC(BBN),  UC(INTG), UC(DIVD), UC(PSMN), ____,     ____,     ____,       UC(UPAR),  ____,  \
              ____, ____,       ____,       ____,                     /* SPACE */                                ____,     ____,     ____,    UC(LEAR),   UC(DNAR),  UC(RIAR)),    
};

#define L_DEFAULT      0
#define L_MEDIA        1
#define L_GREEK        2
#define L_CAPITALGREEK 3
#define L_MATH         4
#define L_CAPITALMATH  5

const uint16_t PROGMEM fn_actions[] = 
{
    ACTION_LAYER_MOMENTARY (L_DEFAULT),               // FN0 (Default)
    ACTION_LAYER_MOMENTARY (L_MEDIA),                 // FN1 (Media)
    ACTION_LAYER_MOMENTARY (L_GREEK),                 // FN2 (Greek)
    ACTION_LAYER_TAP_TOGGLE(L_CAPITALGREEK),          // FN3 (Capital Greek)
    ACTION_LAYER_MOMENTARY (L_MATH),                  // FN4 (Math)    
    ACTION_LAYER_TAP_TOGGLE(L_CAPITALMATH),
};

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