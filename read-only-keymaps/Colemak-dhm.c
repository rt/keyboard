/* Colemak-dhm
 * ,----------------------------------.  ,----------------------------------.
 * |Sft/Q |_VWN/W|   F  |_IDN/P|_VHN/B|  |_VHN/J|_IDN/L|   U  |_VWK/Y|Sft/; |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |  A   |   R  |_NAV/S|Ctl/T |_CHR/G|  |_CHR/M|Ctl/N |_NAV/E|   I  |  O   |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |Gui/Z |Alt/X |  C   |_IDE/D|_VHM/V|  |_VHM/K|_IDE/H|  ,   |Alt/. |Gui/' |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | _ADJ | _LOW |_G/Ent|  |_R/Spc| _SFT |_Misc |
 *               `--------------------'  `--------------------'
 */

// Left
#define COLE_L01     MT(MOD_LSFT,KC_Q)
#define COLE_L02     LT(_VWNAV,KC_W)
#define COLE_L03     KC_F
#define COLE_L04     LT(_INAV,KC_P)
#define COLE_L05     LT(_VHNAV,KC_B)

#define COLE_L11     KC_A
#define COLE_L12     KC_R
#define COLE_L13     LT(_NAV,KC_S)
#define COLE_L14     MT(MOD_LCTL,KC_T)
#define COLE_L15     LT(_CHROME,KC_G)

#define COLE_L21     MT(MOD_LGUI,KC_Z)
#define COLE_L22     MT(MOD_LALT,KC_X)
#define COLE_L23     KC_C
#define COLE_L24     LT(_IDEA,KC_D)
#define COLE_L25     LT(_VHOME,KC_V)

#define COLE_L33     OSL(_ADJUST)
#define COLE_L34     OSL(_LOWER)
#define COLE_L35     LT(_GIT,KC_ENTER)

// Right
#define COLE_R01     LT(_VHNAV,KC_J)
#define COLE_R02     LT(_INAV,KC_L)
#define COLE_R03     KC_U
#define COLE_R04     LT(_VWNAV,KC_Y)
#define COLE_R05     MT(MOD_RSFT,KC_SCLN)

#define COLE_R11     LT(_CHROME,KC_M)
#define COLE_R12     MT(MOD_RCTL,KC_N)
#define COLE_R13     LT(_NAV,KC_E)
#define COLE_R14     KC_I
#define COLE_R15     KC_O

#define COLE_R21     LT(_VHOME,KC_K)
#define COLE_R22     LT(_IDEA,KC_H)
#define COLE_R23     KC_COMM
#define COLE_R24     MT(MOD_LALT,KC_DOT)
#define COLE_R25     MT(MOD_LGUI,KC_QUOT)

#define COLE_R31     LT(_RAISE,KC_SPC)
#define COLE_R32     OSL(_SFT)
#define COLE_R33     OSL(_MISC)
 


