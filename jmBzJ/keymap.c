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



#define DUAL_FUNC_0 LT(4, KC_F11)
#define DUAL_FUNC_1 LT(4, KC_A)
#define DUAL_FUNC_2 LT(8, KC_J)
#define DUAL_FUNC_3 LT(12, KC_X)
#define DUAL_FUNC_4 LT(1, KC_D)
#define DUAL_FUNC_5 LT(4, KC_L)
#define DUAL_FUNC_6 LT(8, KC_T)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_TRANSPARENT, KC_LEFT_SHIFT,  
    DUAL_FUNC_0,    LT(6, KC_A),    MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),LT(6, KC_O),    DUAL_FUNC_0,    
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         CW_TOGG,        KC_LEFT_CTRL,   
                                                    DUAL_FUNC_1,    MO(5),                                          MO(5),          LT(4, KC_SPACE)
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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_DBL_CLICK,KC_MS_WH_RIGHT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_DBL_CLICK,KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(6, KC_MS_BTN2),KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_WWW_BACK,                                    KC_WWW_BACK,    KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_MS_WH_UP,    LT(6, KC_MS_BTN2),KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     DUAL_FUNC_2,    KC_WWW_FORWARD,                                 KC_WWW_FORWARD, DUAL_FUNC_2,    LCTL(KC_C),     LCTL(KC_X),     LCTL(KC_Z),     KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, DUAL_FUNC_3,                                    DUAL_FUNC_3,    KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_6),MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_4),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_LSFT, KC_4),MT(MOD_LCTL, KC_5),MT(MOD_LALT, KC_6),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_3,           KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, DUAL_FUNC_3,                                    DUAL_FUNC_3,    KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,KC_MEDIA_PREV_TRACK,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(6, KC_APPLICATION),KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_WWW_BACK,                                    KC_WWW_BACK,    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     DUAL_FUNC_2,    KC_WWW_FORWARD,                                 KC_WWW_FORWARD, DUAL_FUNC_4,    KC_PGDN,        KC_PAGE_UP,     DUAL_FUNC_5,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, DUAL_FUNC_3,                                    DUAL_FUNC_3,    KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F9,          KC_F8,          KC_F7,          DUAL_FUNC_6,                                    DUAL_FUNC_6,    KC_F7,          KC_F8,          KC_F9,          QK_LLCK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_F6),MT(MOD_LCTL, KC_F5),MT(MOD_LSFT, KC_F4),KC_F11,                                         KC_F11,         MT(MOD_LSFT, KC_F4),MT(MOD_LCTL, KC_F5),MT(MOD_LALT, KC_F6),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F3,          KC_F2,          KC_F1,          KC_F10,                                         KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           TO(3),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_6),MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_4),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_LSFT, KC_4),MT(MOD_LCTL, KC_5),MT(MOD_LALT, KC_6),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_3,           KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LABK,        KC_DLR,         KC_PERC,        KC_RABK,        KC_AT,                                          KC_GRAVE,       KC_AMPR,        KC_PIPE,        KC_CIRC,        KC_TILD,        KC_TRANSPARENT, 
    KC_EXLM,        KC_SCLN,        KC_MINUS,       KC_SLASH,       KC_UNDS,        KC_EQUAL,                                       KC_QUOTE,       KC_LPRN,        KC_BSLS,        KC_COLN,        KC_RPRN,        KC_QUES,        
    KC_TRANSPARENT, KC_LBRC,        KC_PLUS,        KC_ASTR,        KC_RBRC,        KC_HASH,                                        KC_DQUO,        KC_LCBR,        KC_COMMA,       KC_DOT,         KC_RCBR,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     QK_LLCK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAI,        RGB_SPI,        RGB_HUI,        RGB_MODE_FORWARD,KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_SPD,        RGB_HUD,        RGB_TOG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_9),     LGUI(KC_8),     LGUI(KC_7),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     QK_LLCK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_6),     LGUI(KC_5),     LGUI(KC_4),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_3),     LGUI(KC_2),     LGUI(KC_1),     ST_MACRO_11,                                    ST_MACRO_12,    LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_F16, KC_6, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F5, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_8, KC_F16, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_F, KC_F8, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F12, KC_4, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_4, KC_F13, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F12, KC_8, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_7, KC_F11, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_F24, KC_T, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_F17, KC_1, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_F7, KC_T, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_X, KC_F17, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_U, KC_F24, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_F19, KC_1, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_C, KC_F9, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_F15, KC_D, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_C, KC_F11, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_4, KC_F15, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_F, KC_F7, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_F16, KC_X, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_T, KC_F9, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_D, KC_F17, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_F7, KC_9, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_X, KC_2, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_F8, KC_C, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_8, KC_F15, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSPC),
    COMBO(combo1, LCTL(KC_BSPC)),
    COMBO(combo2, ST_MACRO_13),
    COMBO(combo3, ST_MACRO_14),
    COMBO(combo4, KC_AUDIO_VOL_UP),
    COMBO(combo5, KC_AUDIO_VOL_DOWN),
    COMBO(combo6, LALT(LGUI(KC_K))),
    COMBO(combo7, LGUI(LSFT(KC_S))),
    COMBO(combo8, KC_DELETE),
    COMBO(combo9, KC_DELETE),
    COMBO(combo10, KC_ENTER),
    COMBO(combo11, KC_ENTER),
    COMBO(combo12, KC_ESCAPE),
    COMBO(combo13, KC_ESCAPE),
    COMBO(combo14, KC_TAB),
    COMBO(combo15, KC_TAB),
    COMBO(combo16, OSL(9)),
    COMBO(combo17, OSL(9)),
    COMBO(combo18, TO(3)),
    COMBO(combo19, TO(3)),
    COMBO(combo20, OSL(7)),
    COMBO(combo21, OSL(7)),
    COMBO(combo22, OSL(8)),
    COMBO(combo23, OSL(8)),
    COMBO(combo24, TO(5)),
    COMBO(combo25, TO(5)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_SPACE):
            return TAPPING_TERM -40;
        case KC_2:
            return TAPPING_TERM -50;
        case KC_1:
            return TAPPING_TERM -50;
        case MT(MOD_LCTL, KC_5):
            return TAPPING_TERM -50;
        case MT(MOD_LALT, KC_6):
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
    [2] = { {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [4] = { {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {24,255,255} },

    [6] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

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
      case 6:
        set_layer_color(6);
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
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
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
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(4);
        } else {
          layer_move(4);
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          if (!is_layer_locked(4)) {
          layer_off(4);
          }
        }  
      }  
      return false;
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          layer_on(5);
        } else {
          if (!is_layer_locked(5)) {
          layer_off(5);
          }
        }  
      }  
      return false;
    case DUAL_FUNC_4:
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
