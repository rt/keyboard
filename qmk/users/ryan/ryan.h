#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

// Fillers to make layering more clear
//#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Concepts:
//     Environments:  All my work is pretty much done in 3 apps each has one or more layers dedicated to it.
//         Vim: I work most of the time in vim in a tmux env to do everything from coding, referencing, to emails.
//         IntelliJ: I use it to do all dynamically type coding while using IntelliJ to do Java.
//         Chrome: I use chrome and devtools
//
//     Feature: Layers are sometimes divided by features. Common features are tried to be mapped to similar keys and patterns
//
// -Global 
//     Layers: (Nav, Lower, Raise, Shift)
//     Features: navigation
// -Vim Navigation
//     Layers: (VHNav, Git, VWNav)
// -Vim Editor
//     Layers: (VHome)
// -Idea Navigation
//     Layers: (INav)
// -Idea Editor
//     Layers: (Idea)
// -Chrome
//     Layers: (Chrome)
//     Features: navigation, editor
//
//

enum custom_layers {
  _QWERTY=0,
  _COLE=1,
  _GIT=2,
  _LOWER=3,
  _RAISE=4,
  _NAV=5,
  _VHOME=6,
  _VHNAV=7,
  _OTHER=8,
  _VWNAV=9,
  _INAV=10,
  _CHROME=11,
  _IDEA=12,
  _SFT=13,
  _MISC=14,
  _ADJUST=15,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAKDH,
  LOWER,
  RAISE,
  EPRM,
  VRSN,
  RGB_SLD,

  TMUX_PANE_NEXT,
  TMUX_PANE_PREV,
  TMUX_WIN_PREV,
  TMUX_WIN_NEXT,
  TMUX_SCROLL,
  TMUX_ZOOM_TOGGLE,
  TMUX_EVEN_VERT,
  TMUX_EVEN_HOR,

  VIM_SHOW_MY_SNIPPETS, 
  VIM_HUNK_UNDO,
  VIM_HUNK_NEXT,
  VIM_HUNK_PREV,
  VIM_BROWSE,
  VIM_HELP,
  VIM_QUIT,
  VIM_WRITE,
  VIM_MERGETOOL,
  VIM_DIFFTOOL,
  VIM_PASTE_LAST_YANK,
  VIM_DIFF_TOGGLE,
  VIM_LOG_CURRENT_FILE,
  VIM_LOG_CURRENT_FILE_SELECTION,
  VIM_LOG_CURRENT_FILE_DETAILS,
  VIM_LOG_RELEASE,
  VIM_PICK_AXE,
  VIM_PICK_AXE_CURRENT_FILE,
  VIM_USAGES_CWORD,
  VIM_USAGES_CFILE,
  VIM_EDIT_ANY,
  VIM_DIFF_ANY,
  VIM_DIFF_INDEX,
  VIM_DIFF_MASTER,
  VIM_GIT_COMMITS,
  VIM_GIT_MASTER_FILE,
  VIM_EDIT_INDEX_TOGGLE,
  VIM_GIT_STATUS,
  VIM_GIT_BLAME,
  VIM_GIT_GREP,
	VIM_ARGS_FIRST,
	VIM_ARGS_NEXT,
	VIM_ARGS_PREV,
	VIM_ARGS_LAST,
  VIM_BUFFER_PREV,
  VIM_BUFFER_NEXT,
  VIM_CTAGS_DECL,
  VIM_CTAGS_SEL,
  VIM_TAGS,
  VIM_TAGBAR_OPEN_AUTOCLOSE,
  VIM_FIND_INPATH,
  VIM_FIND_FILE,
  VIM_FIND_GFILE,
  VIM_MARKS,
  VIM_COMMANDS,
  VIM_RECENT_CHANGES,
  VIM_FILES_RECENT,
  VIM_VIEW_PROJ,
  VIM_FILE_INPROJ,
  VIM_EXCHANGE_LINE_ABOVE,
  VIM_EXCHANGE_LINE_BELOW,
  VIM_INSERT_SPACE_ABOVE,
  VIM_INSERT_SPACE_BELOW,
	VIM_QUICK_FIRST,
	VIM_QUICK_NEXT,
	VIM_QUICK_PREV,
	VIM_QUICK_LAST,
  VIM_CHANGE_FIRST,
  VIM_CHANGE_PREV,
  VIM_CHANGE_NEXT,
  VIM_CHANGE_LAST,
  VIM_DISPATCH_NPM,
  VIM_SHOW_QUICK_REF,
  VIM_SHOW_KEYMAPS,
  VIM_ONLY,
  VIM_COMMENT,
  VIM_GUNDO,
  VIM_SNIPPETS,
  VIM_NERD_NEW,
  VIM_NERD_COPY,
  VIM_NERD_MOVE,
  VIM_NERD_DEL,
  VIM_ULTISNIPS_TRIGGER,
  VIM_DIR_ROOT,
  VIM_DIR_CURRENT_FILE,
  VIM_WORK_SHOW_NOTES,
  VIM_WORK_GOTO_COMPONENT,
  VIM_WORK_GET_TEMPLATE,
  VIM_WORK_GET_BACKING_FILE,
  VIM_GET_STYLE_FILE,
  VIM_GOTO_TEST,
  VIM_GET_USAGES_BY_CURRENT_FILE,
  VIM_GET_IMPL,
  VIM_GET_IMPL_CURSOR_WORD,

