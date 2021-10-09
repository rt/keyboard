/* Lower
 * Global: Symbols
 * ,----------------------------------.  ,----------------------------------.
 * |   !  |   @  |   #  |   $  |   %  |  |   ^  |   &  |   *  |   (  |   )  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |   \  |   |  |   ~  |   `  |   "  |  |   /  |   -  |   =  |   [  |   ]  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |   <  |   >  |   '  |  |   ?  |   _  |   +  |   {  |   }  |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  | Bspc |AltBk | Del  |
 *               `--------------------'  `--------------------'
 */

//Left
#define LOW_L01     KC_EXLM
#define LOW_L02     KC_AT
#define LOW_L03     KC_HASH
#define LOW_L04     KC_DLR
#define LOW_L05     KC_PERC

#define LOW_L11     KC_BSLS
#define LOW_L12     KC_PIPE
#define LOW_L13     KC_TILD
#define LOW_L14     KC_GRV
#define LOW_L15     LSFT(KC_QUOT)

#define LOW_L21     XXXXXXX
#define LOW_L22     XXXXXXX
#define LOW_L23     LSFT(KC_COMM)
#define LOW_L24     LSFT(KC_DOT)
#define LOW_L25     KC_QUOT

#define LOW_L33     XXXXXXX
#define LOW_L34     XXXXXXX
#define LOW_L35     XXXXXXX

// Right
#define LOW_R01     KC_CIRC
#define LOW_R02     KC_AMPR
#define LOW_R03     KC_ASTR
#define LOW_R04     KC_LPRN
#define LOW_R05     KC_RPRN

#define LOW_R11     KC_SLSH
#define LOW_R12     KC_MINS
#define LOW_R13     KC_EQL
#define LOW_R14     KC_LBRC
#define LOW_R15     KC_RBRC

#define LOW_R21     LSFT(KC_SLSH)
#define LOW_R22     KC_UNDS
#define LOW_R23     KC_PLUS
#define LOW_R24     KC_LCBR
#define LOW_R25     KC_RCBR

#define LOW_R31     KC_BSPC
#define LOW_R32     LALT(KC_BSPC)
#define LOW_R33     KC_DEL




