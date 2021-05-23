/* Other
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define OTHER_L01     _______
#define OTHER_L02     _______
#define OTHER_L03     _______
#define OTHER_L04     _______
#define OTHER_L05     _______

#define OTHER_L11     _______
#define OTHER_L12     _______
#define OTHER_L13     _______
#define OTHER_L14     _______
#define OTHER_L15     _______

#define OTHER_L21     _______
#define OTHER_L22     _______
#define OTHER_L23     _______
#define OTHER_L24     _______
#define OTHER_L25     _______

#define OTHER_L33     _______
#define OTHER_L34     _______
#define OTHER_L35     _______

// Right
#define OTHER_R01     _______
#define OTHER_R02     _______
#define OTHER_R03     _______
#define OTHER_R04     _______
#define OTHER_R05     _______

#define OTHER_R11     _______
#define OTHER_R12     _______
#define OTHER_R13     _______
#define OTHER_R14     _______
#define OTHER_R15     _______

#define OTHER_R21     _______
#define OTHER_R22     _______
#define OTHER_R23     _______
#define OTHER_R24     _______
#define OTHER_R25     _______

#define OTHER_R31     _______
#define OTHER_R32     _______
#define OTHER_R33     _______



#ifdef TAPPING_TOGGLE
#undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 2

#ifdef AUDIO_ENABLE
    #define NUMPAD_ON_SOUND \
        E__NOTE(_C6),       \
        ED_NOTE(_BF5),      \
        S__NOTE(_C6),       \
        ED_NOTE(_BF5),
#endif

#endif
