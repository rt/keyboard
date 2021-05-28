#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

// Fillers to make layering more clear
//#define _______ KC_TRNS
#define XXXXXXX KC_NO

enum custom_layers {
  _COLE=0,        // Colemak-Dhm
  _QWERTY=1,      // IntelliJ-git
  _GIT=2,         // Vim-git
  _LOWER=3,       // Symbols
  _RAISE=4,       // F1-12, Vim extended navigation
  _NAV=5,         // Nav for apps, workspaces, general
  _VHOME=6,       // Vim-editor
  _VHNAV=7,       // Vim-item
  _OTHER=8,       // Devtools-item
  _VWNAV=9,       // Debug
  _INAV=10,       // IntelliJ-item
  _CHROME=11,     // Chrome-item
  _IDEA=12,       // IntelliJ-editor
  _SFT=13,        // Shift Layer
  _MISC=14,       // Misc: work places
  _ADJUST=15,     // Adjust
};

enum custom_keycodes {
  COLEMAKDH = SAFE_RANGE,
  QWERTY,
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
  TMUX_SIZE_UP,
  TMUX_SIZE_DOWN,
  TMUX_HSPLIT,
  TMUX_VSPLIT,
  TMUX_KILL_SESSION,
  TMUX_DETACH,
  TMUX_FIND_SESSION,

