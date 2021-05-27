/* Debug
 * ,----------------------------------.  ,----------------------------------.
 * |RunSnp|      |      | Eval |BrkPts|  |      |PlyRes| Over |  In  |  Out | - Chrome
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Debug |DebugL|TogBrk| Eval |BrkPts|  |      |PlyRes| Over |  In  |  Out | - IntelliJ
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |DP_NPM|      |      |      |      |  |      |      |      |      |      | - Node (Vim)
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  | Tab  |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VWNAV_L01     LGUI(LSFT(KC_ENTER))          // run snipplet (not checked, select then run???)
#define VWNAV_L02     _______
#define VWNAV_L03     _______
#define VWNAV_L04     LCTL(LSFT(KC_E))              // evaluate selected text in console
#define VWNAV_L05     LGUI(KC_F8)                   // [*] breakpoints (this one is toggle)

#define VWNAV_L11     LALT(LSFT(KC_D))              // Debug current target at top
#define VWNAV_L12     LCTL(LSFT(KC_D))              // Debug context/cursor
#define VWNAV_L13     LGUI(KC_F8)                   // Toggle breakpoint
#define VWNAV_L14     LALT(KC_F8)                   // Evaluate expression
#define VWNAV_L15     LGUI(LSFT(KC_F8))             // Breakpoints

#define VWNAV_L21     VIM_DISPATCH_NPM
#define VWNAV_L22     _______
#define VWNAV_L23     _______
#define VWNAV_L24     _______
#define VWNAV_L25     _______

#define VWNAV_L33     _______
#define VWNAV_L34     _______
#define VWNAV_L35     _______

// Right
#define VWNAV_R01     _______
#define VWNAV_R02     KC_F8                   // [*] debug play
#define VWNAV_R03     LGUI(KC_QUOT)           // [*] debug over
#define VWNAV_R04     LGUI(KC_SCLN)           // [*] debug in
#define VWNAV_R05     LGUI(LSFT(KC_SCLN))     // [*] debug out
                             
#define VWNAV_R11     _______
#define VWNAV_R12     LALT(LGUI(KC_R))             // [*] Play/Pause
#define VWNAV_R13     KC_F8                        // [*] Step over
#define VWNAV_R14     KC_F7                        // [*] Step into
#define VWNAV_R15     LSFT(KC_F8)                  // [*] Step out
                             
#define VWNAV_R21     _______
#define VWNAV_R22     _______
#define VWNAV_R23     _______
#define VWNAV_R24     _______
#define VWNAV_R25     _______

#define VWNAV_R31     KC_TAB                        // this makes for easy app switching LGUI(tap tab)
#define VWNAV_R32     _______
#define VWNAV_R33     _______