  WORK_DB_MIGRATIONS_SHARED,
  WORK_DB_MIGRATIONS_CLIENT,
  WORK_FE_ROUTES,
  WORK_FE_CONTROLLERS,
  WORK_FE_COMPONENTS,
  WORK_FE_TEMPLATES,
  WORK_FE_STYLES,
  WORK_FE_HANDLEBAR_HELPERS,
  WORK_FE_STORES,
  WORK_FE_MODELS,
  WORK_FE_ACTIONS,
  WORK_GOTO_TP,
  WORK_GOTO_JIRA,
  WORK_GOTO_CONFLUENCE,
  WORK_EDIT_ELP,
  WORK_EDIT_STARTUP_LOG,
  WORK_EDIT_JENKINSFILE,
  WORK_EDIT_BUILD,

};

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
 


/* Shift
 * Global: Shift Layer.  Using instead of OSM to get more keys
 * ,----------------------------------.  ,----------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  |  |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  |  |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |  |   K  |   H  |   ,  |   .  |   '  |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |  Esc |CapsLk|  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define SFT_L01     LSFT(KC_Q)
#define SFT_L02     LSFT(KC_W)
#define SFT_L03     LSFT(KC_F)
#define SFT_L04     LSFT(KC_P)
#define SFT_L05     LSFT(KC_B)

#define SFT_L11     LSFT(KC_A)
#define SFT_L12     LSFT(KC_R)
#define SFT_L13     LSFT(KC_S)
#define SFT_L14     LSFT(KC_T)
#define SFT_L15     LSFT(KC_G)

#define SFT_L21     LSFT(KC_Z)
#define SFT_L22     LSFT(KC_X)
#define SFT_L23     LSFT(KC_C)
#define SFT_L24     LSFT(KC_D)
#define SFT_L25     LSFT(KC_V)

#define SFT_L33     _______
#define SFT_L34     KC_ESC
#define SFT_L35     KC_CAPSLOCK

// Right
#define SFT_R01     LSFT(KC_J)
#define SFT_R02     LSFT(KC_L)
#define SFT_R03     LSFT(KC_U)
#define SFT_R04     LSFT(KC_Y)
#define SFT_R05     LSFT(KC_SCLN)

#define SFT_R11     LSFT(KC_M)
#define SFT_R12     LSFT(KC_N)
#define SFT_R13     LSFT(KC_E)
#define SFT_R14     LSFT(KC_I)
#define SFT_R15     LSFT(KC_O)

#define SFT_R21     LSFT(KC_K)
#define SFT_R22     LSFT(KC_H)
#define SFT_R23     KC_COMM
#define SFT_R24     KC_DOT
#define SFT_R25     LSFT(KC_QUOT)

#define SFT_R31     XXXXXXX
#define SFT_R32     XXXXXXX
#define SFT_R33     XXXXXXX
 


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



/* Raise
 * Global: Function Keys and Reference
 * ,----------------------------------.  ,----------------------------------.
 * |QkRef |KEYMPS|MYSNIP|WORK  |      |  |      |      |      |  F11 |  F12 |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      |      |  |Insert|      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  |  F6  |  F7  |  F8  |  F9  |  F10 | 
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |GuiBk |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define RAIS_L01     VIM_SHOW_QUICK_REF
#define RAIS_L02     VIM_SHOW_KEYMAPS
#define RAIS_L03     VIM_SHOW_MY_SNIPPETS
#define RAIS_L04     VIM_WORK_SHOW_NOTES
#define RAIS_L05     XXXXXXX

#define RAIS_L11     XXXXXXX
#define RAIS_L12     XXXXXXX
#define RAIS_L13     XXXXXXX
#define RAIS_L14     XXXXXXX
#define RAIS_L15     XXXXXXX

#define RAIS_L21     KC_F1
#define RAIS_L22     KC_F2
#define RAIS_L23     KC_F3
#define RAIS_L24     KC_F4
#define RAIS_L25     KC_F5

#define RAIS_L33     XXXXXXX
#define RAIS_L34     KC_TAB
#define RAIS_L35     LGUI(KC_BSPC)

// Right
#define RAIS_R01     XXXXXXX
#define RAIS_R02     XXXXXXX
#define RAIS_R03     XXXXXXX
#define RAIS_R04     KC_F11
#define RAIS_R05     KC_F12

#define RAIS_R11     KC_INSERT
#define RAIS_R12     XXXXXXX
#define RAIS_R13     XXXXXXX
#define RAIS_R14     XXXXXXX
#define RAIS_R15     XXXXXXX

#define RAIS_R21     KC_F6
#define RAIS_R22     KC_F7
#define RAIS_R23     KC_F8
#define RAIS_R24     KC_F9
#define RAIS_R25     KC_F10

#define RAIS_R31     XXXXXXX
#define RAIS_R32     XXXXXXX
#define RAIS_R33     XXXXXXX



/* Adjust
 * Global: System and Numpad
 * ,----------------------------------.  ,----------------------------------.
 * |Zoom+ | Play | Prev | Next |      |  |  *   |  7   |  8   |  9   |  /   |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Zoom- | Reset|Colemk|Qwerty|ScrnSh|  |  +   |  4   |  5   |  6   |  0   |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |Zoom0 | Mute | Vol- | Vol+ |SetSnd|  |  -   |  1   |  2   |  3   |  .   |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  | Bspc |  0   | Del  |
* `              `--------------------'  `--------------------'
 */

