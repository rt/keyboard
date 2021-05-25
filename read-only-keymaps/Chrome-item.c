/* Chrome-item
 * ,----------------------------------.  ,----------------------------------.
 * |      |Search|      |FindTb|Bkmrks|  |Incog |NewTab|      |      |DelTab|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      | Hist |Recent|      |      |  | Back |PgDown| PgUp | Fwd  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |HrdRld| Rld  |ClrDat|      |      |  | TabP |Vimium|      | TabN |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |DevTls|      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define CHROME_L01     _______
#define CHROME_L02     LGUI(LALT(KC_F))         // [*] google search
#define CHROME_L03     XXXXXXX
#define CHROME_L04     LSFT(LGUI(KC_A))         // [*] search tabs
#define CHROME_L05     LALT(LGUI(KC_B))         // [*] bookmarks

#define CHROME_L11     _______
#define CHROME_L12     LGUI(KC_Y)               // [*] search history
#define CHROME_L13     LGUI(LSFT(KC_T))         // [*] recents (actually last closed tab in this case)
#define CHROME_L14     _______
#define CHROME_L15     _______

#define CHROME_L21     LGUI(LSFT(KC_R))         // hard reload
#define CHROME_L22     LGUI(KC_R)               // reload
#define CHROME_L23     LSFT(LGUI(KC_DEL))       // clear browsing data
#define CHROME_L24     XXXXXXX
#define CHROME_L25     XXXXXXX

#define CHROME_L33     XXXXXXX
#define CHROME_L34     LALT(LGUI(KC_I))         // [*] not only but rather open devtools ...
#define CHROME_L35     XXXXXXX

// Right
#define CHROME_R01     LGUI(LSFT(KC_N))
#define CHROME_R02     LGUI(KC_T)
#define CHROME_R03     XXXXXXX
#define CHROME_R04     XXXXXXX
#define CHROME_R05     LGUI(KC_W)

#define CHROME_R11     LGUI(KC_LEFT)            // [*] nav back
#define CHROME_R12     KC_PGDOWN                // page down (no goto declaration)
#define CHROME_R13     KC_PGUP                  // page up (no goto impl)
#define CHROME_R14     LGUI(KC_RIGHT)           // [*] nav foward
#define CHROME_R15     XXXXXXX

#define CHROME_R21     LCTL(LSFT(KC_TAB))       // [*] prev tab
#define CHROME_R22     KC_F                     // [*] vimium
#define CHROME_R23     _______
#define CHROME_R24     LCTL(KC_TAB)             // [*] next tab
#define CHROME_R25     _______

#define CHROME_R31     _______
#define CHROME_R32     _______
#define CHROME_R33     _______



