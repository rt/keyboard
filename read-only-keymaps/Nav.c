/* Nav
 * Global: System, Tmux, App, etc, Navigation
 * ,----------------------------------.  ,----------------------------------.
 * |VQUIT |VWRITE|VPRVFI|PrevAp|AppWin|  |TWINP |TPANEN|TPANEP|TWINN |TEVENV|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |      |      |TSCRLL| PgUp | Home |  | Left | Down |  Up  |Right |TEVENH|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |FlScrn|      |      |PgDown| End  |  |WkspL |WordL |WordR |WkspR |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |      |TZMTOG|Enter |  | Bspc |AltBk | Del  |
 *               `--------------------'  `--------------------'
 */

// Left
#define NAV_L01     VIM_QUIT                        // vim-editor?
#define NAV_L02     VIM_WRITE                       // vim-editor?
#define NAV_L03     LCTL(KC_CIRC)
#define NAV_L04     LGUI(KC_TAB)
#define NAV_L05     LGUI(KC_GRV)

#define NAV_L11     _______
#define NAV_L12     _______
#define NAV_L13     TMUX_SCROLL
#define NAV_L14     KC_PGUP
#define NAV_L15     KC_HOME

#define NAV_L21     LCTL(LGUI(KC_F))
#define NAV_L22     _______
#define NAV_L23     _______
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