// Left
#define ADJ_L01     LGUI(KC_PLUS)
#define ADJ_L02     KC_MPLY
#define ADJ_L03     KC_MRWD
#define ADJ_L04     KC_MFFD
#define ADJ_L05     XXXXXXX

#define ADJ_L11     LGUI(KC_MINS)
#define ADJ_L12     RESET
#define ADJ_L13     COLEMAKDH                       //""
#define ADJ_L14     QWERTY                          //custom keycode, so song can be played
#define ADJ_L15     LSFT(LGUI(KC_4))

#define ADJ_L21     LGUI(KC_0)
#define ADJ_L22     KC_MUTE
#define ADJ_L23     KC_VOLD
#define ADJ_L24     KC_VOLU
#define ADJ_L25     LALT(KC_VOLD)

#define ADJ_L33     _______
#define ADJ_L34     XXXXXXX
#define ADJ_L35     XXXXXXX

// Right
#define ADJ_R01     KC_ASTR
#define ADJ_R02     KC_7
#define ADJ_R03     KC_8
#define ADJ_R04     KC_9
#define ADJ_R05     KC_SLSH

#define ADJ_R11     KC_PLUS
#define ADJ_R12     KC_4
#define ADJ_R13     KC_5
#define ADJ_R14     KC_6
#define ADJ_R15     KC_0

#define ADJ_R21     KC_MINS
#define ADJ_R22     KC_1
#define ADJ_R23     KC_2
#define ADJ_R24     KC_3
#define ADJ_R25     KC_DOT

#define ADJ_R31     KC_BSPC
#define ADJ_R32     KC_0
#define ADJ_R33     KC_DEL



/* Nav
 * Global: System, Tmux, App, etc, Navigation
 * ,----------------------------------.  ,----------------------------------.
 * |VQUIT |VWRITE|VPRVFI|      |PrevAp|  |TWINP |TPANEN|TPANEP|TWINN |TEVENV|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |TSCRLL| PgUp | Home |  | Left | Down |  Up  |Right |TEVENH|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |FlScrn|      |AppWin|PgDown| End  |  |WkspL |WordL |WordR |WkspR |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |TZMTOG|Enter |  | Bspc |AltBk | Del  |
 *               `--------------------'  `--------------------'
 */