  VIM_SHOW_MY_SNIPPETS, 
  VIM_HUNK_UNDO,
  VIM_HUNK_NEXT,
  VIM_HUNK_PREV,
  VIM_BROWSE,
  VIM_HELP,
  VIM_QUIT,
  VIM_WRITE,
  VIM_WRITE_ALL,
  VIM_WRITE_QUIT,
  VIM_SELECT_ALL,
  VIM_VSPLIT,
  VIM_HSPLIT,
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
  VIM_TAGBAR_OPEN_AUTOCLOSE,
  VIM_BLINES,
  VIM_FIND_INPATH,
  VIM_FIND_GFILE,
  VIM_MARKS,
  VIM_COMMANDS,
  VIM_FILES_RECENT,
  VIM_VIEW_PROJ,
  VIM_FILE_INPROJ,
  VIM_EXCHANGE_LINE_ABOVE,
  VIM_EXCHANGE_LINE_BELOW,
  VIM_INSERT_SPACE_ABOVE,
  VIM_INSERT_SPACE_BELOW,
  VIM_INTELLIJ_INSERT_SPACE_ABOVE,
  VIM_INTELLIJ_INSERT_SPACE_BELOW,
  VIM_ALE_PREV,
  VIM_ALE_NEXT,
	VIM_QUICK_FIRST,
	VIM_QUICK_NEXT,
	VIM_QUICK_PREV,
	VIM_QUICK_LAST,
  VIM_DISPATCH_NPM,
  VIM_SHOW_QUICK_REF,
  VIM_SHOW_KEYMAPS,
  VIM_ONLY,
  VIM_GUNDO,
  VIM_SNIPPETS,
  VIM_NERD_NEW,
  VIM_NERD_COPY,
  VIM_NERD_MOVE,
  VIM_NERD_DEL,
  VIM_ULTISNIPS_TRIGGER,
  VIM_PREV_EDIT,
  VIM_NEXT_EDIT,
  VIM_PREV_BRACKET,
  VIM_NEXT_BRACKET,
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


/* Concept-item
 * Layers: Vim-item, IntelliJ-item, Chrome-item, Devtools-item
 * Things beyond base will have to use app specific cuts/leaders
 * ,----------------------------------.  ,----------------------------------.
 * |  AN  |  SS  |  AS  |  FI  |  BM  |  |  NS  |  NI  |  CI  |  MI  |  DI  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |  AC  |  HI  |  RI  |  PS  | FnP  |  |  PI  | Decl | Impl |  NI  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | AF1  | AF2  | AF3  | AF4  | AF5  |  |  PT  |      |      |  NT  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | Help |  CL  |      |  |  U1  |  U2  |  U3  |
 *               `--------------------'  `--------------------'
 */

// Left
// L01     Alternate Navigation (ie Navigation Bar)
// L02     Search for sub-item from all
// L03     Altenate search for sub-item from current item/panel, etc
// L04     Find item
// L05     Bookmarks
//
// L11     Action/Commands
// L12     History
// L13     Recent items
// L14     Project Structure
// L15     Find In Project
//
// L21     Goto Alternate File 1
// L22     Goto Alternate File 2
// L23     Goto Alternate File 3
// L24     Goto Alternate File 4 (Test)
// L25     Goto Alternate File 5
//
// L33     Help
// L34     Clear
// L35     _______

// Right
// R01     New scratch
// R02     New item
// R03     Copy item
// R04     Move item
// R05     Delete item
//
// R11     Prev item
// R12     Declaration
// R13     Implementation
// R14     Next item
// R15     _______
//
// R21     Nav prev
// R22     _______
// R23     _______
// R24     Nav next
// R25     _______
//
// R31     Usages 1
// R32     Usages 2
// R33     Usages 3



/* Concept-editor
 * Layers: Vim-editor, IntelliJ-editor
 * Most edtiing is in vim or with a vim plugin so will often use Vim-editor keymaps or vim itself.
 * ,----------------------------------.  ,----------------------------------.
 * |  WA  |  WR  |  PF  | IE1  | IE2  |  |  PB  |      |      |  NB  |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |  SA  |      |      |      |      |  |  PE  |  LD  |  LU  |  NE  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |  HS  |  VS  |      | PLY  |      |  | PEr  |  SD  |  SU  | NEr  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |  G3  |  G2  |  G1  |  |  C1  |  C2  |  C3  |
 *               `--------------------'  `--------------------'
 */

// Left
// L01     Write all
// L02     Write
// L03     Previous File
// L04     Paste Last Yank
// L05     _______
//
// L11     Select all
// L12     _______
// L13     _______
// L14     _______
// L15     _______
//
// L21     _______
// L22     _______
// L23     _______
// L24     _______
// L25     _______
//
// L33     Generation Code 3
// L34     Generation Code 2
// L35     Generation Code 1

// Right
// R01     Previous Bracket
// R02     Item Explorer 2
// R03     Item Explorer 1 (Tagbar, BTags, BLines)
// R04     Next Bracket
// R05     _______
//
// R11     Prev edit
// R12     Move line down
// R13     Move line up
// R14     Next edit
// R15     _______
//
// R21     Prev error
// R22     Open line space down
// R23     Open line space up
// R24     Next error
// R25     _______
//
// R31     Completion 1
// R32     Completion 2
// R33     Completion 3



/* Concept-git
 * Layers: Vim-git, IntelliJ-git
 * Things beyond base will have to use app specific cuts/leaders
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      |  B   |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
// L01     _______
// L02     _______
// L03     _______
// L04     _______
// L05     _______
//
// L11     _______
// L12     _______
// L13     _______
// L14     _______
// L15     Blame
//
// L21     _______
// L22     _______
// L23     _______
// L24     _______
// L25     _______
//
// L33     _______
// L34     _______
// L35     _______

// Right
// R01     _______
// R02     _______
// R03     _______
// R04     _______
// R05     _______
//
// R11     _______
// R12     _______
// R13     _______
// R14     _______
// R15     _______
//
// R21     _______
// R22     _______
// R23     _______
// R24     _______
// R25     _______
//
// R31     _______
// R32     _______
// R33     _______



/* Concept-debug
 * Layers: IntelliJ, Devtools
 * Debug is a special mode with a limited set of function. This could be done on one line for each env.
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      | // Browser
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |Debug |      |      | Eval | TgBP |  |  BP  | Play | Over |  In  | Out  | // IntelliJ
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      | // Vim
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
// L01
// L02
// L03
// L04
// L05
//
// L11     Action/Commands
// L12     History
// L13     Recent items
// L14     Project Structure
// L15     Find In Project
//
// L21
// L22
// L23
// L24
// L25
//
// L33
// L34
// L35

// Right
// R01
// R02
// R03
// R04
// R05
//
// R11     Prev item
// R12     Declaration
// R13     Implementation
// R14     Next item
// R15     _______
//
// R21
// R22
// R23
// R24
// R25
//
// R31
// R32
// R33



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
 * |QkRef |KEYMPS|MYSNIP|WORK  |      |  |CDROOT| CDCF |      |      |       |
 * |------+------+------+------+-------  -------+------+------+------+-------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  |      |      |      |      |       |
 * |------+------+------+------+------|  |------+------+------+------+-------|
 * |  F6  |  F7  |  F8  |  F9  |  F10 |  |      |      |      |      |       | 
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      | Tab  |GuiBk |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define RAIS_L01     VIM_SHOW_QUICK_REF
#define RAIS_L02     VIM_SHOW_KEYMAPS
#define RAIS_L03     VIM_SHOW_MY_SNIPPETS
#define RAIS_L04     VIM_WORK_SHOW_NOTES
#define RAIS_L05     XXXXXXX

#define RAIS_L11     KC_F1
#define RAIS_L12     KC_F2
#define RAIS_L13     KC_F3
#define RAIS_L14     KC_F4
#define RAIS_L15     KC_F5

#define RAIS_L21     KC_F6
#define RAIS_L22     KC_F7
#define RAIS_L23     KC_F8
#define RAIS_L24     KC_F9
#define RAIS_L25     KC_F10

#define RAIS_L33     XXXXXXX
#define RAIS_L34     KC_TAB
#define RAIS_L35     LGUI(KC_BSPC)

// Right
#define RAIS_R01     VIM_DIR_ROOT                    // change dir to project top (this more properly would be tab left)
#define RAIS_R02     VIM_DIR_CURRENT_FILE            // change dir to current file dir (this more properly would be tab right)
#define RAIS_R03     _______
#define RAIS_R04     _______
#define RAIS_R05     _______
                                    
#define RAIS_R11     _______
#define RAIS_R12     _______
#define RAIS_R13     _______
#define RAIS_R14     _______
#define RAIS_R15     KC_F11
                                    
#define RAIS_R21     _______
#define RAIS_R22     _______
#define RAIS_R23     _______
#define RAIS_R24     _______
#define RAIS_R25     KC_F12

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
 * Mixture of concepts (item, editor)
 * ,----------------------------------.  ,----------------------------------.
 * |THSPLT|TVSPLT|PrevAp|FINDSE|      |  |TWINP |TPANEN|TPANEP|TWINN |TKILLS|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |TSZDN |TSZUP |TSCRLL| PgUp | Home |  | Left | Down |  Up  |Right |TDETCH|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |TEVENH|TEVENV|AppWin|PgDown| End  |  |WkspL |WordL |WordR |WkspR |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |FlScrn|TZMTOG|Enter |  | Bspc |AltBk | Del  |
 *               `--------------------'  `--------------------'
 */

// Left
#define NAV_L01     TMUX_HSPLIT
#define NAV_L02     TMUX_VSPLIT
#define NAV_L03     LGUI(KC_TAB)                      // editor [*] prev app (follows position of prev file in vim editor)
#define NAV_L04     TMUX_FIND_SESSION                 // item [*] find tmux session
#define NAV_L05     _______

#define NAV_L11     TMUX_SIZE_DOWN
#define NAV_L12     TMUX_SIZE_UP
#define NAV_L13     TMUX_SCROLL
#define NAV_L14     KC_PGUP
#define NAV_L15     KC_HOME

#define NAV_L21     TMUX_EVEN_HOR
#define NAV_L22     TMUX_EVEN_VERT
#define NAV_L23     LGUI(KC_GRV)                      // alternate win of same app
#define NAV_L24     KC_PGDOWN
#define NAV_L25     KC_END

#define NAV_L33     LCTL(LGUI(KC_F))
#define NAV_L34     TMUX_ZOOM_TOGGLE                  // item [*]
#define NAV_L35     KC_ENTER

// Right
#define NAV_R01     TMUX_WIN_PREV                     // 
#define NAV_R02     TMUX_PANE_NEXT
#define NAV_R03     TMUX_PANE_PREV
#define NAV_R04     TMUX_WIN_NEXT
#define NAV_R05     TMUX_KILL_SESSION                 // editor [*] kill tmux session

#define NAV_R11     KC_LEFT
#define NAV_R12     KC_DOWN
#define NAV_R13     KC_UP
#define NAV_R14     KC_RIGHT
#define NAV_R15     TMUX_DETACH

#define NAV_R21     LCTL(KC_LEFT)                     // item [*]
#define NAV_R22     LALT(KC_LEFT)                     // item [*]
#define NAV_R23     LALT(KC_RIGHT)                    // item [*]
#define NAV_R24     LCTL(KC_RIGHT)                    // item [*]
#define NAV_R25     _______

#define NAV_R31     KC_BSPC
#define NAV_R32     LALT(KC_BSPC)
#define NAV_R33     KC_DEL



/* Vim-item
 * ,----------------------------------.  ,----------------------------------.
 * |  ?   | FINDP|VPRVFI|GFILES| MARKS|  |      | New  | Copy | Move | Del  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |COMNDS| Gundo| REC  | PROJV| FNP  |  | B-P  | DECL | IMPL | B-N  |TAGSEL|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |STYLE | DIGC |BACKC | TEST | TEMP |  | A-F  | A-N  | A-P  | A-L  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | HELP | ONLY |      |  |USAGEW|USAGEF|USAGCF|
 *               `--------------------'  `--------------------'
 */

// Left
#define VHNAV_L01     VIM_GET_IMPL_CURSOR_WORD        // Find files named like cword (double check what this does ???)
#define VHNAV_L02     VIM_FIND_INPATH                 // [*] Find <keyword> in current directory
#define VHNAV_L03     LCTL(KC_CIRC)                   // [*] prev file
#define VHNAV_L04     VIM_FIND_GFILE                  // [*] Find file in git 
#define VHNAV_L05     VIM_MARKS                       // [*]

#define VHNAV_L11     VIM_COMMANDS                    // [*]
#define VHNAV_L12     VIM_GUNDO                       // [*] local changes
#define VHNAV_L13     VIM_FILES_RECENT                // [*]
#define VHNAV_L14     VIM_VIEW_PROJ                   // [*]
#define VHNAV_L15     VIM_FILE_INPROJ                 // [*] select current file in tree

#define VHNAV_L21     VIM_GET_STYLE_FILE              // [*]
#define VHNAV_L22     VIM_WORK_GOTO_COMPONENT         // [*]
#define VHNAV_L23     VIM_WORK_GET_BACKING_FILE       // [*]
#define VHNAV_L24     VIM_GOTO_TEST                   // [*]
#define VHNAV_L25     VIM_WORK_GET_TEMPLATE           // [*]

#define VHNAV_L33     VIM_HELP                        // [*]
#define VHNAV_L34     VIM_ONLY                        // [*]
#define VHNAV_L35     XXXXXXX

// Right
#define VHNAV_R01     XXXXXXX
#define VHNAV_R02     VIM_NERD_NEW                    // [*]
#define VHNAV_R03     VIM_NERD_COPY                   // [*]
#define VHNAV_R04     VIM_NERD_MOVE                   // [*]
#define VHNAV_R05     VIM_NERD_DEL                    // [*]

#define VHNAV_R11     VIM_BUFFER_PREV                 // [*] Prev buffer
#define VHNAV_R12     VIM_CTAGS_DECL                  // [*] Go to declaration
#define VHNAV_R13     VIM_GET_IMPL                    // [*] Find files named like current file (java)
#define VHNAV_R14     VIM_BUFFER_NEXT                 // [*] Next buffer
#define VHNAV_R15     VIM_CTAGS_SEL                   // [*] Pick selection when multiple options

#define VHNAV_R21     VIM_ARGS_FIRST
#define VHNAV_R22     VIM_ARGS_NEXT
#define VHNAV_R23     VIM_ARGS_PREV
#define VHNAV_R24     VIM_ARGS_LAST
#define VHNAV_R25     _______

#define VHNAV_R31     VIM_USAGES_CWORD                // [*] Search for cword in current scope
#define VHNAV_R32     VIM_USAGES_CFILE                // [*] Search for cfile in current scope
#define VHNAV_R33     VIM_GET_USAGES_BY_CURRENT_FILE  // [*] Search where current file usesd, adjusts depending on the extention.



/* Vim-editor
 * ,----------------------------------.  ,----------------------------------.
 * |VWALL |VWRITE|      |BLINES| TAGB |  |PREVBR|      |      |NEXTBR| VQUIT|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |SELALL|      |      |      |      |  |PREVED|EX_BLW|EX_ABV|NEXTED|      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |VHSPLT|VVSPLT|      |VPASTE|      |  |PREVER|SP_BLW|SP_ABV|NEXTER|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |VWQUIT|      | SNIP |  |Compl |ComplX|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VHOME_L01     VIM_WRITE_ALL                   // [*] write quit editor
#define VHOME_L02     VIM_WRITE                       // [*] write
#define VHOME_L03     _______
#define VHOME_L04     VIM_BLINES                      // [*] search buffer lines
#define VHOME_L05     VIM_TAGBAR_OPEN_AUTOCLOSE       // [*] tags for file, good for large files

#define VHOME_L11     VIM_SELECT_ALL                  // [*]
#define VHOME_L12     _______
#define VHOME_L13     _______
#define VHOME_L14     _______
#define VHOME_L15     _______

#define VHOME_L21     VIM_HSPLIT                      // [*] hor split
#define VHOME_L22     VIM_VSPLIT                      // [*] vert split
#define VHOME_L23     _______
#define VHOME_L24     VIM_PASTE_LAST_YANK             // [*] Paste last yank (instead of last selection)
#define VHOME_L25     _______

#define VHOME_L33     VIM_WRITE_QUIT                  // write quit editor
#define VHOME_L34     _______
#define VHOME_L35     VIM_SNIPPETS                    // [*] snipplets

// Right
#define VHOME_R01     VIM_PREV_BRACKET
#define VHOME_R02     _______
#define VHOME_R03     _______
#define VHOME_R04     VIM_NEXT_BRACKET
#define VHOME_R05     VIM_QUIT                        // [*] quit editor

#define VHOME_R11     VIM_PREV_EDIT                   // [*] prev edit
#define VHOME_R12     VIM_EXCHANGE_LINE_BELOW         // [*]
#define VHOME_R13     VIM_EXCHANGE_LINE_ABOVE         // [*]
#define VHOME_R14     VIM_NEXT_EDIT                   // [*] next edit
#define VHOME_R15     _______

#define VHOME_R21     VIM_ALE_PREV                    // [*] prev error
#define VHOME_R22     VIM_INSERT_SPACE_BELOW          // [*]
#define VHOME_R23     VIM_INSERT_SPACE_ABOVE          // [*]
#define VHOME_R24     VIM_ALE_NEXT                    // [*] next error
#define VHOME_R25     _______

#define VHOME_R31     LCTL(KC_N)                      // [*] word complete
#define VHOME_R32     LCTL(KC_X)                      // [*] Advanced completion (Ctl-L, query db, ets.)
#define VHOME_R33     _______



/* Vim-git
 * ,----------------------------------.  ,----------------------------------.
 * |LOGREL| GREP |MERGET|CMMITS|DIFFT |  |      |      |      |      |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * | EDIT |LOGCF |STATUS|GMASTF|BLAME |  |HUNKU |HUNKN |HUNKP |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | DIFF |LOGCFD|DIFFI |DIFFM |DIFFTG|  | Q-F  | Q-N  | Q-P  | Q-L  |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |BROWSE|      |      |  |PKAXE |PKAXEC|LOGCFS|
 *               `--------------------'  `--------------------'
 */

// Left
#define GIT_L01     VIM_LOG_RELEASE                 // git log for a period of time
#define GIT_L02     VIM_GIT_GREP                    // [*] Grep in any branch
#define GIT_L03     VIM_MERGETOOL                   // go through conflicts
#define GIT_L04     VIM_GIT_COMMITS                 // [*] view recent (all) commits
#define GIT_L05     VIM_DIFFTOOL                    // go through all changes in commit (CR)

#define GIT_L11     VIM_EDIT_ANY                    // check any blob
#define GIT_L12     VIM_LOG_CURRENT_FILE            // [*] list of commits that touched current file
#define GIT_L13     VIM_GIT_STATUS                  // [*] git status of commit
#define GIT_L14     VIM_GIT_MASTER_FILE
#define GIT_L15     VIM_GIT_BLAME

#define GIT_L21     VIM_DIFF_ANY                    // diff file with somewhere else
#define GIT_L22     VIM_LOG_CURRENT_FILE_DETAILS    // [*] list of history of this file
#define GIT_L23     VIM_DIFF_INDEX
#define GIT_L24     VIM_DIFF_MASTER
#define GIT_L25     VIM_DIFF_TOGGLE

#define GIT_L33     VIM_BROWSE
#define GIT_L34     _______
#define GIT_L35     _______

// Right
#define GIT_R01     _______
#define GIT_R02     _______
#define GIT_R03     _______
#define GIT_R04     _______
#define GIT_R05     _______

#define GIT_R11     VIM_HUNK_UNDO
#define GIT_R12     VIM_HUNK_NEXT
#define GIT_R13     VIM_HUNK_PREV
#define GIT_R14     _______
#define GIT_R15     _______

#define GIT_R21     VIM_QUICK_FIRST
#define GIT_R22     VIM_QUICK_NEXT
#define GIT_R23     VIM_QUICK_PREV
#define GIT_R24     VIM_QUICK_LAST
#define GIT_R25     _______

#define GIT_R31     VIM_PICK_AXE                    // [*] list of commits that introduced symbol
#define GIT_R32     VIM_PICK_AXE_CURRENT_FILE       // [*] list of commits that introduced symbol to this file
#define GIT_R33     VIM_LOG_CURRENT_FILE_SELECTION  // [*] list of this file that touch the selected area



/* IntelliJ-item
 * ,----------------------------------.  ,----------------------------------.
 * |NavBar|FindP |VPRVFI|FindF |Marks |  |Scrtch| New  | Copy | Move |Delete|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |FindAc|LocalC|Recent|ProjV | FnP  |  | Back | Decl | Impl | Fwd  |SupMC |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |TMnMx |StrctV|DebugV|GotoTe|      |  |      |      |      |      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |LastTl|MaxMin| Term |  |Usages|CallHi|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define INAV_L01     LALT(KC_HOME)                // Show navigation bar
#define INAV_L02     LSFT(LGUI(KC_F))             // [*] Search project
#define INAV_L03     LCTL(KC_CIRC)                  // [*] prev file
#define INAV_L04     LGUI(LSFT(KC_O))             // [*] Go to file
#define INAV_L05     LGUI(KC_F3)                  // [*] Marks

#define INAV_L11     LSFT(LGUI(KC_A))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
#define INAV_L12     LGUI(KC_9)                   // [*] Local changes
#define INAV_L13     LGUI(KC_E)                   // [*] Recent files popup
#define INAV_L14     LGUI(KC_1)                   // [*] Project Files View
#define INAV_L15     LALT(KC_F1)                  // [*] Select current file (or symbol) in any view

#define INAV_L21     LSFT(LGUI(KC_QUOT))          // Toggle tool min/max
#define INAV_L22     LGUI(KC_7)                   // Project Structure View
#define INAV_L23     LGUI(KC_5)                   // Debug View
#define INAV_L24     LSFT(LGUI(KC_T))             // [*] Go to test
#define INAV_L25     _______

#define INAV_L33     KC_F12                       // Last Tool
#define INAV_L34     LGUI(LSFT(KC_F12))           // [*] Toggle maximizing editor
#define INAV_L35     LALT(KC_F12)                 // Terminal View

// Right
#define INAV_R01     LSFT(LGUI(KC_N))             // New scratch
#define INAV_R02     LALT(KC_INS)                 // [*] New
#define INAV_R03     KC_F5                        // [*] Copy
#define INAV_R04     KC_F6                        // [*] Move
#define INAV_R05     KC_DEL                       // [*] Delete

#define INAV_R11     LGUI(LALT(KC_LEFT))          // [*] Navigate back
#define INAV_R12     LGUI(KC_B)                   // [*] Go to declaration
#define INAV_R13     LALT(LGUI(KC_B))             // [*] Go to implementation
#define INAV_R14     LGUI(LALT(KC_RIGHT))         // [*] Navigate forward
#define INAV_R15     LGUI(KC_U)                   // Go to super-method/super-class

#define INAV_R21     _______
#define INAV_R22     _______
#define INAV_R23     _______
#define INAV_R24     _______
#define INAV_R25     _______

#define INAV_R31     LALT(KC_F7)                  // [*] Find Usages
#define INAV_R32     LCTL(LALT(KC_H))             // [*] Call hierarchy (usage analysis)
#define INAV_R33     _______



/* IntelliJ-editor
 * IdeaVim is used so many vim key cuts can also be used without having them here
 * IdeaVim plugin emulation (surround, exchange, commentary) : Use vim shortcuts
 * ,----------------------------------.  ,----------------------------------.
 * |VWALL |VWRITE|      |ImplM |FileHi|  | Sel- |      |      | Sel+ |VQUIT |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |  SA  |Rename|ChSig |ExtrtM|ExtrtV|  |PrvEdt|  LD  |  LU  |NxtEdt|CmpPrj|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |VHSPLT|VVSPLT|OverM |VPASTE|ParamI|  |PrvErr|  SD  |  SU  |NxtErr|CmpFi |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |GenCd |LiveT |  |CodeCm|StatCm|Suggst|
 *               `--------------------'  `--------------------'
 */

// Left
#define IDEA_L01     VIM_WRITE_ALL                  // [*] write quit editor
#define IDEA_L02     VIM_WRITE                      // [*] write
#define IDEA_L03     _______
#define IDEA_L04     LCTL(KC_I)                     // Implement methods
#define IDEA_L05     LGUI(KC_F12)                   // [*] File structure popup

#define IDEA_L11     LGUI(KC_A)                     // [*] select all
#define IDEA_L12     LSFT(KC_F6)                    // Rename
#define IDEA_L13     LGUI(KC_F6)                    // Change signature
#define IDEA_L14     LGUI(LALT(KC_M))               // Extract method
#define IDEA_L15     LGUI(LALT(KC_V))               // Extract variable

#define IDEA_L21     VIM_HSPLIT                     // [*] hor split
#define IDEA_L22     VIM_VSPLIT                     // [*] vert split
#define IDEA_L23     LCTL(KC_O)                     // Override methods
#define IDEA_L24     VIM_PASTE_LAST_YANK            // [*] Paste last yank (instead of last selection)
#define IDEA_L25     LGUI(KC_P)                     // Get param infor

#define IDEA_L33     _______
#define IDEA_L34     LGUI(KC_N)                     // Generate code
#define IDEA_L35     LGUI(KC_J)                     // [*] Insert live templates

// Right
#define IDEA_R01     LALT(KC_DOWN)                  // Shrink selection (similar idea to editor but uses selection)
#define IDEA_R02     _______
#define IDEA_R03     _______
#define IDEA_R04     LALT(KC_UP)                    // Extend selection (similar idea to editor but uses selection)
#define IDEA_R05     VIM_QUIT                       // [*]

#define IDEA_R11     LGUI(LSFT(KC_DEL))             // [*] prev edit location
#define IDEA_R12     LALT(LSFT(KC_DOWN))            // [*] Move line down
#define IDEA_R13     LALT(LSFT(KC_UP))              // [*] Move line up
#define IDEA_R14     LALT(KC_SCLN)                  // [*] Next edit (custom keymap)
#define IDEA_R15     LGUI(KC_F9)                    // Make project

#define IDEA_R21     LSFT(KC_F2)                    // [*] Previous highlighted error
#define IDEA_R22     VIM_INTELLIJ_INSERT_SPACE_BELOW// [*]
#define IDEA_R23     VIM_INTELLIJ_INSERT_SPACE_ABOVE// [*]
#define IDEA_R24     KC_F2                          // [*] Next highlighted error
#define IDEA_R25     LSFT(LGUI(KC_F9))              // Compile selected file

#define IDEA_R31     LCTL(LSFT(KC_SPC))             // [*] Code complet
#define IDEA_R32     LGUI(LSFT(KC_ENTER))           // [*] Statement complete
#define IDEA_R33     LALT(KC_ENTER)                 // [*] Show intention actions and quick-fixes



/* Intellij-git
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |CMMITS|      |  |      |      |      |      |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |      |      | Blame|  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | _ADJ |      |      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define QWER_L01     _______
#define QWER_L02     _______
#define QWER_L03     _______
#define QWER_L04     LALT(KC_W)                   // [*] Commits (custom keymap) but doesn't work!
#define QWER_L05     _______

#define QWER_L11     _______
#define QWER_L12     _______
#define QWER_L13     _______
#define QWER_L14     _______
#define QWER_L15     LALT(KC_Q)                   // [*] Blame (custom keymap)

#define QWER_L21     _______
#define QWER_L22     _______
#define QWER_L23     _______
#define QWER_L24     _______
#define QWER_L25     _______

#define QWER_L33     OSL(_ADJUST)                 // you'll might need this until all your keyboards are updated (this was QWERTY)
#define QWER_L34     _______
#define QWER_L35     _______

// Right
#define QWER_R01     _______
#define QWER_R02     _______
#define QWER_R03     _______
#define QWER_R04     _______
#define QWER_R05     _______

#define QWER_R11     _______
#define QWER_R12     _______
#define QWER_R13     _______
#define QWER_R14     _______
#define QWER_R15     _______

#define QWER_R21     _______
#define QWER_R22     _______
#define QWER_R23     _______
#define QWER_R24     _______
#define QWER_R25     _______

#define QWER_R31     _______
#define QWER_R32     _______
#define QWER_R33     _______



/* Chrome-item
 * ,----------------------------------.  ,----------------------------------.
 * |      |Search|      |FindTb|Bkmrks|  |Incog |NewTab|      |      |DelTab|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      | Hist |Recent|      |      |  | Back |PgDown| PgUp | Fwd  |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  | TabP |Vimium|      | TabN |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |DevTls|HrdRld|  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define CHROME_L01     XXXXXXX
#define CHROME_L02     LGUI(LALT(KC_F))         // [*] google search
#define CHROME_L03     XXXXXXX
#define CHROME_L04     LSFT(LGUI(KC_A))         // [*] search tabs
#define CHROME_L05     LALT(LGUI(KC_B))         // [*] bookmarks

#define CHROME_L11     XXXXXXX
#define CHROME_L12     LGUI(KC_Y)               // [*] search history
#define CHROME_L13     LGUI(LSFT(KC_T))         // [*] recents (actually last closed tab in this case)
#define CHROME_L14     XXXXXXX
#define CHROME_L15     XXXXXXX

#define CHROME_L21     XXXXXXX
#define CHROME_L22     XXXXXXX
#define CHROME_L23     XXXXXXX
#define CHROME_L24     XXXXXXX
#define CHROME_L25     XXXXXXX

#define CHROME_L33     XXXXXXX
#define CHROME_L34     LALT(LGUI(KC_I))         // [*] not only but rather open devtools ...
#define CHROME_L35     LGUI(LSFT(KC_R))         // [x] hard reload

// Right
#define CHROME_R01     LGUI(LSFT(KC_N))
#define CHROME_R02     LGUI(KC_T)
#define CHROME_R03     XXXXXXX
#define CHROME_R04     XXXXXXX
#define CHROME_R05     LGUI(KC_W)

#define CHROME_R11     LGUI(KC_LEFT)            // [*] nav back
#define CHROME_R12     KC_PGDOWN                // [o] page down (no goto declaration)
#define CHROME_R13     KC_PGUP                  // [o] page up (no goto impl)
#define CHROME_R14     LGUI(KC_RIGHT)           // [*] nav foward
#define CHROME_R15     XXXXXXX

#define CHROME_R21     LCTL(LSFT(KC_TAB))       // [*] prev tab
#define CHROME_R22     KC_F                     // [*] vimium
#define CHROME_R23     XXXXXXX
#define CHROME_R24     LCTL(KC_TAB)             // [*] next tab
#define CHROME_R25     XXXXXXX

#define CHROME_R31     XXXXXXX
#define CHROME_R32     XXXXXXX
#define CHROME_R33     XXXXXXX



/* Chrome-devtools
 * ,----------------------------------.  ,----------------------------------.
 * |      |SeaAll|SeaPan|FindFi|      |  |      |      |      |      |      |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |RunCmd|      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |PrvPan|      |      |NxtPan|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |TogDev|      |  |      |      |      |
 *               `--------------------'  `--------------------'
 */

// Left
#define OTHER_L01     _______
#define OTHER_L02     LGUI(LALT(KC_F))          // [*] search in all panel
#define OTHER_L03     LGUI(KC_F)                // [*] search in panel
#define OTHER_L04     LGUI(KC_O)                // [*] file search (add @ for methods or ! for snippets)
#define OTHER_L05     _______

#define OTHER_L11     LGUI(LSFT(KC_P))          // [*] run command
#define OTHER_L12     _______
#define OTHER_L13     _______
#define OTHER_L14     _______
#define OTHER_L15     XXXXXXX

#define OTHER_L21     _______
#define OTHER_L22     _______
#define OTHER_L23     _______
#define OTHER_L24     _______
#define OTHER_L25     _______

#define OTHER_L33     _______
#define OTHER_L34     LGUI(LSFT(KC_M))          // [o] toggle device
#define OTHER_L35     _______

// Right
#define OTHER_R01     KC_A                      // profiling
#define OTHER_R02     KC_S
#define OTHER_R03     KC_W
#define OTHER_R04     KC_D
#define OTHER_R05     _______

#define OTHER_R11     _______
#define OTHER_R12     _______
#define OTHER_R13     _______
#define OTHER_R14     _______
#define OTHER_R15     _______

#define OTHER_R21     LGUI(KC_LBRACKET)         // [*] devtools prev pane
#define OTHER_R22     _______
#define OTHER_R23     _______
#define OTHER_R24     LGUI(KC_RBRACKET)         // [*] devtools next pane
#define OTHER_R25     _______

#define OTHER_R31     _______
#define OTHER_R32     _______
#define OTHER_R33     _______



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
