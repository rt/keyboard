#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _DESC 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  L00,L01,L02,
  L10,L11,L12,
  L20,L21,L22,
  L30,L31,L32,
  L40,L41,L42,
  C00,C01,C02,
  C10,C11,C12,
  C20,C21,C22,
  C30,C31,C32,
  C40,C41,C42,
  T00,T01,T02,T03,T04,T05,
  T10,T11,T12,T13,T14,T15,
  T20,T21,T22,T23,T24,T25,
  T30,T31,T32,T33,T34,T35,
  T40,T41,T42,T43,T44,T45,
};

// Fillers to make layering more clear
#define X0 MT(MOD_LCTL, KC_ESC)  // Hold for Left Ctrl, Tap for ESC
#define X3 MO(_MOVEMENT)
#define X4 MT(MOD_LSFT, KC_ENT)  // Hold for Left Shift, Tap for Enter

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_A,  KC_B,  KC_C,      KC_A,  KC_B,  KC_C,      KC_A,  KC_B,  KC_C,  KC_D, KC_E,  KC_F,
    KC_D,  KC_E,  KC_F,      KC_D,  KC_E,  KC_F,      KC_G,  KC_H,  KC_I,  KC_J, KC_K,  KC_L,
    KC_G,  KC_H,  KC_I,      KC_G,  KC_H,  KC_I,      KC_M,  KC_N,  KC_O,  KC_P, KC_Q,  KC_R,
    KC_J,  KC_K,  KC_L,      KC_J,  KC_K,  KC_L,      KC_S,  KC_T,  KC_U,  KC_V, KC_W,  KC_X,
    KC_M,  KC_N,  KC_O,      KC_M,  KC_N,  KC_O,      KC_Y,  KC_Z,  KC_A,  KC_B, KC_C,  KC_D,

    OSL(_DESC),  XXXXXXX,  RESET
  ),
  [_DESC] = LAYOUT(
    L00,  L01,  L02,      C00,  C01,  C02,      T00,  T01,  T02,  T03,  T04,  T05,
    L10,  L11,  L12,      C10,  C11,  C12,      T10,  T11,  T12,  T13,  T14,  T15,
    L20,  L21,  L22,      C20,  C21,  C22,      T20,  T21,  T22,  T23,  T24,  T25,
    L30,  L31,  L32,      C30,  C31,  C32,      T30,  T31,  T32,  T33,  T34,  T35,
    L40,  L41,  L42,      C40,  C41,  C42,      T40,  T41,  T42,  T43,  T44,  T45,

    XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
};

#ifdef AUDIO_ENABLE
float tone_startup[][2] = {
  {NOTE_B5, 20},
  {NOTE_B6, 8},
  {NOTE_DS6, 20},
  {NOTE_B6, 8}
};

float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);

float tone_goodbye[][2] = SONG(GOODBYE_SOUND);

