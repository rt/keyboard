/* IntelliJ-item
 * ,----------------------------------.  ,----------------------------------.
 * |NavBar|FindP |FindC |FindF |Marks |  |Scrtch| New  | Copy | Move |Delete|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |FindAc|LocalC|Recent|ProjV | FnP  |  | Back | Decl | Impl | Fwd  |SupMC |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |TMnMx |StrctV|DebugV|GotoTe|      |  |NxtErr|FileHi|      |PrvErr|LstEdt|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |LastTl|MaxMin| Term |  |Usages|CallHi|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define INAV_L01     LALT(KC_HOME)                // Show navigation bar
#define INAV_L02     LSFT(LGUI(KC_F))             // [*] Search project
#define INAV_L03     LGUI(KC_O)                   // Go to class (could get this key back by just using "Go to file" then tabbing)
#define INAV_L04     LGUI(LSFT(KC_O))             // [*] Go to file
#define INAV_L05     LGUI(KC_F3)                  // [*] Marks

#define INAV_L11     LSFT(LGUI(KC_A))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
#define INAV_L12     LGUI(KC_9)                   // [*] Local changes
#define INAV_L13     LGUI(KC_E)                   // [*] Recent files popup
#define INAV_L14     LGUI(KC_1)                   // [*] Project Files View
#define INAV_L15     LALT(KC_F1)                  // [*] Select current file (or symbol) in any view

#define INAV_L21     LSFT(LGUI(KC_QUOT))          // Toggle tool min/max
#define INAV_L22     LGUI(KC_7)                   // [*] Project Structure View
#define INAV_L23     LGUI(KC_5)                   // Debug View
#define INAV_L24     LSFT(LGUI(KC_T))             // [*] Go to test
#define INAV_L25     _______

#define INAV_L33     KC_F12                       // Last Tool
#define INAV_L34     LGUI(LSFT(KC_F12))           // [*] Toggle maximizing editor
#define INAV_L35     LALT(KC_F12)                 // Terminal View

// Right
#define INAV_R01     LSFT(LGUI(KC_N))             // New scratch
#define INAV_R02     LALT(KC_INS)                 // [*] New
#define INAV_R03     KC_F5                        // [*] Copy
#define INAV_R04     KC_F6                        // [*] Move
#define INAV_R05     KC_DEL                       // [*] Delete

#define INAV_R11     LGUI(LALT(KC_LEFT))          // [*] Navigate back
#define INAV_R12     LGUI(KC_B)                   // [*] Go to declaration
#define INAV_R13     LALT(LGUI(KC_B))             // [*] Go to implementation
#define INAV_R14     LGUI(LALT(KC_RIGHT))         // [*] Navigate forward
#define INAV_R15     LGUI(KC_U)                   // Go to super-method/super-class

#define INAV_R21     KC_F2                        // Next highlighted error
#define INAV_R22     LGUI(KC_F12)                 // [*] File structure popup
#define INAV_R23     _______
#define INAV_R24     LSFT(KC_F2)                  // Previous highlighted error
#define INAV_R25     LGUI(LSFT(KC_DEL))           // Go to last edit location

#define INAV_R31     LALT(KC_F7)                  // [*] Find Usages
#define INAV_R32     LCTL(LALT(KC_H))             // [*] Call hierarchy (usage analysis)
#define INAV_R33     _______



