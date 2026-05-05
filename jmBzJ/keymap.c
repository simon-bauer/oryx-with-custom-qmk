#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(7, KC_F15)
#define DUAL_FUNC_1 LT(2, KC_F18)
#define DUAL_FUNC_2 LT(4, KC_F6)
#define DUAL_FUNC_3 LT(11, KC_2)
#define DUAL_FUNC_4 LT(13, KC_K)
#define DUAL_FUNC_5 LT(10, KC_V)
#define DUAL_FUNC_6 LT(1, KC_F4)
#define DUAL_FUNC_7 LT(2, KC_C)
#define DUAL_FUNC_8 LT(11, KC_N)
#define DUAL_FUNC_9 LT(11, KC_F13)
#define DUAL_FUNC_10 LT(1, KC_T)
#define DUAL_FUNC_11 LT(9, KC_F6)
#define DUAL_FUNC_12 LT(10, KC_F9)
#define DUAL_FUNC_13 LT(5, KC_T)
#define DUAL_FUNC_14 LT(1, KC_F3)
#define DUAL_FUNC_15 LT(7, KC_M)
#define DUAL_FUNC_16 LT(4, KC_N)
#define DUAL_FUNC_17 LT(13, KC_F12)
#define DUAL_FUNC_18 LT(1, KC_B)
#define DUAL_FUNC_19 LT(11, KC_7)
#define DUAL_FUNC_20 LT(12, KC_F13)
#define DUAL_FUNC_21 LT(11, KC_F6)
#define DUAL_FUNC_22 LT(7, KC_F21)
#define DUAL_FUNC_23 LT(14, KC_E)
#define DUAL_FUNC_24 LT(8, KC_K)
#define DUAL_FUNC_25 LT(5, KC_F11)
#define DUAL_FUNC_26 LT(1, KC_J)
#define DUAL_FUNC_27 LT(11, KC_F14)
#define DUAL_FUNC_28 LT(5, KC_F)
#define DUAL_FUNC_29 LT(3, KC_F20)
#define DUAL_FUNC_30 LT(9, KC_F)
#define DUAL_FUNC_31 LT(7, KC_F11)
#define DUAL_FUNC_32 LT(8, KC_2)
#define DUAL_FUNC_33 LT(12, KC_N)
#define DUAL_FUNC_34 LT(5, KC_6)
#define DUAL_FUNC_35 LT(15, KC_K)
#define DUAL_FUNC_36 LT(8, KC_G)
#define DUAL_FUNC_37 LT(9, KC_Q)
#define DUAL_FUNC_38 LT(14, KC_O)
#define DUAL_FUNC_39 LT(2, KC_F1)
#define DUAL_FUNC_40 LT(15, KC_S)
#define DUAL_FUNC_41 LT(4, KC_7)
#define DUAL_FUNC_42 LT(1, KC_W)
#define DUAL_FUNC_43 LT(10, KC_F14)
#define DUAL_FUNC_44 LT(10, KC_C)
#define DUAL_FUNC_45 LT(5, KC_F17)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,
    KC_MS_WH_DOWN,  KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           LGUI(LSFT(KC_S)),KC_MS_WH_DOWN,  
    KC_MS_BTN1,     LT(5, KC_A),    LT(3, KC_R),    MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),LT(4, KC_I),    LT(6, KC_O),    KC_MS_BTN1,     
    TD(DANCE_0),    MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         MT(MOD_LALT, KC_DELETE),TD(DANCE_1),    
                                                    LT(2, KC_TAB),  KC_ESCAPE,                                      KC_ENTER,       MT(MOD_LGUI, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_O,           KC_F3,          KC_M,           KC_F6,          KC_K,           KC_F10,                                         KC_E,           KC_F14,         KC_H,           KC_F18,         KC_5,           KC_F22,         
    KC_F1,          KC_Z,           KC_F5,          KC_F,           KC_F8,          KC_7,                                           KC_F12,         KC_8,           KC_F16,         KC_6,           KC_F20,         KC_I,           
    KC_J,           KC_F4,          KC_U,           KC_F7,          KC_C,           KC_F11,                                         KC_4,           KC_F15,         KC_X,           KC_F19,         KC_DOT,         KC_F23,         
    KC_F2,          KC_V,           KC_F24,         KC_T,           KC_F9,          KC_6,                                           KC_F13,         KC_D,           KC_F17,         KC_1,           KC_F21,         KC_3,           
                                                    KC_R,           KC_9,                                           KC_2,           KC_P
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  ST_MACRO_0,     KC_MS_WH_RIGHT, KC_MS_WH_UP,                                    KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MO(5),          MO(3),          KC_LEFT_CTRL,   MT(MOD_LSFT, KC_MS_BTN1),KC_MS_WH_DOWN,                                  KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LT(6, KC_APPLICATION),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_MS_BTN2,     KC_MS_DBL_CLICK,KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_UP,       KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TAB,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_1,     DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_LGUI, KC_0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         DUAL_FUNC_10,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          DUAL_FUNC_11,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          DUAL_FUNC_12,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_PIPE,        KC_CIRC,        KC_TILD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_BSLS,        KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_DLR,         KC_AT,          KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DQUO,        KC_QUOTE,       KC_UNDS,        KC_MINUS,       KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_SLASH,       KC_LBRC,        KC_RBRC,        KC_HASH,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAI,        RGB_SPI,        RGB_HUI,        RGB_MODE_FORWARD,KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_SPD,        RGB_HUD,        RGB_TOG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,                                   DUAL_FUNC_30,   DUAL_FUNC_31,   DUAL_FUNC_32,   DUAL_FUNC_33,   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   DUAL_FUNC_21,   DUAL_FUNC_22,                                   DUAL_FUNC_34,   DUAL_FUNC_35,   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_23,   DUAL_FUNC_24,   DUAL_FUNC_25,   DUAL_FUNC_26,   DUAL_FUNC_27,                                   DUAL_FUNC_39,   DUAL_FUNC_40,   DUAL_FUNC_41,   DUAL_FUNC_42,   DUAL_FUNC_43,   KC_TRANSPARENT, 
                                                    DUAL_FUNC_28,   DUAL_FUNC_29,                                   DUAL_FUNC_44,   DUAL_FUNC_45
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Q))),LALT(LCTL(LSFT(KC_W))),LALT(LCTL(LSFT(KC_F))),LALT(LCTL(LSFT(KC_P))),LALT(LCTL(LSFT(KC_B))),                                LALT(LCTL(LSFT(KC_J))),LALT(LCTL(LSFT(KC_L))),LALT(LCTL(LSFT(KC_U))),LALT(LCTL(LSFT(KC_Y))),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_A))),LALT(LCTL(LSFT(KC_R))),LALT(LCTL(LSFT(KC_S))),LALT(LCTL(LSFT(KC_T))),LALT(LCTL(LSFT(KC_G))),                                LALT(LCTL(LSFT(KC_M))),LALT(LCTL(LSFT(KC_N))),LALT(LCTL(LSFT(KC_E))),LALT(LCTL(LSFT(KC_I))),LALT(LCTL(LSFT(KC_O))),KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Z))),LALT(LCTL(LSFT(KC_X))),LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_D))),LALT(LCTL(LSFT(KC_V))),                                LALT(LCTL(LSFT(KC_K))),LALT(LCTL(LSFT(KC_H))),LALT(LCTL(LSFT(KC_COMMA))),LALT(LCTL(LSFT(KC_DOT))),LALT(LCTL(LSFT(KC_DELETE))),KC_TRANSPARENT, 
                                                    LALT(LCTL(LSFT(KC_TAB))),LALT(LCTL(LSFT(KC_ESCAPE))),                                LALT(LCTL(LSFT(KC_ENTER))),LALT(LCTL(LSFT(KC_SPACE)))
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_C, KC_F15, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_X, KC_F19, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F5, KC_F, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_8, KC_F16, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F, KC_F8, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_C, KC_F8, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F15, KC_8, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_F7, KC_F, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_X, KC_F16, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_U, KC_F5, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_F19, KC_6, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_T, KC_F9, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_F12, KC_4, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_4, KC_F13, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_4, KC_F15, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_J, KC_F2, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_F23, KC_3, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_J, KC_F1, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_I, KC_F23, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_D, KC_F17, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_O, KC_F1, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_F22, KC_I, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_F17, KC_1, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_F24, KC_T, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_C, KC_F9, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_F15, KC_D, COMBO_END};
const uint16_t PROGMEM combo26[] = { KC_F7, KC_T, COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_X, KC_F17, COMBO_END};
const uint16_t PROGMEM combo28[] = { KC_F19, KC_1, COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_U, KC_F24, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_F4, KC_V, COMBO_END};
const uint16_t PROGMEM combo31[] = { KC_DOT, KC_F21, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
    COMBO(combo1, KC_BSPC),
    COMBO(combo2, LCTL(KC_BSPC)),
    COMBO(combo3, ST_MACRO_13),
    COMBO(combo4, ST_MACRO_14),
    COMBO(combo5, TO(0)),
    COMBO(combo6, TO(0)),
    COMBO(combo7, TO(2)),
    COMBO(combo8, TO(2)),
    COMBO(combo9, TO(3)),
    COMBO(combo10, TO(4)),
    COMBO(combo11, OSL(7)),
    COMBO(combo12, KC_AUDIO_VOL_UP),
    COMBO(combo13, KC_AUDIO_VOL_DOWN),
    COMBO(combo14, LALT(LGUI(KC_K))),
    COMBO(combo15, KC_ENTER),
    COMBO(combo16, KC_ENTER),
    COMBO(combo17, KC_DELETE),
    COMBO(combo18, KC_DELETE),
    COMBO(combo19, KC_MEDIA_NEXT_TRACK),
    COMBO(combo20, LALT(KC_F4)),
    COMBO(combo21, LALT(KC_F4)),
    COMBO(combo22, KC_MEDIA_PREV_TRACK),
    COMBO(combo23, KC_MEDIA_PREV_TRACK),
    COMBO(combo24, OSL(9)),
    COMBO(combo25, OSL(9)),
    COMBO(combo26, OSL(8)),
    COMBO(combo27, OSL(8)),
    COMBO(combo28, OSL(4)),
    COMBO(combo29, OSL(3)),
    COMBO(combo30, OSL(5)),
    COMBO(combo31, OSL(6)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LALT, KC_DELETE):
            return TAPPING_TERM -40;
        case MT(MOD_LGUI, KC_SPACE):
            return TAPPING_TERM -40;
        case DUAL_FUNC_1:
            return TAPPING_TERM -50;
        case DUAL_FUNC_2:
            return TAPPING_TERM -50;
        case DUAL_FUNC_4:
            return TAPPING_TERM -50;
        case DUAL_FUNC_5:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [4] = { {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_X)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_X)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_RIGHT))SS_DELAY(50)  SS_LCTL(SS_TAP(X_LEFT))SS_DELAY(50)  SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(50)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(50)  SS_TAP(X_BSPC)SS_DELAY(50)  SS_TAP(X_BSPC));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_7));
        } else {
          unregister_code16(LGUI(KC_7));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_8));
        } else {
          unregister_code16(LGUI(KC_8));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_9));
        } else {
          unregister_code16(LGUI(KC_9));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_1));
        } else {
          unregister_code16(LGUI(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_2));
        } else {
          unregister_code16(LGUI(KC_2));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_3));
        } else {
          unregister_code16(LGUI(KC_3));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COLN);
        } else {
          unregister_code16(KC_COLN);
        }
      } else {
        if (record->event.pressed) {
          layer_on(6);
        } else {
          layer_off(6);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_4));
        } else {
          unregister_code16(LGUI(KC_4));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_6));
        } else {
          unregister_code16(LGUI(KC_6));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F12));
        } else {
          unregister_code16(LSFT(KC_F12));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F8));
        } else {
          unregister_code16(LSFT(KC_F8));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_F4));
        } else {
          unregister_code16(LALT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Q));
        } else {
          unregister_code16(LCTL(KC_Q));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_Q)));
        } else {
          unregister_code16(LCTL(LSFT(KC_Q)));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_W));
        } else {
          unregister_code16(LCTL(KC_W));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_W)));
        } else {
          unregister_code16(LCTL(LSFT(KC_W)));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_F));
        } else {
          unregister_code16(LCTL(KC_F));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_F)));
        } else {
          unregister_code16(LCTL(LSFT(KC_F)));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_P));
        } else {
          unregister_code16(LCTL(KC_P));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_P)));
        } else {
          unregister_code16(LCTL(LSFT(KC_P)));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_B));
        } else {
          unregister_code16(LCTL(KC_B));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_B)));
        } else {
          unregister_code16(LCTL(LSFT(KC_B)));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_A));
        } else {
          unregister_code16(LCTL(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_A)));
        } else {
          unregister_code16(LCTL(LSFT(KC_A)));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_R));
        } else {
          unregister_code16(LCTL(KC_R));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_R)));
        } else {
          unregister_code16(LCTL(LSFT(KC_R)));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_S));
        } else {
          unregister_code16(LCTL(KC_S));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_S)));
        } else {
          unregister_code16(LCTL(LSFT(KC_S)));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_T));
        } else {
          unregister_code16(LCTL(KC_T));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_T)));
        } else {
          unregister_code16(LCTL(LSFT(KC_T)));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_G));
        } else {
          unregister_code16(LCTL(KC_G));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_G)));
        } else {
          unregister_code16(LCTL(LSFT(KC_G)));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Z));
        } else {
          unregister_code16(LCTL(KC_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_Z)));
        } else {
          unregister_code16(LCTL(LSFT(KC_Z)));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_X));
        } else {
          unregister_code16(LCTL(KC_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_X)));
        } else {
          unregister_code16(LCTL(LSFT(KC_X)));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_C)));
        } else {
          unregister_code16(LCTL(LSFT(KC_C)));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_D));
        } else {
          unregister_code16(LCTL(KC_D));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_D)));
        } else {
          unregister_code16(LCTL(LSFT(KC_D)));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_V)));
        } else {
          unregister_code16(LCTL(LSFT(KC_V)));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_TAB));
        } else {
          unregister_code16(LCTL(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_TAB)));
        } else {
          unregister_code16(LCTL(LSFT(KC_TAB)));
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_ESCAPE));
        } else {
          unregister_code16(LCTL(KC_ESCAPE));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_ESCAPE)));
        } else {
          unregister_code16(LCTL(LSFT(KC_ESCAPE)));
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_J));
        } else {
          unregister_code16(LCTL(KC_J));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_J)));
        } else {
          unregister_code16(LCTL(LSFT(KC_J)));
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_L));
        } else {
          unregister_code16(LCTL(KC_L));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_L)));
        } else {
          unregister_code16(LCTL(LSFT(KC_L)));
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_U));
        } else {
          unregister_code16(LCTL(KC_U));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_U)));
        } else {
          unregister_code16(LCTL(LSFT(KC_U)));
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Y));
        } else {
          unregister_code16(LCTL(KC_Y));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_Y)));
        } else {
          unregister_code16(LCTL(LSFT(KC_Y)));
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_M));
        } else {
          unregister_code16(LCTL(KC_M));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_M)));
        } else {
          unregister_code16(LCTL(LSFT(KC_M)));
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_N));
        } else {
          unregister_code16(LCTL(KC_N));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_N)));
        } else {
          unregister_code16(LCTL(LSFT(KC_N)));
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_E));
        } else {
          unregister_code16(LCTL(KC_E));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_E)));
        } else {
          unregister_code16(LCTL(LSFT(KC_E)));
        }  
      }  
      return false;
    case DUAL_FUNC_37:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_I));
        } else {
          unregister_code16(LCTL(KC_I));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_I)));
        } else {
          unregister_code16(LCTL(LSFT(KC_I)));
        }  
      }  
      return false;
    case DUAL_FUNC_38:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_O));
        } else {
          unregister_code16(LCTL(KC_O));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_O)));
        } else {
          unregister_code16(LCTL(LSFT(KC_O)));
        }  
      }  
      return false;
    case DUAL_FUNC_39:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_K));
        } else {
          unregister_code16(LCTL(KC_K));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_K)));
        } else {
          unregister_code16(LCTL(LSFT(KC_K)));
        }  
      }  
      return false;
    case DUAL_FUNC_40:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_H));
        } else {
          unregister_code16(LCTL(KC_H));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_H)));
        } else {
          unregister_code16(LCTL(LSFT(KC_H)));
        }  
      }  
      return false;
    case DUAL_FUNC_41:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_COMMA));
        } else {
          unregister_code16(LCTL(KC_COMMA));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_COMMA)));
        } else {
          unregister_code16(LCTL(LSFT(KC_COMMA)));
        }  
      }  
      return false;
    case DUAL_FUNC_42:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_DOT));
        } else {
          unregister_code16(LCTL(KC_DOT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_DOT)));
        } else {
          unregister_code16(LCTL(LSFT(KC_DOT)));
        }  
      }  
      return false;
    case DUAL_FUNC_43:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_DELETE));
        } else {
          unregister_code16(LCTL(KC_DELETE));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_DELETE)));
        } else {
          unregister_code16(LCTL(LSFT(KC_DELETE)));
        }  
      }  
      return false;
    case DUAL_FUNC_44:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_ENTER));
        } else {
          unregister_code16(LCTL(KC_ENTER));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_ENTER)));
        } else {
          unregister_code16(LCTL(LSFT(KC_ENTER)));
        }  
      }  
      return false;
    case DUAL_FUNC_45:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_SPACE));
        } else {
          unregister_code16(LCTL(KC_SPACE));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_SPACE)));
        } else {
          unregister_code16(LCTL(LSFT(KC_SPACE)));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
