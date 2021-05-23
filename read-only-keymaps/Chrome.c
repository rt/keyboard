/* Chrome
 * Chrome: editor, navigation both browser and devtools
 * ,----------------------------------.  ,----------------------------------.
 * |SrchHi|Search|FindTb|FindFi|Bkmrks|  |Incog |NewTab|      |      |DelTab|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |RunCmd|LstTab|PrvPan|NxtPan|      |  |BRKPTS|PLYPAU|STPOVR|STPIN |STPOUT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |HrdRld| Rld  | Back | Fwd  |      |  | TabP |PgDown| PgUp | TabN | Eval |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |DevTls|      |  | Home | End  |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define CHROME_L01     LGUI(KC_Y)               // search history
#define CHROME_L02     LGUI(LALT(KC_F))         // [*] search (across loaded resources)
#define CHROME_L03     LSFT(LGUI(KC_A))         // [*] search tabs
#define CHROME_L04     LGUI(KC_O)               // [*] file search (add @ for methods or ! for snippets)
#define CHROME_L05     LALT(LGUI(KC_B))         // [*] bookmarks

#define CHROME_L11     LGUI(LSFT(KC_P))         // [*] run command
#define CHROME_L12     LGUI(LSFT(KC_T))         // [*] recents (actually last closed tab in this case)
#define CHROME_L13     LGUI(KC_LBRACKET)        // devtools prev pane
#define CHROME_L14     LGUI(KC_RBRACKET)        // devtools next pane
#define CHROME_L15     XXXXXXX

#define CHROME_L21     LGUI(LSFT(KC_R))         // hard reload
#define CHROME_L22     LGUI(KC_R)               // reload
#define CHROME_L23     LGUI(KC_LEFT)            // nav back
#define CHROME_L24     LGUI(KC_RIGHT)           // nav foward
#define CHROME_L25     XXXXXXX

#define CHROME_L33     XXXXXXX
#define CHROME_L34     LALT(LGUI(KC_I))         // [*] zoom concept
#define CHROME_L35     XXXXXXX

// Right
// This was for profiling ... could make a devtools layer
// #define CHROME_R00     KC_A
// #define CHROME_R01     KC_S
// #define CHROME_R02     KC_W
// #define CHROME_R03     KC_D
#define CHROME_R01     LGUI(LSFT(KC_N))
#define CHROME_R02     LGUI(KC_T)
#define CHROME_R03     XXXXXXX
#define CHROME_R04     XXXXXXX
#define CHROME_R05     LGUI(KC_W)

#define CHROME_R11     LGUI(KC_F8)              // [*] breakpoints (this one is toggle)
#define CHROME_R12     KC_F8                    // [*] debug play
#define CHROME_R13     LGUI(KC_QUOT)            // [*] debug over
#define CHROME_R14     LGUI(KC_SCLN)            // [*] debug in
#define CHROME_R15     LGUI(LSFT(KC_SCLN))      // [*] debug out

#define CHROME_R21     LCTL(LSFT(KC_TAB))
#define CHROME_R22     KC_PGDOWN
#define CHROME_R23     KC_PGUP
#define CHROME_R24     LCTL(KC_TAB)
#define CHROME_R25     LSFT(LGUI(KC_E))

#define CHROME_R31     KC_HOME
#define CHROME_R32     KC_END
#define CHROME_R33     XXXXXXX



