/* IntelliJ-editor
 * IdeaVim is used so many vim key cuts can also be used without having them here
 * IdeaVim plugin emulation (surround, exchange, commentary) : Use vim shortcuts
 * ,----------------------------------.  ,----------------------------------.
 * |      |Rename|ChSig |ExtrtM|ExtrtV|  | Sel- |      |      | Sel+ |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      |      |  |      |Suggst|  LU  |  LD  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |OverM |ImplM |GenCd |LiveT |ParamI|  |      |      |CmpFi |CmpPrj|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |StatCm|CodeCm|  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     _______
#define IDEA_L02     LSFT(KC_F6)                  // Rename
#define IDEA_L03     LGUI(KC_F6)                  // Change signature
#define IDEA_L04     LGUI(LALT(KC_M))             // Extract method
#define IDEA_L05     LGUI(LALT(KC_V))             // Extract variable

#define IDEA_L11     _______
#define IDEA_L12     _______
#define IDEA_L13     _______
#define IDEA_L14     _______
#define IDEA_L15     _______

#define IDEA_L21     LCTL(KC_O)                   // Override methods
#define IDEA_L22     LCTL(KC_I)                   // Implement methods
#define IDEA_L23     LGUI(KC_N)                   // Generate code
#define IDEA_L24     LGUI(KC_J)                   // [*] Insert live templates
#define IDEA_L25     LGUI(KC_P)                   // Get param infor

#define IDEA_L33     _______
#define IDEA_L34     LGUI(LSFT(KC_ENTER))         // [*] Statement complete
#define IDEA_L35     LCTL(LSFT(KC_SPC))           // [*] Code complet

// Right
#define IDEA_R01     LALT(KC_DOWN)                // Shrink selection
#define IDEA_R02     _______
#define IDEA_R03     _______
#define IDEA_R04     LALT(KC_UP)                  // Extend selection
#define IDEA_R05     _______

#define IDEA_R11     _______
#define IDEA_R12     LALT(KC_ENTER)               // Show intention actions and quick-fixes
#define IDEA_R13     LALT(LSFT(KC_UP))            // [*] Move line up
#define IDEA_R14     LALT(LSFT(KC_DOWN))          // [*] Move line down
#define IDEA_R15     _______

#define IDEA_R21     _______
#define IDEA_R22     _______
#define IDEA_R23     LSFT(LGUI(KC_F9))            // Compile selected file
#define IDEA_R24     LGUI(KC_F9)                  // Make project 
#define IDEA_R25     _______

#define IDEA_R31     _______
#define IDEA_R32     _______
#define IDEA_R33     _______



