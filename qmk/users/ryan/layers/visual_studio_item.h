/* VisualStudio-item
 * ,----------------------------------.  ,----------------------------------.
 * |NavBar|FindP |VPRVFI|FindF |Marks |  |Scrtch| New  | Copy | Move |Delete|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |FindAc|LocalC|Recent|ProjV | FnP  |  | Back | Decl | Impl | Fwd  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |GotoTe|SupMC |  |PREVTB|DebugV|LastTl|NEXTTB|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |TMnMx |MaxMin| Term |  |Usages|CallHi|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define INAV_L01     LGUI(LSFT(KC_SCLN))          // Focus breadcrumbs
#define INAV_L02     LGUI(LSFT(KC_F))             // [*] Search project
#define INAV_L03     LCTL((LGUI(KC_E)))           // [*] prev file
#define INAV_L04     LGUI(KC_P)                   // [*] Go to file
#define INAV_L05     _______                      // [*] Marks

#define INAV_L11     LSFT(LGUI(KC_P))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
#define INAV_L12     _______             // [*] Local changes (Show Local History)
#define INAV_L13     LGUI(KC_P)                   // [*] Recent files popup (no good replacement but find file shows most recent to start)
// #define INAV_L13     LCTL(KC_TAB)                 // [*] Recent files popup
#define INAV_L14     LSFT(LGUI(KC_E))             // [*] Project Files View
#define INAV_L15     LCTL((LGUI(KC_O)))           // [*] Select current file (or symbol) in any view

#define INAV_L21     _______
#define INAV_L22     _______
#define INAV_L23     LGUI(KC_1)                   // Focus on editor
#define INAV_L24     _______                      // [*] Go to test
#define INAV_L25     _______                      // Go to super-method/super-class

#define INAV_L33     LCTL(LGUI(KC_C))             // Toggle Panel min/max
#define INAV_L34     VIM_ONLY                     // [*] Toggle maximizing editor
#define INAV_L35     LCTL(KC_GRV)                 // Terminal View

// Right
#define INAV_R01     LGUI(KC_N)                   // New scratch
#define INAV_R02     LCTL(LGUI(KC_I))             // [*] New
#define INAV_R03     LGUI(KC_C)                   // [*] Copy
#define INAV_R04     KC_ENTER                     // [*] Move
#define INAV_R05     LGUI(KC_BSPC)                 // [*] Delete

#define INAV_R11     LCTL(KC_MINS)                // [*] Navigate back
#define INAV_R12     KC_F12                       // [*] Go to declaration
#define INAV_R13     LGUI(KC_F12)                 // [*] Go to implementation
#define INAV_R14     LCTL(LSFT(KC_MINS))          // [*] Navigate forward
#define INAV_R15     XXXXXXX                      // Important! 'you' 'ou'

#define INAV_R21     LALT(LGUI(KC_LEFT))          // Prev Tab
#define INAV_R22     LSFT(LGUI(KC_D))             // Debug View
#define INAV_R23     LSFT(LGUI(KC_M))             // Problems View
#define INAV_R24     LALT(LGUI(KC_RIGHT))         // Next Tab
#define INAV_R25     _______

#define INAV_R31     LSFT(KC_F12)                  // [*] Find Usages
#define INAV_R32     LALT(LSFT(KC_H))              // [*] Call hierarchy (usage analysis)
#define INAV_R33     _______




