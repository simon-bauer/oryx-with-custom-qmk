#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(13, KC_Y)
#define DUAL_FUNC_1 LT(2, KC_W)
#define DUAL_FUNC_2 LT(11, KC_F1)
#define DUAL_FUNC_3 LT(10, KC_F14)
#define DUAL_FUNC_4 LT(2, KC_T)
#define DUAL_FUNC_5 LT(6, KC_G)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LGUI(LSFT(KC_S)),KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_Z,           RGB_MODE_FORWARD,
    KC_TAB,         KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_BSPC,        
    ST_MACRO_0,     OSL(2),         KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         OSL(2),         CW_TOGG,        
    KC_MS_BTN2,     KC_MS_DBL_CLICK,KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     MO(1),                                          MEH_T(KC_SPACE),OSM(MOD_LCTL),  KC_TRANSPARENT, LALT(LGUI(KC_K)),KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                    TD(DANCE_0),    DUAL_FUNC_0,                                    OSM(MOD_LALT),  OSM(MOD_LGUI)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     DUAL_FUNC_1,    KC_UP,          DUAL_FUNC_2,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_APPLICATION, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_LABK,        KC_DLR,         KC_PERC,        KC_RABK,        KC_AT,                                          KC_GRAVE,       KC_AMPR,        KC_PIPE,        KC_CIRC,        KC_TILD,        KC_TRANSPARENT, 
    KC_EXLM,        KC_SCLN,        KC_MINUS,       KC_SLASH,       KC_UNDS,        KC_EQUAL,                                       KC_QUOTE,       KC_LPRN,        KC_BSLS,        KC_COLN,        KC_RPRN,        KC_QUES,        
    KC_TRANSPARENT, KC_LBRC,        KC_PLUS,        KC_ASTR,        KC_RBRC,        KC_HASH,                                        KC_DQUO,        KC_LCBR,        KC_COMMA,       KC_DOT,         KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LM(4,MOD_LCTL), LM(4,MOD_LALT),                                 LM(4,MOD_LALT), LM(4,MOD_LCTL), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F9,          DUAL_FUNC_3,    KC_F7,          DUAL_FUNC_4,                                    KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_WWW_BACK,    KC_F6,          KC_F5,          DUAL_FUNC_5,    KC_F11,                                         KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_WWW_FORWARD, KC_F3,          KC_F2,          KC_F1,          KC_F10,                                         KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_TAB),   KC_TAB,         LSFT(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_TAB),   KC_TAB,         LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_UP, DUAL_FUNC_2, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_E, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LCTL(KC_BSPC)),
    COMBO(combo1, LCTL(KC_BSPC)),
    COMBO(combo2, LCTL(KC_BSPC)),
    COMBO(combo3, KC_ENTER),
    COMBO(combo4, KC_ENTER),
    COMBO(combo5, LCTL(KC_BSPC)),
    COMBO(combo6, OSL(3)),
    COMBO(combo7, OSL(3)),
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
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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

static tap dance_state[1];

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

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
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
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_HOME)))SS_DELAY(50)  SS_TAP(X_TAB)SS_DELAY(50)  SS_TAP(X_TAB)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
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
    case DUAL_FUNC_4:
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
    case DUAL_FUNC_5:
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
