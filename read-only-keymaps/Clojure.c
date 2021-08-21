/* Clojure
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |  <I  |  >I  |      |  |  <(  |  >(  |  <)  |  >)  |  \@  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |RaiseF|SwapF |WrapF(|WrapF)|SwapF |  |  (   |  B   |  W   |   )  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |RaiseE|SwapE |WrapE(|WrapE)|SwapE |  |  [[  |  gE  |  E   |  ]]  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |  CS{ |  CS[ |  CS( |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define OTHER_L01     _______
#define OTHER_L02     _______
#define OTHER_L03     CLOJURE_FORM_INSERT_BEG
#define OTHER_L04     CLOJURE_FORM_INSERT_END
#define OTHER_L05     _______

#define OTHER_L11     CLOJURE_FORM_RAISE
#define OTHER_L12     CLOJURE_FORM_SWAP_LEFT
#define OTHER_L13     CLOJURE_FORM_WRAP_BEG
#define OTHER_L14     CLOJURE_FORM_WRAP_END
#define OTHER_L15     CLOJURE_FORM_SWAP_RIGHT

#define OTHER_L21     CLOJURE_ELEMENT_RAISE
#define OTHER_L22     CLOJURE_ELEMENT_SWAP_LEFT
#define OTHER_L23     CLOJURE_ELEMENT_WRAP_BEG
#define OTHER_L24     CLOJURE_ELEMENT_WRAP_END
#define OTHER_L25     CLOJURE_ELEMENT_SWAP_RIGHT

#define OTHER_L33     _______
#define OTHER_L34     LGUI(LSFT(KC_M))          // [o] toggle device
#define OTHER_L35     _______

// Right
#define OTHER_R01     CLOJURE_SLUPAGE_LEFT
#define OTHER_R02     CLOJURE_BARFAGE_LEFT
#define OTHER_R03     CLOJURE_BARFAGE_RIGHT
#define OTHER_R04     CLOJURE_SLUPAGE_RIGHT
#define OTHER_R05     CLOJURE_SPLICE

#define OTHER_R11     KC_LPRN
#define OTHER_R12     LSFT(KC_B)
#define OTHER_R13     LSFT(KC_W)
#define OTHER_R14     KC_RPRN
#define OTHER_R15     _______

#define OTHER_R21     CLOJURE_TOP_FORM_BEG
#define OTHER_R22     CLOJURE_ELEMENT_LEFT_END
#define OTHER_R23     LSFT(KC_E)
#define OTHER_R24     CLOJURE_TOP_FORM_END
#define OTHER_R25     _______

#define OTHER_R31     _______
#define OTHER_R32     _______
#define OTHER_R33     _______



