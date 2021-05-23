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



