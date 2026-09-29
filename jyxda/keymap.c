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

#define DUAL_FUNC_0 LT(11, KC_F8)
#define DUAL_FUNC_1 LT(2, KC_F18)
#define DUAL_FUNC_2 LT(15, KC_F4)
#define DUAL_FUNC_3 LT(3, KC_F17)
#define DUAL_FUNC_4 LT(3, KC_F24)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_MS_WH_LEFT,  KC_MS_BTN2,     KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_MS_WH_RIGHT,                                 KC_MS_WH_LEFT,  KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_BTN2,     KC_MS_WH_RIGHT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ENTER,       MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_ENTER,       
    KC_ESCAPE,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       CW_TOGG,        
                                                    LT(2, KC_TAB),  TD(DANCE_0),                                    KC_DELETE,      LT(3, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F9,          KC_F10,         DUAL_FUNC_0,    DUAL_FUNC_1,    KC_APPLICATION,                                 KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_GRAVE,       KC_TRANSPARENT, 
    KC_WWW_BACK,    MT(MOD_LGUI, KC_F5),MT(MOD_LALT, KC_F6),MT(MOD_LCTL, KC_F7),MT(MOD_LSFT, KC_F8),ST_MACRO_0,                                     KC_LBRC,        KC_4,           KC_5,           KC_6,           KC_RBRC,        KC_QUOTE,       
    KC_WWW_FORWARD, KC_F1,          KC_F2,          KC_F3,          DUAL_FUNC_2,    QK_LLCK,                                        KC_BSLS,        KC_1,           KC_2,           KC_3,           KC_SCLN,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MINUS,       KC_0
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, RGB_VAI,        RGB_HUI,        RGB_SPI,        RGB_MODE_FORWARD,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_HUD,        RGB_SPD,        RGB_TOG,        KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        LCTL(KC_LEFT),  DUAL_FUNC_3,    DUAL_FUNC_4,    LCTL(KC_RIGHT), KC_TRANSPARENT, 
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

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LCTL(KC_BSPC)),
    COMBO(combo1, KC_BSPC),
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
static bool previous_num_lock_state;
static bool num_lock_state_initialized;

bool led_update_user(led_t led_state) {
  if (!num_lock_state_initialized) {
    previous_num_lock_state = led_state.num_lock;
    num_lock_state_initialized = true;
    return true;
  }

  bool num_lock_changed = led_state.num_lock != previous_num_lock_state;
  previous_num_lock_state = led_state.num_lock;
  if (num_lock_changed && biton32(layer_state) == 0) {
    layer_on(1);
  }
  return true;
}

void matrix_scan_user(void) {
  if (layer_1_timeout_pending && timer_elapsed(layer_1_started_at) >= 300) {
    layer_off(1);
    layer_1_timeout_pending = false;
  }
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {34,255,255}, {34,255,255}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {34,255,255}, {74,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {34,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {131,255,255} },

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
    } else {
      layer_off(1);
      layer_1_timeout_pending = false;
    }
  }

  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
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
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
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
    case DUAL_FUNC_4:
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
