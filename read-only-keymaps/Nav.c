/* Nav
 * Global: System, Tmux, App, etc, Navigation
 * Mixture of concepts (item, editor)
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |PrevAp|FINDSE|      |  |TWINP |TPANEN|TPANEP|TWINN |TKILLS|
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |CDGTRT| CD-  |GITDIR|TSZUP | Home |  | Left | Down |  Up  |Right |TDETCH|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |THSPLT|TVSPLT|TSCRLL|TSZDN | End  |  |WkspL |WordL |WordR |WkspR |      |
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |FlScrn|TZMTOG|Enter |  | Bspc |AltBk | Del  |
 *               `--------------------'  `--------------------'
 */

// Left
#define NAV_L01     TMUX_RELOAD_CONFIG                // reexecutes the conf file so things like delete won't be reflected
#define NAV_L02     _______
#define NAV_L03     LGUI(KC_TAB)                      // editor [*] prev app (follows position of prev file in vim editor)
#define NAV_L04     TMUX_FIND_SESSION                 // item [*] find tmux session
#define NAV_L05     _______

#define NAV_L11     CD_GIT_ROOT
#define NAV_L12     CD_PREV                           // easier cd -
#define NAV_L13     CD_GIT_DIR                        // git directory search
#define NAV_L14     TMUX_SIZE_UP
#define NAV_L15     KC_HOME

#define NAV_L21     TMUX_HSPLIT
#define NAV_L22     TMUX_VSPLIT
#define NAV_L23     TMUX_SCROLL
#define NAV_L24     TMUX_SIZE_DOWN
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