// Left
#define NAV_L01     VIM_QUIT
#define NAV_L02     VIM_WRITE
#define NAV_L03     LCTL(KC_CIRC)
#define NAV_L04     _______
#define NAV_L05     LGUI(KC_TAB)

#define NAV_L11     _______
#define NAV_L12     _______
#define NAV_L13     TMUX_SCROLL
#define NAV_L14     KC_PGUP
#define NAV_L15     KC_HOME

#define NAV_L21     LCTL(LGUI(KC_F))
#define NAV_L22     _______
#define NAV_L23     LGUI(KC_GRV)
#define NAV_L24     KC_PGDOWN
#define NAV_L25     KC_END

#define NAV_L33     _______
#define NAV_L34     TMUX_ZOOM_TOGGLE
#define NAV_L35     KC_ENTER

// Right
#define NAV_R01     TMUX_WIN_PREV
#define NAV_R02     TMUX_PANE_NEXT
#define NAV_R03     TMUX_PANE_PREV
#define NAV_R04     TMUX_WIN_NEXT
#define NAV_R05     TMUX_EVEN_VERT

#define NAV_R11     KC_LEFT
#define NAV_R12     KC_DOWN
#define NAV_R13     KC_UP
#define NAV_R14     KC_RIGHT
#define NAV_R15     TMUX_EVEN_HOR

#define NAV_R21     LCTL(KC_LEFT)
#define NAV_R22     LALT(KC_LEFT)
#define NAV_R23     LALT(KC_RIGHT)
#define NAV_R24     LCTL(KC_RIGHT)
#define NAV_R25     _______

#define NAV_R31     KC_BSPC
#define NAV_R32     LALT(KC_BSPC)
#define NAV_R33     KC_DEL



/* Vim-editor
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |VPASTE|      |  |      | New  | Copy | Move | Del  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |COMNT |FORMAT|      |  |      |      |EX_ABV|EX_BLW|      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      | SNIP | DIFF |  |      |      |      |      |DP_NPM|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |ComplX|Compl |  |SP_ABV|SP_BLW|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VHOME_L01     _______
#define VHOME_L02     _______
#define VHOME_L03     _______
#define VHOME_L04     VIM_PASTE_LAST_YANK           // Paste last yank (instead of last selection)
#define VHOME_L05     _______

#define VHOME_L11     _______
#define VHOME_L12     _______
#define VHOME_L13     VIM_COMMENT                   // [*] Comment selected
#define VHOME_L14     KC_EQL                        // [*] Format selected
#define VHOME_L15     _______

#define VHOME_L21     _______
#define VHOME_L22     _______
#define VHOME_L23     _______
#define VHOME_L24     VIM_SNIPPETS                  // [*] snipplets
#define VHOME_L25     VIM_DIFF_TOGGLE

#define VHOME_L33     _______
#define VHOME_L34     LCTL(KC_X)                    // [*] Advanced completion (Ctl-L, query db, ets.)
#define VHOME_L35     LCTL(KC_N)                    // [*] word complete

// Right
#define VHOME_R01     _______
#define VHOME_R02     VIM_NERD_NEW                  // [*]
#define VHOME_R03     VIM_NERD_COPY                 // [*]
#define VHOME_R04     VIM_NERD_MOVE                 // [*]
#define VHOME_R05     VIM_NERD_DEL                  // [*]

#define VHOME_R11     _______
#define VHOME_R12     _______
#define VHOME_R13     VIM_EXCHANGE_LINE_ABOVE
#define VHOME_R14     VIM_EXCHANGE_LINE_BELOW
#define VHOME_R15     _______

#define VHOME_R21     _______
#define VHOME_R22     _______
#define VHOME_R23     _______
#define VHOME_R24     _______
#define VHOME_R25     VIM_DISPATCH_NPM

#define VHOME_R31     VIM_INSERT_SPACE_ABOVE
#define VHOME_R32     VIM_INSERT_SPACE_BELOW
#define VHOME_R33     _______



/* Vim-nav
 * Vim: Navigation
 * ,----------------------------------.  ,----------------------------------.
 * |      | FINDP|FILES |GFILES| MARKS|  |TAGSEL| FNP  | TAGB | TAGS |USAGEF|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |COMNDS|RECCHG| REC  | TEST | HELP |  | B-P  | DECL | IMPL | B-N  |USAGEW|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |CDROOT| CDCF |      | PROJV|      |  |STYLE | DIGC |BACKC | TEMP |USAGCF|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      | ONLY |      |  |      |CMMITS| Gundo|
 *               `--------------------'  `--------------------'
 */

