/* IntelliJ
 * ,----------------------------------.  ,----------------------------------.
 * | Sel+ |Rename|ChSig |ExtrtM|ExtrtV|  |Scrtch| New  | Copy | Move |Delete|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * | Sel- |Surnd |Commnt|Format|Suggst|  |BrkPts|PlyRes| Over |  In  |  Out |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |OverM |ImplM |GenCd |LiveT |ParamI|  |TogBrk| Eval |CmpFi |CmpPrj|CallHi|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |StatCm|CodeCm|  |Debug |DebugL| RunL |
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     LALT(KC_UP)                  // Extend selection
#define IDEA_L02     LSFT(KC_F6)                  // Rename
#define IDEA_L03     LGUI(KC_F6)                  // Change signature
#define IDEA_L04     LGUI(LALT(KC_M))             // Extract method
#define IDEA_L05     LGUI(LALT(KC_V))             // Extract variable

#define IDEA_L11     LALT(KC_DOWN)                // Shrink selection
#define IDEA_L12     LALT(LGUI(KC_T))             // Surround with ... 
#define IDEA_L13     LGUI(KC_SLSH)                // [*] Comment/uncomment
#define IDEA_L14     LALT(LGUI(KC_L))             // [*] Format
#define IDEA_L15     LALT(KC_ENTER)               // Show intention actions and quick-fixes

#define IDEA_L21     LCTL(KC_O)                   // Override methods
#define IDEA_L22     LCTL(KC_I)                   // Implement methods
#define IDEA_L23     LGUI(KC_N)                   // Generate code
#define IDEA_L24     LGUI(KC_J)                   // [*] Insert live templates
#define IDEA_L25     LGUI(KC_P)                   // Get param infor

#define IDEA_L33     _______
#define IDEA_L34     LGUI(LSFT(KC_ENTER))         // [*] Statement complete
#define IDEA_L35     LCTL(LSFT(KC_SPC))           // [*] Code complet

// Right
#define IDEA_R01     LCTL(LGUI(KC_N))             // New scratch
#define IDEA_R02     LALT(KC_INS)                 // [*] New
#define IDEA_R03     KC_F5                        // [*] Copy
#define IDEA_R04     KC_F6                        // [*] Move
#define IDEA_R05     KC_DEL                       // [*] Delete

#define IDEA_R11     LGUI(LSFT(KC_F8))            // Breakpoints
#define IDEA_R12     LALT(LGUI(KC_R))             // [*] Play/Pause
#define IDEA_R13     KC_F8                        // [*] Step over
#define IDEA_R14     KC_F7                        // [*] Step into
#define IDEA_R15     LSFT(KC_F8)                  // [*] Step out

#define IDEA_R21     LGUI(KC_F8)                  // Toggle breakpoint
#define IDEA_R22     LALT(KC_F8)                  // Evaluate expression
#define IDEA_R23     LSFT(LGUI(KC_F9))            // Compile selected file
#define IDEA_R24     LGUI(KC_F9)                  // Make project 
#define IDEA_R25     LCTL(LALT(KC_H))             // Call hierarchy

#define IDEA_R31     LALT(LSFT(KC_D))             // Debug current target at top
#define IDEA_R32     LCTL(LSFT(KC_D))             // Debug context/cursor
#define IDEA_R33     LCTL(LSFT(KC_R))             // Run context/cursor



