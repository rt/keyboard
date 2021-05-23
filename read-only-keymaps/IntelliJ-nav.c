/* IntelliJ-nav
 * Left side: Global Searching
 * Right side: Analysis, File based Searching
 * ,----------------------------------.  ,----------------------------------.
 * |NavBar|FindP |FindC |FindF |Marks |  |      | FnP  |FileHi|FindSy|      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |TMnMx |FindAc|Recent|GotoTe|Blame |  | Back | Decl | Impl | Fwd  |Usages|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |StrctV|DebugV|ProjV |      |  |      |NxtErr|PrvErr|      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |LastTl|MaxMin| Term |  |SupMC |CMMITS|LocalC|
 *               `--------------------'  `--------------------'
 */

// Left
#define INAV_L01     LALT(KC_HOME)                // Show navigation bar
#define INAV_L02     LSFT(LGUI(KC_F))             // [*] Search project
#define INAV_L03     LGUI(KC_O)                   // Go to class (could get this key back by just using "Go to file" then tabbing)
#define INAV_L04     LGUI(LSFT(KC_O))             // [*] Go to file
#define INAV_L05     LGUI(KC_F3)                  // [*] Marks

#define INAV_L11     LSFT(LGUI(KC_QUOT))          // Toggle tool min/max
#define INAV_L12     LSFT(LGUI(KC_A))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
#define INAV_L13     LGUI(KC_E)                   // [*] Recent files popup
#define INAV_L14     LSFT(LGUI(KC_T))             // [*] Go to test
#define INAV_L15     LALT(KC_Q)                   // [*] Blame (custom keymap)

#define INAV_L21     _______
#define INAV_L22     LGUI(KC_7)                   // [*] Project Structure View
#define INAV_L23     LGUI(KC_5)                   // Debug View
#define INAV_L24     LGUI(KC_1)                   // Project Files View
#define INAV_L25     _______

#define INAV_L33     KC_F12                       // Last Tool
#define INAV_L34     LGUI(LSFT(KC_F12))           // [*] Toggle maximizing editor
#define INAV_L35     LALT(KC_F12)                 // Terminal View

// Right
#define INAV_R01     _______
#define INAV_R02     LALT(KC_F1)                  // Select current file (or symbol) in any view
#define INAV_R03     LGUI(KC_F12)                 // File structure popup
#define INAV_R04     LALT(LGUI(KC_O))             // Go to symbol
#define INAV_R05     LGUI(LSFT(KC_DEL))           // Go to last edit location

#define INAV_R11     LGUI(LALT(KC_LEFT))          // Navigate back
#define INAV_R12     LGUI(KC_B)                   // Go to declaration
#define INAV_R13     LALT(LGUI(KC_B))             // Go to implementation
#define INAV_R14     LGUI(LALT(KC_RIGHT))         // Navigate forward
#define INAV_R15     LALT(KC_F7)                  // Find Usages

#define INAV_R21     _______
#define INAV_R22     KC_F2                        // Next highlighted error
#define INAV_R23     LSFT(KC_F2)                  // Previous highlighted error
#define INAV_R24     _______
#define INAV_R25     _______

#define INAV_R31     LGUI(KC_U)                   // Go to super-method/super-class
#define INAV_R32     LALT(KC_W)                   // [*] Commits (custom keymap) but doesn't work!
#define INAV_R33     LGUI(KC_9)                   // [*] Local changes



