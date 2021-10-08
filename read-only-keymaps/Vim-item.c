/* Vim-item
 * ,----------------------------------.  ,----------------------------------.
 * |FINDND| FINDP|VPRVFI|GFILES| MARKS|  |      | New  | Copy | Move | Del  |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |COMNDS| Gundo| REC  | PROJV| FNP  |  | B-P  | DECL | IMPL | B-N  |TAGSEL|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |STYLE | TEMP |BACKC | TEST | DIGC |  | A-F  | A-N  | A-P  | A-L  |CTAGS |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               | HELP | ONLY |CDROOT|  |USAGEW|USAGEF|USAGCF|
 *               `--------------------'  `--------------------'
 */

// Left
#define VHNAV_L01     VIM_SEARCH_IN_DIR               // change dir to current file dir and search
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
#define VHNAV_L22     VIM_WORK_GET_TEMPLATE           // [*]
#define VHNAV_L23     VIM_WORK_GET_BACKING_FILE       // [*]
#define VHNAV_L24     VIM_GOTO_TEST                   // [*]
#define VHNAV_L25     VIM_WORK_GOTO_COMPONENT         // [*]

#define VHNAV_L33     VIM_HELP                        // [*]
#define VHNAV_L34     VIM_ONLY                        // [*]
#define VHNAV_L35     VIM_DIR_ROOT                    // change dir to project top

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
#define VHNAV_R25     VIM_CTAGS

#define VHNAV_R31     VIM_USAGES_CWORD                // [*] Search for cword in current scope
#define VHNAV_R32     VIM_USAGES_CFILE                // [*] Search for cfile in current scope
#define VHNAV_R33     VIM_GET_USAGES_BY_CURRENT_FILE  // [*] Search where current file usesd, adjusts depending on the extention.



