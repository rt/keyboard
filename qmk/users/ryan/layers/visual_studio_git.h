/* VisualStudio-git
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |SCmmts|CMMITS|      |  |AccLft|HUNKN |HUNKP |AccRgt|HUNKU |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |LOGCFD|LOGCFS|Status|      | Blame|  |      |NEXTDF|PREVDF|      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      | DiffR|DiffIt| DiffB|  | StgA | StgF |UnstgF|UnstgA|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |GPUSH |COMMIT|FETCH |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define QWER_L01     _______
#define QWER_L02     _______
#define QWER_L03     LCTL(LGUI(KC_G))                 // Search Commits
#define QWER_L04     LCTL(LGUI(KC_Y))                 // Commits
#define QWER_L05     LCTL(LGUI(KC_J))                 // Timeline (git log)

#define QWER_L11     LCTL(LGUI(KC_H))                 // [*] Show History for file
#define QWER_L12     _______                          // [*] Show History for file for selection
#define QWER_L13     LCTL(LSFT(KC_G))                 // [*] Git status
#define QWER_L14     _______
#define QWER_L15     LCTL(LGUI(KC_B))                 // [*] Blame (custom keymap)

#define QWER_L21     _______
#define QWER_L22     _______
#define QWER_L23     _______                          // [*] Compare With Revision
#define QWER_L24     LCTL(LGUI(KC_M))                 // [*] Diff it
#define QWER_L25     _______                          // [*] Compare With Branch

#define QWER_L33     LCTL(LGUI(KC_R))                 // [*] Push
#define QWER_L34     LCTL(LGUI(KC_P))                 // [*] Commit
#define QWER_L35     _______                          // [*] Fetch

// Right
#define QWER_R01     _______                          // [*] Accept Left Side
#define QWER_R02     LALT(KC_5)                       // [*] Next Diff
#define QWER_R03     LSFT(LALT(KC_5))                 // [*] Prev Diff
#define QWER_R04     _______                          // [*] Accept Right Side
#define QWER_R05     LCTL(LGUI(KC_U))                 // [*] Revert selection

#define QWER_R11     _______
#define QWER_R12     _______                          // [*]
#define QWER_R13     _______                          // [*]
#define QWER_R14     _______
#define QWER_R15     _______

#define QWER_R21     LCTL(LGUI(KC_L))                 // Stage all changes
#define QWER_R22     LCTL(LGUI(KC_DOT))               // Stage single file
#define QWER_R23     LCTL(LGUI(KC_QUOT))              // Unstage single file
#define QWER_R24     LCTL(LGUI(KC_SCLN))              // Unstage all changes
#define QWER_R25     LCTL(LGUI(KC_A))                 // Dicard changes

#define QWER_R31     _______
#define QWER_R32     _______
#define QWER_R33     _______




