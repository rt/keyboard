/* Vim-editor
 * ,----------------------------------.  ,----------------------------------.
 * |VWALL |VWRITE|VPRVFI|VPASTE|      |  |PREVBR|      |      |NEXTBR| VQUIT|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |SELALL|      |      |      |      |  |PREVED|EX_BLW|EX_ABV|NEXTED|      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |VHSPLT|VVSPLT|      |      |DIFFTG|  |PREVER|SP_BLW|SP_ABV|NEXTER|      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |VWQUIT|      | SNIP |  |Compl |ComplX|      |
 *               `--------------------'  `--------------------'
 */

// Left
#define VHOME_L01     VIM_WRITE_ALL                   // [*] write quit editor
#define VHOME_L02     VIM_WRITE                       // [*] write
#define VHOME_L03     LCTL(KC_CIRC)                   // [*] prev file
#define VHOME_L04     VIM_PASTE_LAST_YANK             // [*] Paste last yank (instead of last selection)
#define VHOME_L05     _______

#define VHOME_L11     VIM_SELECT_ALL
#define VHOME_L12     _______
#define VHOME_L13     _______
#define VHOME_L14     _______
#define VHOME_L15     _______

#define VHOME_L21     VIM_HSPLIT                      // [*] hor split
#define VHOME_L22     VIM_VSPLIT                      // [*] vert split
#define VHOME_L23     _______
#define VHOME_L24     _______
#define VHOME_L25     VIM_DIFF_TOGGLE

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



