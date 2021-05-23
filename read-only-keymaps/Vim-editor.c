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



