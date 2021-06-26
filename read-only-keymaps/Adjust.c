/* Adjust
 * Global: System and Numpad
 * ,----------------------------------.  ,----------------------------------.
 * |Zoom+ | Play | Prev | Next |      |  |  *   |  7   |  8   |  9   |  /   |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Zoom- | Reset|Colemk|ScrnOp|ScrnSh|  |  +   |  4   |  5   |  6   |  .   |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |Zoom0 | Mute | Vol- | Vol+ |SetSnd|  |  -   |  1   |  2   |  3   |  ,   |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |Desktp|  MC  |  | Bspc |  0   | Del  |
* `              `--------------------'  `--------------------'
 */

// Left
#define ADJ_L01     LGUI(KC_PLUS)
#define ADJ_L02     KC_MPLY
#define ADJ_L03     KC_MRWD
#define ADJ_L04     KC_MFFD
#define ADJ_L05     _______

#define ADJ_L11     LGUI(KC_MINS)
#define ADJ_L12     RESET
#define ADJ_L13     COLEMAKDH                       //""
#define ADJ_L14     LSFT(LGUI(KC_5))                // screenshop and recording options
#define ADJ_L15     LSFT(LGUI(KC_4))                // screen shot selected area

#define ADJ_L21     LGUI(KC_0)
#define ADJ_L22     KC_MUTE
#define ADJ_L23     KC_VOLD
#define ADJ_L24     KC_VOLU
#define ADJ_L25     LALT(KC_VOLD)

#define ADJ_L33     _______
#define ADJ_L34     KC_F11                          // show desktop
#define ADJ_L35     LCTL(KC_UP)                     // mission control

// Right
#define ADJ_R01     KC_ASTR
#define ADJ_R02     KC_7
#define ADJ_R03     KC_8
#define ADJ_R04     KC_9
#define ADJ_R05     KC_SLSH

#define ADJ_R11     KC_PLUS
#define ADJ_R12     KC_4
#define ADJ_R13     KC_5
#define ADJ_R14     KC_6
#define ADJ_R15     KC_DOT

#define ADJ_R21     KC_MINS
#define ADJ_R22     KC_1
#define ADJ_R23     KC_2
#define ADJ_R24     KC_3
#define ADJ_R25     KC_COMM

#define ADJ_R31     KC_BSPC
#define ADJ_R32     KC_0
#define ADJ_R33     KC_DEL