float music_scale[][2]     = SONG(MUSIC_SCALE_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            #ifdef AUDIO_ENABLE
              PLAY_SONG(tone_qwerty);
            #endif
            persistent_default_layer_set(1UL<<_BASE);
          }
          return false;
          break;
        /* case LOWER: */
        /*   if (record->event.pressed) { */
        /*     layer_on(_LOWER); */
        /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
        /*   } else { */
        /*     layer_off(_LOWER); */
        /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
        /*   } */
        /*   return false; */
        /*   break; */
        /* case RAISE: */
        /*   if (record->event.pressed) { */
        /*     layer_on(_RAISE); */
        /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
        /*   } else { */
        /*     layer_off(_RAISE); */
        /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
        /*   } */
        /*   return false; */
        /*   break; */
        /* case BACKLIT: */
        /*   if (record->event.pressed) { */
        /*     register_code(KC_RSFT); */
        /*     #ifdef BACKLIGHT_ENABLE */
        /*       backlight_step(); */
        /*     #endif */
        /*   } else { */
        /*     unregister_code(KC_RSFT); */
        /*   } */
        /*   return false; */
        /*   break; */


        /* Linear Descriptions */
        case L00:
          if (record->event.pressed) {
            SEND_STRING("Cherry Black"SS_TAP(X_ENTER));
          }
          break;
        case L01:
          if (record->event.pressed) {
            SEND_STRING("Cherry Red"SS_TAP(X_ENTER));
          }
          break;
        case L02:
          if (record->event.pressed) {
            SEND_STRING("Cherry Linear Gray"SS_TAP(X_ENTER));
          }
          break;
        case L10:
          if (record->event.pressed) {
            SEND_STRING("Gateron Black"SS_TAP(X_ENTER));
          }
          break;
        case L11:
          if (record->event.pressed) {
            SEND_STRING("Gateron Red"SS_TAP(X_ENTER));
          }
          break;
        case L12:
          if (record->event.pressed) {
            SEND_STRING("Getaeron Yellow"SS_TAP(X_ENTER));
          }
          break;
        case L20:
          if (record->event.pressed) {
            SEND_STRING("Kailh Black"SS_TAP(X_ENTER));
          }
          break;
        case L21:
          if (record->event.pressed) {
            SEND_STRING("Kailh Red"SS_TAP(X_ENTER));
          }
          break;
        case L22:
          if (record->event.pressed) {
            SEND_STRING("Kailh Dark Yellow"SS_TAP(X_ENTER));
          }
          break;
        case L30:
          if (record->event.pressed) {
            SEND_STRING("Kailh Burgundy Pro"SS_TAP(X_ENTER));
          }
          break;
        case L31:
          if (record->event.pressed) {
            SEND_STRING("Cherry Speed Silver"SS_TAP(X_ENTER));
          }
          break;
        case L32:
          if (record->event.pressed) {
            SEND_STRING("Kailh Speed Silver"SS_TAP(X_ENTER));
          }
          break;
        case L40:
          if (record->event.pressed) {
            SEND_STRING("Tealios V1"SS_TAP(X_ENTER));
          }
          break;
        case L41:
          if (record->event.pressed) {
            SEND_STRING("Tealios V2"SS_TAP(X_ENTER));
          }
          break;
        case L42:
          if (record->event.pressed) {
            SEND_STRING("Undefined Switch"SS_TAP(X_ENTER));
          }
          break;


        /* Clicky Descriptions */
        case C00:
          if (record->event.pressed) {
            SEND_STRING("Cherry Blue"SS_TAP(X_ENTER));
          }
          break;
        case C01:
          if (record->event.pressed) {
            SEND_STRING("Cherry Milk"SS_TAP(X_ENTER));
          }
          break;
        case C02:
          if (record->event.pressed) {
            SEND_STRING("Cherry Green"SS_TAP(X_ENTER));
          }
          break;
        case C10:
          if (record->event.pressed) {
            SEND_STRING("Gateron Blue"SS_TAP(X_ENTER));
          }
          break;
        case C11:
          if (record->event.pressed) {
            SEND_STRING("Gateron Green"SS_TAP(X_ENTER));
          }
          break;
        case C12:
          if (record->event.pressed) {
            SEND_STRING("Kailh Pro Light Green"SS_TAP(X_ENTER));
          }
          break;
        case C20:
          if (record->event.pressed) {
            SEND_STRING("Kailh White"SS_TAP(X_ENTER));
          }
          break;
        case C21:
          if (record->event.pressed) {
            SEND_STRING("Kailh Pale Blue"SS_TAP(X_ENTER));
          }
          break;
        case C22:
          if (record->event.pressed) {
            SEND_STRING("Kailh Box Pink"SS_TAP(X_ENTER));
          }
          break;
        case C30:
          if (record->event.pressed) {
            SEND_STRING("Kailh Jade"SS_TAP(X_ENTER));
          }
          break;
        case C31:
          if (record->event.pressed) {
            SEND_STRING("Kailh Navy"SS_TAP(X_ENTER));
          }
          break;
        case C32:
          if (record->event.pressed) {
            SEND_STRING("Kailh Speed Navy"SS_TAP(X_ENTER));
          }
          break;
        case C40:
          if (record->event.pressed) {
            SEND_STRING("Kailh Speed Gold"SS_TAP(X_ENTER));
          }
          break;
        case C41:
          if (record->event.pressed) {
            SEND_STRING("Kailh Speed Bronze"SS_TAP(X_ENTER));
          }
          break;
        case C42:
          if (record->event.pressed) {
            SEND_STRING("Undefined Switch"SS_TAP(X_ENTER));
          }
          break;


        /* Tactile Descriptions */
        case T00:
          if (record->event.pressed) {
            SEND_STRING("Cherry Brown"SS_TAP(X_ENTER));
          }
          break;
        case T01:
          if (record->event.pressed) {
            SEND_STRING("Cherry Clear"SS_TAP(X_ENTER));
          }
          break;
        case T02:
          if (record->event.pressed) {
            SEND_STRING("Cherry Tactile Gray"SS_TAP(X_ENTER));
          }
          break;
        case T03:
          if (record->event.pressed) {
            SEND_STRING("Box Royal"SS_TAP(X_ENTER));
          }
          break;
        case T04:
          if (record->event.pressed) {
            SEND_STRING("Hako Royal True"SS_TAP(X_ENTER));
          }
          break;
        case T05:
          if (record->event.pressed) {
            SEND_STRING("Hako Royal Clear"SS_TAP(X_ENTER));
          }
          break;
        case T10:
          if (record->event.pressed) {
            SEND_STRING("Gateron Brown"SS_TAP(X_ENTER));
          }
          break;
        case T11:
          if (record->event.pressed) {
            SEND_STRING("Gateron Silent Brown"SS_TAP(X_ENTER));
          }
          break;
        case T12:
          if (record->event.pressed) {
            SEND_STRING("Aliaz 60"SS_TAP(X_ENTER));
          }
          break;
        case T13:
          if (record->event.pressed) {
            SEND_STRING("Aliaz 70"SS_TAP(X_ENTER));
          }
          break;
        case T14:
          if (record->event.pressed) {
            SEND_STRING("Aliaz 80"SS_TAP(X_ENTER));
          }
          break;
        case T15:
          if (record->event.pressed) {
            SEND_STRING("Aliaz 100"SS_TAP(X_ENTER));
          }
          break;
        case T20:
          if (record->event.pressed) {
            SEND_STRING("Kailh Box Brown"SS_TAP(X_ENTER));
          }
          break;
        case T21:
          if (record->event.pressed) {
            SEND_STRING("Kailh Pro Purple"SS_TAP(X_ENTER));
          }
          break;
        case T22:
          if (record->event.pressed) {
            SEND_STRING("Kailh Burnt Orange"SS_TAP(X_ENTER));
          }
          break;
        case T23:
          if (record->event.pressed) {
            SEND_STRING("Kailh Speed Copper"SS_TAP(X_ENTER));
          }
          break;
        case T24:
          if (record->event.pressed) {
            SEND_STRING("Input Club True"SS_TAP(X_ENTER));
          }
          break;
        case T25:
          if (record->event.pressed) {
            SEND_STRING("Input Club Hako True"SS_TAP(X_ENTER));
          }
          break;
        case T30:
          if (record->event.pressed) {
            SEND_STRING("Zealios 62g"SS_TAP(X_ENTER));
          }
          break;
        case T31:
          if (record->event.pressed) {
            SEND_STRING("Zealios 65g"SS_TAP(X_ENTER));
          }
          break;
        case T32:
          if (record->event.pressed) {
            SEND_STRING("Zealios 67g"SS_TAP(X_ENTER));
          }
          break;
        case T33:
          if (record->event.pressed) {
            SEND_STRING("Zealios 78g"SS_TAP(X_ENTER));
          }
          break;
        case T34:
          if (record->event.pressed) {
            SEND_STRING("Input Club Clear"SS_TAP(X_ENTER));
          }
          break;
        case T35:
          if (record->event.pressed) {
            SEND_STRING("Input Club Hako Clear"SS_TAP(X_ENTER));
          }
          break;
        case T40:
          if (record->event.pressed) {
            SEND_STRING("Zealios V2 62g"SS_TAP(X_ENTER));
          }
          break;
        case T41:
          if (record->event.pressed) {
            SEND_STRING("Zealios V2 65g"SS_TAP(X_ENTER));
          }
          break;
        case T42:
          if (record->event.pressed) {
            SEND_STRING("Zealios V2 67g"SS_TAP(X_ENTER));
          }
          break;
        case T43:
          if (record->event.pressed) {
            SEND_STRING("Zealios V2 78g"SS_TAP(X_ENTER));
          }
          break;
        case T44:
          if (record->event.pressed) {
            SEND_STRING("Input Club Hako Violet"SS_TAP(X_ENTER));
          }
          break;
        case T45:
          if (record->event.pressed) {
            SEND_STRING("Holy Panda (Drop)"SS_TAP(X_ENTER));
          }
          break;
      }
    return true;
};

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
}

#ifdef AUDIO_ENABLE

void startup_user()
{
    _delay_ms(20); // gets rid of tick
    PLAY_SONG(tone_startup);
}

void shutdown_user()
{
    PLAY_SONG(tone_goodbye);
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void)
{
    music_scale_user();
}

void music_scale_user(void)
{
    PLAY_SONG(music_scale);
}

#endif
