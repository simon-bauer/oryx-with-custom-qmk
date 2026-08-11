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
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
};



#define DUAL_FUNC_0 LT(1, KC_F23)
#define DUAL_FUNC_1 LT(2, KC_6)
#define DUAL_FUNC_2 LT(6, KC_L)
#define DUAL_FUNC_3 LT(2, KC_5)
#define DUAL_FUNC_4 LT(1, KC_F14)
#define DUAL_FUNC_5 LT(6, KC_F22)
#define DUAL_FUNC_6 LT(14, KC_F2)
#define DUAL_FUNC_7 LT(5, KC_R)
#define DUAL_FUNC_8 LT(10, KC_E)
#define DUAL_FUNC_9 LT(9, KC_F24)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_Z,           DUAL_FUNC_0,    
    DUAL_FUNC_1,    LT(12, KC_A),   LT(7, KC_R),    MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),LT(7, KC_I),    LT(12, KC_O),   DUAL_FUNC_1,    
    KC_LEFT_CTRL,   OSL(11),        MT(MOD_LALT, KC_X),KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       MT(MOD_LALT, KC_DOT),OSL(11),        KC_LEFT_CTRL,   
    KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,LGUI(LSFT(KC_S)),OSL(10),        OSL(9),         LT(6, KC_SPACE),                                LT(6, KC_SPACE),OSL(9),         OSL(10),        LGUI(LSFT(KC_S)),KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                    OSL(8),         MEH_T(KC_ESCAPE),                                MEH_T(KC_ESCAPE),OSL(8)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_5,           KC_4,           KC_3,           KC_2,           KC_1,           KC_ESCAPE,      
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_B,           KC_P,           KC_F,           KC_W,           KC_Q,           KC_TAB,         
    KC_BSPC,        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_G,           KC_T,           KC_S,           KC_R,           KC_A,           KC_BSPC,        
    KC_DELETE,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_V,           KC_D,           KC_C,           KC_X,           KC_Z,           KC_DELETE,      
                                                    KC_SPACE,       KC_ENTER,                                       KC_ENTER,       KC_SPACE
  ),
  [2] = LAYOUT_voyager(
    DUAL_FUNC_2,    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_DBL_CLICK,KC_MS_WH_RIGHT, KC_PAGE_UP,                                     KC_PAGE_UP,     KC_MS_WH_LEFT,  KC_MS_DBL_CLICK,KC_MS_WH_RIGHT, KC_TRANSPARENT, DUAL_FUNC_2,    
    KC_TRANSPARENT, LT(12, KC_MS_BTN2),LT(7, KC_MS_WH_UP),KC_MS_WH_DOWN,  KC_MS_BTN1,     TO(0),                                          TO(0),          KC_MS_BTN1,     KC_MS_WH_DOWN,  LT(7, KC_MS_WH_UP),LT(12, KC_MS_BTN2),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_3,    LCTL(KC_C),     DUAL_FUNC_4,    KC_PGDN,                                        KC_PGDN,        DUAL_FUNC_4,    LCTL(KC_C),     DUAL_FUNC_3,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    DUAL_FUNC_2,    KC_TRANSPARENT, DUAL_FUNC_5,    KC_UP,          DUAL_FUNC_6,    KC_PAGE_UP,                                     KC_PAGE_UP,     DUAL_FUNC_6,    KC_UP,          DUAL_FUNC_5,    KC_TRANSPARENT, DUAL_FUNC_2,    
    KC_TRANSPARENT, LT(12, KC_APPLICATION),LT(7, KC_LEFT), MT(MOD_LCTL, KC_DOWN),MT(MOD_LSFT, KC_RIGHT),TO(0),                                          TO(0),          KC_LEFT,        KC_DOWN,        KC_RIGHT,       LT(12, KC_APPLICATION),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_3,    LCTL(KC_C),     DUAL_FUNC_4,    KC_PGDN,                                        KC_PGDN,        DUAL_FUNC_4,    LCTL(KC_C),     DUAL_FUNC_3,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    DUAL_FUNC_2,    KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, DUAL_FUNC_2,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_6,           MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_4),TO(0),                                          TO(0),          MT(MOD_LSFT, KC_4),MT(MOD_LCTL, KC_5),KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_3),KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           MT(MOD_LALT, KC_3),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    DUAL_FUNC_2,    KC_TRANSPARENT, KC_F9,          KC_F8,          KC_F7,          KC_WWW_FORWARD,                                 KC_WWW_FORWARD, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, DUAL_FUNC_2,    
    KC_TRANSPARENT, MO(12),         KC_F6,          KC_F5,          DUAL_FUNC_7,    TO(0),                                          TO(0),          DUAL_FUNC_7,    KC_F5,          KC_F6,          MO(12),         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F3,          KC_F2,          KC_F1,          KC_WWW_BACK,                                    KC_WWW_BACK,    KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_8,    KC_F11,         KC_F10,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         DUAL_FUNC_8,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, DUAL_FUNC_5,    KC_UP,          DUAL_FUNC_6,    KC_PAGE_UP,                                     KC_PAGE_UP,     DUAL_FUNC_6,    KC_UP,          DUAL_FUNC_5,    KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, LT(12, KC_APPLICATION),LT(7, KC_LEFT), MT(MOD_LCTL, KC_DOWN),MT(MOD_LSFT, KC_RIGHT),TO(3),                                          TO(3),          KC_LEFT,        KC_DOWN,        KC_RIGHT,       LT(12, KC_APPLICATION),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_3,    LCTL(KC_C),     DUAL_FUNC_4,    KC_PGDN,                                        KC_PGDN,        DUAL_FUNC_4,    LCTL(KC_C),     DUAL_FUNC_3,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_6,           MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_4),TO(4),                                          TO(4),          MT(MOD_LSFT, KC_4),MT(MOD_LCTL, KC_5),KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_3),KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           MT(MOD_LALT, KC_3),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_F9,          KC_F8,          KC_F7,          KC_WWW_FORWARD,                                 KC_WWW_FORWARD, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F6,          KC_F5,          DUAL_FUNC_7,    TO(5),                                          TO(5),          DUAL_FUNC_7,    KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F3,          KC_F2,          KC_F1,          KC_WWW_BACK,                                    KC_WWW_BACK,    KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_8,    KC_F11,         KC_F10,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         DUAL_FUNC_8,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    TO(0),          KC_LABK,        KC_DLR,         KC_PERC,        KC_RABK,        KC_AT,                                          KC_GRAVE,       KC_AMPR,        KC_PIPE,        KC_CIRC,        KC_TILD,        TO(0),          
    KC_EXLM,        KC_SCLN,        KC_MINUS,       KC_SLASH,       KC_UNDS,        KC_EQUAL,                                       KC_QUOTE,       KC_LPRN,        KC_BSLS,        KC_COLN,        KC_RPRN,        KC_QUES,        
    KC_TRANSPARENT, KC_LBRC,        KC_PLUS,        KC_ASTR,        KC_RBRC,        KC_HASH,                                        KC_DQUO,        KC_LCBR,        KC_COMMA,       KC_DOT,         KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     TO(0),                                          TO(0),          ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, LGUI(KC_9),     LGUI(KC_8),     LGUI(KC_7),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_6),     LGUI(KC_5),     LGUI(KC_4),     TO(0),                                          TO(0),          LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_3),     LGUI(KC_2),     LGUI(KC_1),     ST_MACRO_22,                                    ST_MACRO_23,    LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LM(12,MOD_LALT),                                LM(12,MOD_LALT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LM(12,MOD_LCTL),KC_TRANSPARENT,                                 KC_TRANSPARENT, LM(12,MOD_LCTL)
  ),
  [12] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_TAB)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_TAB)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_TAB),   KC_TAB,         DUAL_FUNC_9,    TO(0),                                          TO(0),          DUAL_FUNC_9,    KC_TAB,         LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_24,    ST_MACRO_25,    KC_BSPC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSPC,        ST_MACRO_26,    ST_MACRO_27,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, RGB_VAI,        RGB_SPI,        RGB_HUI,        RGB_MODE_FORWARD,TO(0),                                          TO(0),          RGB_MODE_FORWARD,RGB_HUI,        RGB_SPI,        RGB_VAI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_SPD,        RGB_HUD,        RGB_TOG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        RGB_HUD,        RGB_SPD,        RGB_VAD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_DELETE, KC_Z, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_2, KC_3, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(LGUI(KC_K))),
    COMBO(combo1, KC_ENTER),
    COMBO(combo2, KC_DELETE),
    COMBO(combo3, CW_TOGG),
    COMBO(combo4, LCTL(KC_BSPC)),
};



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
    [2] = { {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255} },

    [3] = { {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255} },

    [4] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [5] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [6] = { {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255} },

    [7] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [8] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

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
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
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
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC)SS_DELAY(30)  SS_TAP(X_BSPC));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(13);
        } else {
          layer_move(13);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(2);
        } else {
          layer_move(2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_X));
        } else {
          unregister_code16(LCTL(KC_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_V));
        } else {
          unregister_code16(LGUI(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_END));
        } else {
          unregister_code16(LCTL(KC_END));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_HOME));
        } else {
          unregister_code16(LCTL(KC_HOME));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
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
    case DUAL_FUNC_8:
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
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_TAB));
        } else {
          unregister_code16(LALT(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
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
