/* Qwerty
 * ,----------------------------------.  ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |  |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |  |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |  |   N  |   M  |   ,  |   .  |   /  |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | _ADJ | _LOW |_G/Ent|  |_R/Spc| _SFT | _ADJ |
 *               `--------------------'  `--------------------'
 */
// Left
#define QWER_L01     KC_Q
#define QWER_L02     KC_W
#define QWER_L03     KC_E
#define QWER_L04     KC_R
#define QWER_L05     KC_T

#define QWER_L11     KC_A
#define QWER_L12     KC_S
#define QWER_L13     KC_D
#define QWER_L14     KC_F
#define QWER_L15     KC_G

#define QWER_L21     KC_Z
#define QWER_L22     KC_X
#define QWER_L23     KC_C
#define QWER_L24     KC_V
#define QWER_L25     KC_B

#define QWER_L33     OSL(_ADJUST)
#define QWER_L34     OSL(_LOWER)
#define QWER_L35     LT(_GIT,KC_ENTER)

// Right
#define QWER_R01     KC_Y
#define QWER_R02     KC_U
#define QWER_R03     KC_I
#define QWER_R04     KC_O
#define QWER_R05     KC_P

#define QWER_R11     KC_H
#define QWER_R12     KC_J
#define QWER_R13     KC_K
#define QWER_R14     KC_L
#define QWER_R15     KC_SCLN

#define QWER_R21     KC_N
#define QWER_R22     KC_M
#define QWER_R23     KC_COMM
#define QWER_R24     KC_DOT
#define QWER_R25     KC_SLSH

#define QWER_R31     LT(_RAISE,KC_SPC)
#define QWER_R32     OSL(_SFT)
#define QWER_R33     _MISC



