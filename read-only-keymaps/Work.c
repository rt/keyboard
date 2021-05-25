/* Work
 * Work specific stuff
 * - FE on left BE on right
 * - Goto on right
 * ,----------------------------------.  ,----------------------------------.
 * |Routes|Ctrlrs|Cmpnts|Tmplts|Styles|  |      |      |      |      |  TP  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Stores|Models|Actins|      |Helprs|  |MgrShr|MgrClt|      |      | Jira |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |StrtLg|      |      | ELP  |Build |  |Jnkins|      |      |      |Cnflnc|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define MISC_L01     WORK_FE_ROUTES
#define MISC_L02     WORK_FE_CONTROLLERS
#define MISC_L03     WORK_FE_COMPONENTS
#define MISC_L04     WORK_FE_TEMPLATES
#define MISC_L05     WORK_FE_STYLES

#define MISC_L11     WORK_FE_STORES
#define MISC_L12     WORK_FE_MODELS
#define MISC_L13     WORK_FE_ACTIONS
#define MISC_L14     _______
#define MISC_L15     WORK_FE_HANDLEBAR_HELPERS

#define MISC_L21     WORK_EDIT_STARTUP_LOG
#define MISC_L22     _______
#define MISC_L23     _______
#define MISC_L24     WORK_EDIT_ELP
#define MISC_L25     WORK_EDIT_BUILD

#define MISC_L33     _______
#define MISC_L34     _______
#define MISC_L35     _______

// Right
#define MISC_R01     _______
#define MISC_R02     _______
#define MISC_R03     _______
#define MISC_R04     _______
#define MISC_R05     WORK_GOTO_TP

#define MISC_R11     WORK_DB_MIGRATIONS_SHARED
#define MISC_R12     WORK_DB_MIGRATIONS_CLIENT
#define MISC_R13     _______
#define MISC_R14     _______
#define MISC_R15     WORK_GOTO_JIRA

#define MISC_R21     WORK_EDIT_JENKINSFILE
#define MISC_R22     _______
#define MISC_R23     _______
#define MISC_R24     _______
#define MISC_R25     WORK_GOTO_CONFLUENCE

#define MISC_R31     _______
#define MISC_R32     _______
#define MISC_R33     _______




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
