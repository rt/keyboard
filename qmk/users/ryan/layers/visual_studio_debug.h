/* VisualStudio-debug
 * ,----------------------------------.  ,----------------------------------.
 * |RunSnp|      |      |      |BrkPts|  | Eval |PlyRes| Over |  In  |  Out | - Chrome
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Debug |      |CondBp|TogBrk|BrkPts|  | Eval |PlyRes| Over |  In  |  Out | - Visual Studio
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |LConfg|      |      |      |      |  |      |      |      |      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  | Tab  |DP_NPM|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VWNAV_L01     LGUI(LSFT(KC_ENTER))          // run snipplet (not checked, select then run???)
#define VWNAV_L02     _______
#define VWNAV_L03     _______
#define VWNAV_L04     _______
#define VWNAV_L05     LGUI(KC_F8)                   // [*] breakpoints (this one is toggle)

#define VWNAV_L11     LSFT(LGUI(KC_F5))             // Restart Debug
#define VWNAV_L12     _______
#define VWNAV_L13     LCTL(LGUI(KC_X))              // Conditional breakpoint
#define VWNAV_L14     KC_F9                         // Toggle breakpoint
#define VWNAV_L15     LCTL(LGUI(KC_V))              // Toggle active breakpoints

#define VWNAV_L21     LCTL(LGUI(KC_COMM))           // Open launch.json
#define VWNAV_L22     _______
#define VWNAV_L23     _______
#define VWNAV_L24     _______
#define VWNAV_L25     _______

#define VWNAV_L33     _______
#define VWNAV_L34     _______
#define VWNAV_L35     _______

// Right
#define VWNAV_R01     LCTL(LSFT(KC_E))              // evaluate selected text in console
#define VWNAV_R02     KC_F8                         // [*] debug play
#define VWNAV_R03     LGUI(KC_QUOT)                 // [*] debug over
#define VWNAV_R04     LGUI(KC_SCLN)                 // [*] debug in
#define VWNAV_R05     LGUI(LSFT(KC_SCLN))           // [*] debug out
                             
#define VWNAV_R11     LSFT(LGUI(KC_Y))               // Evaluate expression
#define VWNAV_R12     KC_F5                          // [*] Play/Pause
#define VWNAV_R13     KC_F10                         // [*] Step over
#define VWNAV_R14     KC_F11                         // [*] Step into
#define VWNAV_R15     LSFT(KC_F11)                   // [*] Step out
                             
#define VWNAV_R21     _______
#define VWNAV_R22     _______
#define VWNAV_R23     _______
#define VWNAV_R24     _______
#define VWNAV_R25     _______

#define VWNAV_R31     KC_TAB                        // this makes for easy app switching LGUI(tap tab)
#define VWNAV_R32     VIM_DISPATCH_NPM
#define VWNAV_R33     _______




