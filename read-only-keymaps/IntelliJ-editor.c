/* IntelliJ-editor
 * IdeaVim is used so many vim key cuts can also be used without having them here
 * IdeaVim plugin emulation (surround, exchange, commentary) : Use vim shortcuts
 * ,----------------------------------.  ,----------------------------------.
 * |VWALL |VWRITE|      |ParamI|FileHi|  | Sel- |OverM |ImplM | Sel+ |VQUIT |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |  SA  |Rename|ChSig |ExtrtM|ExtrtV|  |PrvEdt|  LD  |  LU  |NxtEdt|CmpPrj|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |VHSPLT|VVSPLT|      |      |VPASTE|  |PrvErr|  SD  |  SU  |NxtErr|CmpFi |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |GenCd |LiveT |  |CodeCm|StatCm|Suggst|
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     VIM_WRITE_ALL                  // [*] write quit editor
#define IDEA_L02     VIM_WRITE                      // [*] write
#define IDEA_L03     _______
#define IDEA_L04     LGUI(KC_P)                     // Get param infor
#define IDEA_L05     LGUI(KC_F12)                   // [*] File structure popup

#define IDEA_L11     LGUI(KC_A)                     // [*] select all
#define IDEA_L12     LSFT(KC_F6)                    // Rename
#define IDEA_L13     LGUI(KC_F6)                    // Change signature
#define IDEA_L14     LGUI(LALT(KC_M))               // Extract method
#define IDEA_L15     LGUI(LALT(KC_V))               // Extract variable

#define IDEA_L21     VIM_HSPLIT                     // [*] hor split
#define IDEA_L22     VIM_VSPLIT                     // [*] vert split
#define IDEA_L23     _______
#define IDEA_L24     _______
#define IDEA_L25     VIM_PASTE_LAST_YANK            // [*] Paste last yank (instead of last selection)

#define IDEA_L33     _______
#define IDEA_L34     LGUI(KC_N)                     // Generate code
#define IDEA_L35     LGUI(KC_J)                     // [*] Insert live templates

// Right
#define IDEA_R01     LALT(KC_DOWN)                  // Shrink selection (similar idea to editor but uses selection)
#define IDEA_R02     LCTL(KC_O)                     // Override methods
#define IDEA_R03     LCTL(KC_I)                     // Implement methods
#define IDEA_R04     LALT(KC_UP)                    // Extend selection (similar idea to editor but uses selection)
#define IDEA_R05     VIM_QUIT                       // [*]

#define IDEA_R11     LGUI(LSFT(KC_DEL))             // [*] prev edit location
#define IDEA_R12     LALT(LSFT(KC_DOWN))            // [*] Move line down
#define IDEA_R13     LALT(LSFT(KC_UP))              // [*] Move line up
#define IDEA_R14     LALT(KC_SCLN)                  // [*] Next edit (custom keymap)
#define IDEA_R15     LGUI(KC_F9)                    // Make project

#define IDEA_R21     LSFT(KC_F2)                    // [*] Previous highlighted error
#define IDEA_R22     VIM_INTELLIJ_INSERT_SPACE_BELOW// [*]
#define IDEA_R23     VIM_INTELLIJ_INSERT_SPACE_ABOVE// [*]
#define IDEA_R24     KC_F2                          // [*] Next highlighted error
#define IDEA_R25     LSFT(LGUI(KC_F9))              // Compile selected file

#define IDEA_R31     LCTL(LSFT(KC_SPC))             // [*] Code complet
#define IDEA_R32     LGUI(LSFT(KC_ENTER))           // [*] Statement complete
#define IDEA_R33     LALT(KC_ENTER)                 // [*] Show intention actions and quick-fixes