// Left
#define VHNAV_L01     XXXXXXX
#define VHNAV_L02     VIM_FIND_INPATH                 // [*] Find <keyword> in current directory
#define VHNAV_L03     VIM_FIND_FILE
#define VHNAV_L04     VIM_FIND_GFILE                  // [*] Find file in git 
#define VHNAV_L05     VIM_MARKS                       // [*]

#define VHNAV_L11     VIM_COMMANDS
#define VHNAV_L12     VIM_RECENT_CHANGES              // [*]
#define VHNAV_L13     VIM_FILES_RECENT                // [*]
#define VHNAV_L14     VIM_GOTO_TEST                   // [*]
#define VHNAV_L15     VIM_HELP

#define VHNAV_L21     VIM_DIR_ROOT                    // change dir to project top        
#define VHNAV_L22     VIM_DIR_CURRENT_FILE            // change dir to current file dir
#define VHNAV_L23     _______
#define VHNAV_L24     VIM_VIEW_PROJ                   // [*]
#define VHNAV_L25     _______

#define VHNAV_L33     _______
#define VHNAV_L34     VIM_ONLY                        // [*]
#define VHNAV_L35     _______

// Right
#define VHNAV_R01     VIM_CTAGS_SEL                   // [*] Pick selection when multiple options
#define VHNAV_R02     VIM_FILE_INPROJ                 // [*] select current file in tree
#define VHNAV_R03     VIM_TAGBAR_OPEN_AUTOCLOSE       // [*] tags for file, good for large files
#define VHNAV_R04     VIM_TAGS                        // [*] symbols (not so usuful could do :BLines or :BTags instead)
#define VHNAV_R05     VIM_USAGES_CFILE                // Search for cfile in current scope

#define VHNAV_R11     VIM_BUFFER_PREV                 // [*] Prev buffer
#define VHNAV_R12     VIM_CTAGS_DECL                  // [*] Go to declaration
#define VHNAV_R13     VIM_GET_IMPL                    // [*] Find files named like current file (java)
#define VHNAV_R14     VIM_BUFFER_NEXT                 // [*] Next buffer
#define VHNAV_R15     VIM_USAGES_CWORD                // [*] Search for cword in current scope

#define VHNAV_R21     VIM_GET_STYLE_FILE
#define VHNAV_R22     VIM_WORK_GOTO_COMPONENT
#define VHNAV_R23     VIM_WORK_GET_BACKING_FILE
#define VHNAV_R24     VIM_WORK_GET_TEMPLATE
#define VHNAV_R25     VIM_GET_USAGES_BY_CURRENT_FILE  // seach where current file usesd, adjusts depending on the extention.

#define VHNAV_R31     VIM_GET_IMPL_CURSOR_WORD        // Find files named like cword
#define VHNAV_R32     VIM_GIT_COMMITS                 // [*] view recent (all) commits
#define VHNAV_R33     VIM_GUNDO                       // [*] local changes



