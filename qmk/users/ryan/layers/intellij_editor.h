/* IntelliJ-editor
 * IdeaVim is used so many vim key cuts can also be used without having them here
 * IdeaVim plugin emulation (surround, exchange, commentary) : Use vim shortcuts
 * Purposely not doing things like extract method, extract variable ... just do it with vim tools
 * Purposely not including override method, implement methods ... look to the source and do manually, if you need use the ui ...
 * ,----------------------------------.  ,----------------------------------.
 * |VWALL |VWRITE|REPNFI|      |FileHi|  | Sel- |NEXTBR|PREVBR| Sel+ |VQUIT |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |SELALL|Rename|ChSig |ParamI|      |  |  LU  |PrvEdt|NxtEdt|  SU  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |VHSPLT|VVSPLT|      |DiffIt|VPASTE|  |  LD  |NxtErr|PrvErr|  SD  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |GenCd |LiveT | DF   |  |CodeCm|StatCm|Suggst|
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     VIM_WRITE_ALL                  // [*] write quit editor
#define IDEA_L02     VIM_WRITE                      // [*] write
#define IDEA_L03     LGUI(LSFT(KC_R))               // Replace in files
#define IDEA_L04     _______
#define IDEA_L05     LGUI(KC_F12)                   // [*] File structure popup

#define IDEA_L11     LGUI(KC_A)                     // [*] select all
#define IDEA_L12     LSFT(KC_F6)                    // Rename, a little easier to do that select scope search replace
#define IDEA_L13     LGUI(KC_F6)                    // Change signature, and get the ask to reflect signature change
#define IDEA_L14     LGUI(KC_P)                     // Get param infor
#define IDEA_L15     _______

#define IDEA_L21     VIM_HSPLIT                     // [*] hor split
#define IDEA_L22     VIM_VSPLIT                     // [*] vert split
#define IDEA_L23     _______
#define IDEA_L24     LGUI(KC_D)                     // [*] Diff it
#define IDEA_L25     VIM_PASTE_LAST_YANK            // [*] Paste last yank (instead of last selection)

#define IDEA_L33     LGUI(KC_N)                     // Generate code
#define IDEA_L34     LGUI(KC_J)                     // [*] Insert live templates
#define IDEA_L35     LALT(LSFT(KC_E))               // [*] Distraction Free Mode Toggle

// Right
#define IDEA_R01     LALT(KC_DOWN)                  // Shrink selection (similar idea to editor but uses selection)
#define IDEA_R02     VIM_NEXT_BRACKET               // [*]
#define IDEA_R03     VIM_PREV_BRACKET               // [*]
#define IDEA_R04     LALT(KC_UP)                    // Extend selection (similar idea to editor but uses selection)
#define IDEA_R05     VIM_QUIT                       // [*]

#define IDEA_R11     LALT(LSFT(KC_UP))              // [*] Move line up
#define IDEA_R12     LSFT(LGUI(KC_BSPC))             // [*] prev edit location
#define IDEA_R13     LALT(KC_SCLN)                  // [*] Next edit (custom keymap)
#define IDEA_R14     VIM_INTELLIJ_INSERT_SPACE_ABOVE// [*] space above
#define IDEA_R15     _______

#define IDEA_R21     LALT(LSFT(KC_DOWN))            // [*] Move line down
#define IDEA_R22     KC_F2                          // [*] Next highlighted error
#define IDEA_R23     LSFT(KC_F2)                    // [*] Previous highlighted error
#define IDEA_R24     VIM_INTELLIJ_INSERT_SPACE_BELOW// [*] space below
#define IDEA_R25     _______

#define IDEA_R31     LCTL(LSFT(KC_SPC))             // [*] Code complete
#define IDEA_R32     LGUI(LSFT(KC_ENTER))           // [*] Statement complete
#define IDEA_R33     LALT(KC_ENTER)                 // [*] Show intention actions and quick-fixes




