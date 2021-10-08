/* VisualStudio-editor
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
#define IDEA_L03     LSFT(LGUI(KC_H))               // Replace in files
#define IDEA_L04     _______
#define IDEA_L05     LSFT(LGUI(KC_O))               // [*] File structure popup

#define IDEA_L11     LGUI(KC_A)                     // [*] select all
#define IDEA_L12     KC_F2                          // Rename, a little easier to do that select scope search replace
#define IDEA_L13     _______                    // Change signature, and get the ask to reflect signature change
#define IDEA_L14     _______                     // Get param infor
#define IDEA_L15     _______

#define IDEA_L21     VIM_HSPLIT                     // [*] hor split
#define IDEA_L22     VIM_VSPLIT                     // [*] vert split
#define IDEA_L23     _______
#define IDEA_L24     _______                     // [*] Diff it
#define IDEA_L25     VIM_PASTE_LAST_YANK            // [*] Paste last yank (instead of last selection)

#define IDEA_L33     _______                     // Generate code
#define IDEA_L34     _______                     // [*] Insert live templates
#define IDEA_L35     LCTL(LGUI(KC_K))               // [*] Distraction Free Mode Toggle

// Right
#define IDEA_R01     LCTL(LSFT(LGUI(KC_LEFT)))                  // Shrink selection (similar idea to editor but uses selection)
#define IDEA_R02     VIM_NEXT_BRACKET               // [*]
#define IDEA_R03     VIM_PREV_BRACKET               // [*]
#define IDEA_R04     LCTL(LSFT(LGUI(KC_RIGHT)))                    // Extend selection (similar idea to editor but uses selection)
#define IDEA_R05     LGUI(KC_W)                       // [*]

#define IDEA_R11     LALT(KC_UP)                      // [*] Move line up
#define IDEA_R12     LALT(LSFT(KC_F3))             // [*] prev edit location
#define IDEA_R13     LALT(KC_F3)                  // [*] Next edit (custom keymap)
#define IDEA_R14     LSFT(LGUI(KC_ENTER))             // [*] space above
#define IDEA_R15     _______

#define IDEA_R21     LALT(KC_DOWN)                   // [*] Move line down
#define IDEA_R22     KC_F8                          // [*] Next highlighted error
#define IDEA_R23     LSFT(KC_F8)                    // [*] Previous highlighted error
#define IDEA_R24     LGUI(KC_ENTER)                 // [*] space below
#define IDEA_R25     _______

#define IDEA_R31     _______             // [*] Code complete
#define IDEA_R32     _______           // [*] Statement complete
#define IDEA_R33     _______                 // [*] Show intention actions and quick-fixes



