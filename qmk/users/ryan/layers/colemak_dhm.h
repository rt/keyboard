/* Colemak-dhm
 * ,----------------------------------.  ,----------------------------------.
 * |Alt/Q |_IDN/W|_CHR/F|  P   |_VHN/B|  |_VHN/J|  L   |_CHR/U|_IDN/Y|Alt/; |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Sft/A |_QWR/R|_NAV/S|Ctl/T | _G/G |  | _G/M |Ctl/N |_NAV/E|_QWR/I|Sft/O |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |Gui/Z |_IDE/X|_OTH/C|  D   |_VHM/V|  |_VHM/K|  H   |_OTH/,|_IDE/.|Gui/' |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | _ADJ | _LOW |_D/Ent|  |_R/Spc| _SFT |_Misc |
 *               `--------------------'  `--------------------'
 */

// Left
#define COLE_L01     MT(MOD_LALT,KC_Q)
#define COLE_L02     LT(_INAV,KC_W)
#define COLE_L03     LT(_CHROME,KC_F)
#define COLE_L04     KC_P
#define COLE_L05     LT(_VHNAV,KC_B)

#define COLE_L11     MT(MOD_LSFT,KC_A)
#define COLE_L12     LT(_QWERTY,KC_R)
#define COLE_L13     LT(_NAV,KC_S)
#define COLE_L14     MT(MOD_LCTL,KC_T)
#define COLE_L15     LT(_GIT,KC_G)

#define COLE_L21     MT(MOD_LGUI,KC_Z)
#define COLE_L22     LT(_IDEA,KC_X)
#define COLE_L23     LT(_OTHER,KC_C)
#define COLE_L24     KC_D
#define COLE_L25     LT(_VHOME,KC_V)

#define COLE_L33     OSL(_ADJUST)
#define COLE_L34     OSL(_LOWER)
#define COLE_L35     LT(_VWNAV,KC_ENTER)

// Right
#define COLE_R01     LT(_VHNAV,KC_J)
#define COLE_R02     KC_L
#define COLE_R03     LT(_CHROME,KC_U)
#define COLE_R04     LT(_INAV,KC_Y)
#define COLE_R05     MT(MOD_RALT,KC_SCLN)

#define COLE_R11     LT(_GIT,KC_M)
#define COLE_R12     MT(MOD_RCTL,KC_N)
#define COLE_R13     LT(_NAV,KC_E)
#define COLE_R14     LT(_QWERTY,KC_I)
#define COLE_R15     MT(MOD_RSFT,KC_O)

#define COLE_R21     LT(_VHOME,KC_K)
#define COLE_R22     KC_H
#define COLE_R23     LT(_OTHER,KC_COMM)
#define COLE_R24     LT(_IDEA,KC_DOT)
#define COLE_R25     MT(MOD_LGUI,KC_QUOT)

#define COLE_R31     LT(_RAISE,KC_SPC)
#define COLE_R32     OSL(_SFT)
#define COLE_R33     OSL(_MISC)
 