/* Vim-nav2
 * More vim navigation
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  | C-F  | C-N  | C-P  | C-L  |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      |      |  | A-F  | A-N  | A-P  | A-L  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  | Q-F  | Q-N  | Q-P  | Q-L  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VWNAV_L01     _______
#define VWNAV_L02     _______
#define VWNAV_L03     _______
#define VWNAV_L04     _______
#define VWNAV_L05     _______

#define VWNAV_L11     _______
#define VWNAV_L12     _______
#define VWNAV_L13     _______
#define VWNAV_L14     _______
#define VWNAV_L15     _______

#define VWNAV_L21     _______
#define VWNAV_L22     _______
#define VWNAV_L23     _______
#define VWNAV_L24     _______
#define VWNAV_L25     _______

#define VWNAV_L33     _______
#define VWNAV_L34     _______
#define VWNAV_L35     _______

// Right
#define VWNAV_R01     VIM_CHANGE_FIRST
#define VWNAV_R02     VIM_CHANGE_NEXT
#define VWNAV_R03     VIM_CHANGE_PREV
#define VWNAV_R04     VIM_CHANGE_LAST
#define VWNAV_R05     _______

#define VWNAV_R11     VIM_ARGS_FIRST
#define VWNAV_R12     VIM_ARGS_NEXT
#define VWNAV_R13     VIM_ARGS_PREV
#define VWNAV_R14     VIM_ARGS_LAST
#define VWNAV_R15     _______

#define VWNAV_R21     VIM_QUICK_FIRST
#define VWNAV_R22     VIM_QUICK_NEXT
#define VWNAV_R23     VIM_QUICK_PREV
#define VWNAV_R24     VIM_QUICK_LAST
#define VWNAV_R25     _______

#define VWNAV_R31     _______
#define VWNAV_R32     _______
#define VWNAV_R33     _______



/* Git
 * ,----------------------------------.  ,----------------------------------.
 * |LOGREL| GREP |      |      |      |  |MERGET|DIFFT |BROWSE|      |PKAXEC|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * | EDIT |EDITIT|STATUS|GMASTF|BLAME |  |HUNKU |HUNKN |HUNKP |      |PKAXE |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | DIFF |      |DIFFI |DIFFM |      |  |LOGREL|      |LOGCFS|LOGCF |LOGCFD|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define GIT_L01     VIM_LOG_RELEASE               // git log for a period of time
#define GIT_L02     VIM_GIT_GREP                  // [*] Grep in any branch
#define GIT_L03     _______
#define GIT_L04     _______
#define GIT_L05     _______

#define GIT_L11     VIM_EDIT_ANY                  // check any blob
#define GIT_L12     VIM_EDIT_INDEX_TOGGLE
#define GIT_L13     VIM_GIT_STATUS                // [*] git status of commit
#define GIT_L14     VIM_GIT_MASTER_FILE
#define GIT_L15     VIM_GIT_BLAME

#define GIT_L21     VIM_DIFF_ANY                  // diff file with somewhere else
#define GIT_L22     _______
#define GIT_L23     VIM_DIFF_INDEX
#define GIT_L24     VIM_DIFF_MASTER
#define GIT_L25     _______

#define GIT_L33     _______
#define GIT_L34     _______
#define GIT_L35     _______

// Right
#define GIT_R01     VIM_MERGETOOL                 // go through conflicts
#define GIT_R02     VIM_DIFFTOOL                  // go through all changes in commit (CR)
#define GIT_R03     VIM_BROWSE
#define GIT_R04     VIM_PICK_AXE_CURRENT_FILE
#define GIT_R05     _______

#define GIT_R11     VIM_HUNK_UNDO
#define GIT_R12     VIM_HUNK_NEXT
#define GIT_R13     VIM_HUNK_PREV
#define GIT_R14     _______
#define GIT_R15     VIM_PICK_AXE

#define GIT_R21     _______
#define GIT_R22     _______
#define GIT_R23     VIM_LOG_CURRENT_FILE_SELECTION
#define GIT_R24     VIM_LOG_CURRENT_FILE
#define GIT_R25     VIM_LOG_CURRENT_FILE_DETAILS

#define GIT_R31     _______
#define GIT_R32     _______
#define GIT_R33     _______



/* Chrome
 * Chrome: editor, navigation both browser and devtools
 * ,----------------------------------.  ,----------------------------------.
 * |SrchHi|Search|FindTb|FindFi|Bkmrks|  |Incog |NewTab|      |      |DelTab|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |RunCmd|LstTab|PrvPan|NxtPan|      |  |BRKPTS|PLYPAU|STPOVR|STPIN |STPOUT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |HrdRld| Rld  | Back | Fwd  |      |  | TabP |PgDown| PgUp | TabN | Eval |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |DevTls|      |  | Home | End  |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define CHROME_L01     LGUI(KC_Y)               // search history
#define CHROME_L02     LGUI(LALT(KC_F))         // [*] search (across loaded resources)
#define CHROME_L03     LSFT(LGUI(KC_A))         // [*] search tabs
#define CHROME_L04     LGUI(KC_O)               // [*] file search (add @ for methods or ! for snippets)
#define CHROME_L05     LALT(LGUI(KC_B))         // [*] bookmarks

#define CHROME_L11     LGUI(LSFT(KC_P))         // [*] run command
#define CHROME_L12     LGUI(LSFT(KC_T))         // [*] recents (actually last closed tab in this case)
#define CHROME_L13     LGUI(KC_LBRACKET)        // devtools prev pane
#define CHROME_L14     LGUI(KC_RBRACKET)        // devtools next pane
#define CHROME_L15     XXXXXXX

#define CHROME_L21     LGUI(LSFT(KC_R))         // hard reload
#define CHROME_L22     LGUI(KC_R)               // reload
#define CHROME_L23     LGUI(KC_LEFT)            // nav back
#define CHROME_L24     LGUI(KC_RIGHT)           // nav foward
#define CHROME_L25     XXXXXXX

#define CHROME_L33     XXXXXXX
#define CHROME_L34     LALT(LGUI(KC_I))         // [*] zoom concept
#define CHROME_L35     XXXXXXX

// Right
// This was for profiling ... could make a devtools layer
// #define CHROME_R00     KC_A
// #define CHROME_R01     KC_S
// #define CHROME_R02     KC_W
// #define CHROME_R03     KC_D
#define CHROME_R01     LGUI(LSFT(KC_N))
#define CHROME_R02     LGUI(KC_T)
#define CHROME_R03     XXXXXXX
#define CHROME_R04     XXXXXXX
#define CHROME_R05     LGUI(KC_W)

#define CHROME_R11     LGUI(KC_F8)              // [*] breakpoints (this one is toggle)
#define CHROME_R12     KC_F8                    // [*] debug play
#define CHROME_R13     LGUI(KC_QUOT)            // [*] debug over
#define CHROME_R14     LGUI(KC_SCLN)            // [*] debug in
#define CHROME_R15     LGUI(LSFT(KC_SCLN))      // [*] debug out

#define CHROME_R21     LCTL(LSFT(KC_TAB))
#define CHROME_R22     KC_PGDOWN
#define CHROME_R23     KC_PGUP
#define CHROME_R24     LCTL(KC_TAB)
#define CHROME_R25     LSFT(LGUI(KC_E))

#define CHROME_R31     KC_HOME
#define CHROME_R32     KC_END
#define CHROME_R33     XXXXXXX



/* IntelliJ-nav
 * Left side: Global Searching
 * Right side: Analysis, File based Searching
 * ,----------------------------------.  ,----------------------------------.
 * |NavBar|FindP |FindC |FindF |Marks |  |      | FnP  |FileHi|FindSy|      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |TMnMx |FindAc|Recent|GotoTe|Blame |  | Back | Decl | Impl | Fwd  |Usages|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |StrctV|DebugV|ProjV |      |  |      |NxtErr|PrvErr|      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |LastTl|MaxMin| Term |  |SupMC |CMMITS|LocalC|
 *               `--------------------'  `--------------------'
 */

