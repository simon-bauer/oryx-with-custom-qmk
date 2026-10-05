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
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(10, KC_F4)
#define DUAL_FUNC_1 LT(15, KC_6)
#define DUAL_FUNC_2 LT(5, KC_4)
#define DUAL_FUNC_3 LT(11, KC_5)
#define DUAL_FUNC_4 LT(4, KC_Y)
#define DUAL_FUNC_5 LT(13, KC_C)
#define DUAL_FUNC_6 LT(8, KC_1)
#define DUAL_FUNC_7 LT(11, KC_F19)
#define DUAL_FUNC_8 LT(14, KC_9)
#define DUAL_FUNC_9 LT(7, KC_F11)
#define DUAL_FUNC_10 LT(14, KC_S)
#define DUAL_FUNC_11 LT(10, KC_2)
#define DUAL_FUNC_12 LT(5, KC_F10)
#define DUAL_FUNC_13 LT(8, KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,                                    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   
    DUAL_FUNC_6,    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           CW_TOGG,        DUAL_FUNC_6,    
    MT(MOD_LSFT, KC_ENTER),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),LT(3, KC_S),    MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_LCTL, KC_N),LT(2, KC_E),    MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),MT(MOD_LSFT, KC_ENTER),
    MT(MOD_LCTL, KC_ESCAPE),KC_Z,           LT(4, KC_X),    KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_LCTL, KC_ESCAPE),
                                                    LT(2, KC_TAB),  TD(DANCE_0),                                    TD(DANCE_1),    MEH_T(KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_BTN2,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_APPLICATION, KC_F2,          KC_F3,          LALT(KC_F4),    QK_LLCK,                                        KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_GRAVE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_WWW_BACK),MT(MOD_LALT, KC_WWW_FORWARD),ST_MACRO_0,     DUAL_FUNC_13,   KC_TRANSPARENT,                                 KC_LBRC,        KC_4,           KC_5,           KC_6,           KC_SCLN,        KC_RBRC,        
    KC_TRANSPARENT, LSFT(KC_F8),    KC_F8,          LSFT(KC_F12),   KC_F12,         KC_TRANSPARENT,                                 KC_BSLS,        KC_1,           KC_2,           KC_3,           KC_QUOTE,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MINUS,       KC_0
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, 
                                                    KC_HOME,        LSFT(KC_HOME),                                  LSFT(KC_END),   KC_END
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        QK_LLCK,        ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAI,        RGB_HUI,        RGB_SPI,        RGB_MODE_FORWARD,KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_HUD,        RGB_SPD,        RGB_TOG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    KC_TRANSPARENT, 
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

const uint16_t PROGMEM combo0[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, LT(4, KC_X), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_COMMA, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LCTL(KC_BSPC)),
    COMBO(combo1, KC_BSPC),
    COMBO(combo2, KC_DELETE),
    COMBO(combo3, KC_DELETE),
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

static bool layer_1_timeout_pending = false;
static uint16_t layer_1_started_at;
static bool layer_1_long_timeout_pending = false;
static uint16_t layer_1_long_started_at;

void raw_hid_receive_oryx_user(uint8_t *data, uint8_t length) {
  if (length > 0 && (data[0] & 1) && biton32(layer_state) == 0) {
    layer_on(1);
    layer_1_long_started_at = timer_read();
    layer_1_long_timeout_pending = true;
  }
}

void matrix_scan_user(void) {
  if (layer_1_timeout_pending && timer_elapsed(layer_1_started_at) >= 350) {
    layer_off(1);
    layer_1_timeout_pending = false;
    layer_1_long_timeout_pending = false;
  }
  if (layer_1_long_timeout_pending && timer_elapsed(layer_1_long_started_at) >= 2000) {
    layer_off(1);
    layer_1_long_timeout_pending = false;
    layer_1_timeout_pending = false;
  }
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {34,255,255}, {0,0,0}, {0,0,0}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {34,255,255}, {0,0,0}, {0,0,0}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {0,0,0}, {188,255,255}, {188,255,255}, {34,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {131,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {34,255,255}, {34,255,255} },

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
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
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

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
  uint8_t tap_keycode = keycode & 0xFF;
  return IS_RETRO(keycode) &&
         (tap_keycode == KC_A || tap_keycode == KC_R || tap_keycode == KC_S || tap_keycode == KC_T ||
          tap_keycode == KC_N || tap_keycode == KC_E || tap_keycode == KC_I || tap_keycode == KC_O ||
          tap_keycode == KC_X);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint16_t mouse_keycode = keycode;
  if (keycode >= QK_MODS && keycode <= QK_MODS_MAX) {
    mouse_keycode = QK_MODS_GET_BASIC_KEYCODE(keycode);
  }
  bool is_mouse_keycode = mouse_keycode == KC_MS_BTN1 || mouse_keycode == KC_MS_BTN2 ||
                          mouse_keycode == KC_MS_WH_LEFT || mouse_keycode == KC_MS_WH_RIGHT ||
                          mouse_keycode == KC_MS_WH_UP || mouse_keycode == KC_MS_WH_DOWN;
  if (record->event.pressed && biton32(layer_state) == 1) {
    if (is_mouse_keycode) {
      if (mouse_keycode == KC_MS_BTN1 || mouse_keycode == KC_MS_BTN2) {
        layer_1_started_at = timer_read();
        layer_1_timeout_pending = true;
      }
      if (mouse_keycode == KC_MS_WH_LEFT || mouse_keycode == KC_MS_WH_RIGHT ||
          mouse_keycode == KC_MS_WH_UP || mouse_keycode == KC_MS_WH_DOWN) {
        layer_1_long_started_at = timer_read();
        layer_1_long_timeout_pending = true;
      }
    } else {
      layer_off(1);
      layer_1_timeout_pending = false;
      layer_1_long_timeout_pending = false;
    }
  }

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
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_1)SS_DELAY(50)  SS_TAP(X_KP_9)SS_DELAY(50)  SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_1)SS_DELAY(50)  SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_1)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1)SS_DELAY(50)  SS_TAP(X_KP_3)SS_DELAY(50)  SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_4)SS_DELAY(50)  SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_5)SS_DELAY(50)  SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_2)SS_DELAY(50)  SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(50)  SS_TAP(X_MINUS)SS_DELAY(50)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(50)  SS_LSFT(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(50)  SS_TAP(X_MINUS)SS_DELAY(50)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(50)  SS_TAP(X_MINUS)SS_DELAY(50)  SS_LSFT(SS_TAP(X_9)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F1));
        } else {
          unregister_code16(LSFT(KC_F1));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F2));
        } else {
          unregister_code16(LSFT(KC_F2));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F3));
        } else {
          unregister_code16(LSFT(KC_F3));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F4));
        } else {
          unregister_code16(LSFT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F5));
        } else {
          unregister_code16(LSFT(KC_F5));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F6));
        } else {
          unregister_code16(LSFT(KC_F6));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_UP);
        } else {
          unregister_code16(KC_AUDIO_VOL_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_DOWN);
        } else {
          unregister_code16(KC_AUDIO_VOL_DOWN);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F7));
        } else {
          unregister_code16(LSFT(KC_F7));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
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
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F9));
        } else {
          unregister_code16(LSFT(KC_F9));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F10));
        } else {
          unregister_code16(LSFT(KC_F10));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F11));
        } else {
          unregister_code16(LSFT(KC_F11));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
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
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_7));
        } else {
          unregister_code16(LGUI(KC_7));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
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