// Left
#define INAV_L01     LALT(KC_HOME)                // Show navigation bar
#define INAV_L02     LSFT(LGUI(KC_F))             // [*] Search project
#define INAV_L03     LGUI(KC_O)                   // Go to class (could get this key back by just using "Go to file" then tabbing)
#define INAV_L04     LGUI(LSFT(KC_O))             // [*] Go to file
#define INAV_L05     LGUI(KC_F3)                  // [*] Marks

#define INAV_L11     LSFT(LGUI(KC_QUOT))          // Toggle tool min/max
#define INAV_L12     LSFT(LGUI(KC_A))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
#define INAV_L13     LGUI(KC_E)                   // [*] Recent files popup
#define INAV_L14     LSFT(LGUI(KC_T))             // [*] Go to test
#define INAV_L15     LALT(KC_Q)                   // [*] Blame (custom keymap)

#define INAV_L21     _______
#define INAV_L22     LGUI(KC_7)                   // [*] Project Structure View
#define INAV_L23     LGUI(KC_5)                   // Debug View
#define INAV_L24     LGUI(KC_1)                   // Project Files View
#define INAV_L25     _______

#define INAV_L33     KC_F12                       // Last Tool
#define INAV_L34     LGUI(LSFT(KC_F12))           // [*] Toggle maximizing editor
#define INAV_L35     LALT(KC_F12)                 // Terminal View

// Right
#define INAV_R01     _______
#define INAV_R02     LALT(KC_F1)                  // Select current file (or symbol) in any view
#define INAV_R03     LGUI(KC_F12)                 // File structure popup
#define INAV_R04     LALT(LGUI(KC_O))             // Go to symbol
#define INAV_R05     LGUI(LSFT(KC_DEL))           // Go to last edit location

#define INAV_R11     LGUI(LALT(KC_LEFT))          // Navigate back
#define INAV_R12     LGUI(KC_B)                   // Go to declaration
#define INAV_R13     LALT(LGUI(KC_B))             // Go to implementation
#define INAV_R14     LGUI(LALT(KC_RIGHT))         // Navigate forward
#define INAV_R15     LALT(KC_F7)                  // Find Usages

#define INAV_R21     _______
#define INAV_R22     KC_F2                        // Next highlighted error
#define INAV_R23     LSFT(KC_F2)                  // Previous highlighted error
#define INAV_R24     _______
#define INAV_R25     _______

#define INAV_R31     LGUI(KC_U)                   // Go to super-method/super-class
#define INAV_R32     LALT(KC_W)                   // [*] Commits (custom keymap) but doesn't work!
#define INAV_R33     LGUI(KC_9)                   // [*] Local changes



/* IntelliJ
 * ,----------------------------------.  ,----------------------------------.
 * | Sel+ |Rename|ChSig |ExtrtM|ExtrtV|  |Scrtch| New  | Copy | Move |Delete|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * | Sel- |Surnd |Commnt|Format|Suggst|  |BrkPts|PlyRes| Over |  In  |  Out |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |OverM |ImplM |GenCd |LiveT |ParamI|  |TogBrk| Eval |CmpFi |CmpPrj|CallHi|
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |StatCm|CodeCm|  |Debug |DebugL| RunL |
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     LALT(KC_UP)                  // Extend selection
#define IDEA_L02     LSFT(KC_F6)                  // Rename
#define IDEA_L03     LGUI(KC_F6)                  // Change signature
#define IDEA_L04     LGUI(LALT(KC_M))             // Extract method
#define IDEA_L05     LGUI(LALT(KC_V))             // Extract variable

#define IDEA_L11     LALT(KC_DOWN)                // Shrink selection
#define IDEA_L12     LALT(LGUI(KC_T))             // Surround with ... 
#define IDEA_L13     LGUI(KC_SLSH)                // [*] Comment/uncomment
#define IDEA_L14     LALT(LGUI(KC_L))             // [*] Format
#define IDEA_L15     LALT(KC_ENTER)               // Show intention actions and quick-fixes

#define IDEA_L21     LCTL(KC_O)                   // Override methods
#define IDEA_L22     LCTL(KC_I)                   // Implement methods
#define IDEA_L23     LGUI(KC_N)                   // Generate code
#define IDEA_L24     LGUI(KC_J)                   // [*] Insert live templates
#define IDEA_L25     LGUI(KC_P)                   // Get param infor

#define IDEA_L33     _______
#define IDEA_L34     LGUI(LSFT(KC_ENTER))         // [*] Statement complete
#define IDEA_L35     LCTL(LSFT(KC_SPC))           // [*] Code complet

// Right
#define IDEA_R01     LCTL(LGUI(KC_N))             // New scratch
#define IDEA_R02     LALT(KC_INS)                 // [*] New
#define IDEA_R03     KC_F5                        // [*] Copy
#define IDEA_R04     KC_F6                        // [*] Move
#define IDEA_R05     KC_DEL                       // [*] Delete

#define IDEA_R11     LGUI(LSFT(KC_F8))            // Breakpoints
#define IDEA_R12     LALT(LGUI(KC_R))             // [*] Play/Pause
#define IDEA_R13     KC_F8                        // [*] Step over
#define IDEA_R14     KC_F7                        // [*] Step into
#define IDEA_R15     LSFT(KC_F8)                  // [*] Step out

#define IDEA_R21     LGUI(KC_F8)                  // Toggle breakpoint
#define IDEA_R22     LALT(KC_F8)                  // Evaluate expression
#define IDEA_R23     LSFT(LGUI(KC_F9))            // Compile selected file
#define IDEA_R24     LGUI(KC_F9)                  // Make project 
#define IDEA_R25     LCTL(LALT(KC_H))             // Call hierarchy

#define IDEA_R31     LALT(LSFT(KC_D))             // Debug current target at top
#define IDEA_R32     LCTL(LSFT(KC_D))             // Debug context/cursor
#define IDEA_R33     LCTL(LSFT(KC_R))             // Run context/cursor



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
