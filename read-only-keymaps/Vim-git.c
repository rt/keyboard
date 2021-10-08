/* Vim-git
 * ,----------------------------------.  ,----------------------------------.
 * |BROWSE| GREP |GEDIT |CMMITS|      |  |TBHUNK|HUNKN |HUNKP |MBHUNK|HUNKU |
 * |------+------+------+------+-------  -------+------+------+------+------|
 * |LOGCFD|LOGCFS|STATUS|      |BLAME |  |      |NEXTDF|PREVDF|      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |DIFFI |DIFFIT|DIFFA |  | Q-F  | Q-N  | Q-P  | Q-L  |DIFFT | DiffTool and QuickFix navigation
 * `------+------+------+------+------+  +------+------+------+------+------'
 *               |GPUSH |COMMIT|GFETCH|  |      |PKAXE |PKAXEC|
 *               `--------------------'  `--------------------'
 */

// Left
#define GIT_L01     VIM_GIT_BROWSE									// browse selected are online
#define GIT_L02     VIM_GIT_GREP                    // [*] Grep in any branch
#define GIT_L03     VIM_EDIT_ANY                    // check any blob
#define GIT_L04     VIM_GIT_COMMITS                 // [*] view recent (all) commits
#define GIT_L05     _______

#define GIT_L11     VIM_LOG_CURRENT_FILE_DETAILS    // [*] list of history of this file
#define GIT_L12     VIM_LOG_CURRENT_FILE_SELECTION  // [*] list of this file that touch the selected area
#define GIT_L13     VIM_GIT_STATUS                  // [*] git status of commit
#define GIT_L14     _______
#define GIT_L15     VIM_GIT_BLAME

#define GIT_L21     _______
#define GIT_L22     _______
#define GIT_L23     VIM_DIFF_INDEX									// diff current file with index
#define GIT_L24     VIM_DIFF_IT                     // "dv" from status to show diff
#define GIT_L25     VIM_DIFF_ANY                    // diff with branch

#define GIT_L33     VIM_GIT_PUSH										// [*] git push
#define GIT_L34     VIM_GIT_COMMIT                  // [*] git commit
#define GIT_L35     VIM_GIT_FETCH                   // [*] git fetch

// Right
#define GIT_R01     VIM_TARGET_BRANCH_HUNK          // [*] merge conflict: get target branch hunk
#define GIT_R02     VIM_HUNK_NEXT                   // [*]
#define GIT_R03     VIM_HUNK_PREV                   // [*]
#define GIT_R04     VIM_MERGE_BRANCH_HUNK           // [*] merge conflict: get merge branch hunk
#define GIT_R05     VIM_HUNK_UNDO

#define GIT_R11     _______
#define GIT_R12     VIM_DIFF_NEXT                   // from a diff, go to the next one in status
#define GIT_R13     VIM_DIFF_PREV                   // from a diff, go to the prev one in status
#define GIT_R14     _______
#define GIT_R15     _______

#define GIT_R21     VIM_QUICK_FIRST
#define GIT_R22     VIM_QUICK_NEXT
#define GIT_R23     VIM_QUICK_PREV
#define GIT_R24     VIM_QUICK_LAST
#define GIT_R25     VIM_DIFFTOOL                    // go through all changes in commit (CR)

#define GIT_R31     _______
#define GIT_R32     VIM_PICK_AXE                    // [*] list of commits that introduced symbol
#define GIT_R33     VIM_PICK_AXE_CURRENT_FILE       // [*] list of commits that introduced symbol to this file



// /* IntelliJ-item
//  * ,----------------------------------.  ,----------------------------------.
//  * |NavBar|FindP |VPRVFI|FindF |Marks |  |Scrtch| New  | Copy | Move |Delete|
//  * |------+------+------+------+-------  -------+------+------+------+------|
//  * |FindAc|LocalC|Recent|ProjV | FnP  |  | Back | Decl | Impl | Fwd  |      |
//  * |------+------+------+------+------|  |------+------+------+------+------|
//  * |      |      |      |GotoTe|SupMC |  |PREVTB|DebugV|LastTl|NEXTTB|      |
//  * `------+------+------+------+------+  +------+------+------+------+------'
//  *               |TMnMx |MaxMin| Term |  |Usages|CallHi|      |
//  *               `--------------------'  `--------------------'
//  */
//
// // Left
// #define INAV_L01     LALT(KC_HOME)                // Show navigation bar
// #define INAV_L02     LSFT(LGUI(KC_F))             // [*] Search project
// #define INAV_L03     LCTL(KC_CIRC)                // [*] prev file
// #define INAV_L04     LGUI(LSFT(KC_O))             // [*] Go to file
// #define INAV_L05     LGUI(KC_F3)                  // [*] Marks
//
// #define INAV_L11     LSFT(LGUI(KC_A))             // [*] Find action Note: there is a mac override need to disable https://intellij-support.jetbrains.com/hc/en-us/articles/360005137400-Cmd-Shift-A-hotkey-opens-Terminal-with-apropos-search-instead-of-the-Find-Action-dialog
// #define INAV_L12     LALT(LSFT(KC_Y))             // [*] Local changes (Show Local History)
// #define INAV_L13     LGUI(KC_E)                   // [*] Recent files popup
// #define INAV_L14     LGUI(KC_1)                   // [*] Project Files View
// #define INAV_L15     LALT(KC_F1)                  // [*] Select current file (or symbol) in any view
//
// #define INAV_L21     _______
// #define INAV_L22     _______
// #define INAV_L23     _______
// #define INAV_L24     LSFT(LGUI(KC_T))             // [*] Go to test
// #define INAV_L25     LGUI(KC_U)                   // Go to super-method/super-class
//
// #define INAV_L33     LSFT(LGUI(KC_QUOT))          // Toggle tool min/max
// #define INAV_L34     LGUI(LSFT(KC_F12))           // [*] Toggle maximizing editor
// #define INAV_L35     LALT(KC_F12)                 // Terminal View
//
// // Right
// #define INAV_R01     LSFT(LGUI(KC_N))             // New scratch
// #define INAV_R02     LALT(LGUI(KC_COMM))          // [*] New
// #define INAV_R03     KC_F5                        // [*] Copy
// #define INAV_R04     KC_F6                        // [*] Move
// #define INAV_R05     KC_DEL                       // [*] Delete
//
// #define INAV_R11     LGUI(LALT(KC_LEFT))          // [*] Navigate back
// #define INAV_R12     LGUI(KC_B)                   // [*] Go to declaration
// #define INAV_R13     LALT(LGUI(KC_B))             // [*] Go to implementation
// #define INAV_R14     LGUI(LALT(KC_RIGHT))         // [*] Navigate forward
// #define INAV_R15     _______
//
// #define INAV_R21     LALT(LSFT(KC_M))             // Prev Tab
// #define INAV_R22     LGUI(KC_5)                   // Debug View
// #define INAV_R23     KC_F12                       // Last Tool
// #define INAV_R24     LALT(LGUI(KC_I))             // Next Tab
// #define INAV_R25     _______
//
// #define INAV_R31     LALT(KC_F7)                  // [*] Find Usages
// #define INAV_R32     LCTL(LALT(KC_H))             // [*] Call hierarchy (usage analysis)
// #define INAV_R33     _______
//
//
//
// /* IntelliJ-editor
//  * IdeaVim is used so many vim key cuts can also be used without having them here
//  * IdeaVim plugin emulation (surround, exchange, commentary) : Use vim shortcuts
//  * Purposely not doing things like extract method, extract variable ... just do it with vim tools
//  * Purposely not including override method, implement methods ... look to the source and do manually, if you need use the ui ...
//  * ,----------------------------------.  ,----------------------------------.
//  * |VWALL |VWRITE|REPNFI|      |FileHi|  | Sel- |NEXTBR|PREVBR| Sel+ |VQUIT |
//  * |------+------+------+------+-------  -------+------+------+------+------|
//  * |SELALL|Rename|ChSig |ParamI|      |  |  LU  |PrvEdt|NxtEdt|  SU  |      |
//  * |------+------+------+------+------|  |------+------+------+------+------|
//  * |VHSPLT|VVSPLT|      |DiffIt|VPASTE|  |  LD  |NxtErr|PrvErr|  SD  |      |
//  * `------+------+------+------+------+  +------+------+------+------+------'
//  *               |GenCd |LiveT | DF   |  |CodeCm|StatCm|Suggst|
//  *               `--------------------'  `--------------------'
//  */
//
// // Left
// #define IDEA_L01     VIM_WRITE_ALL                  // [*] write quit editor
// #define IDEA_L02     VIM_WRITE                      // [*] write
// #define IDEA_L03     LGUI(LSFT(KC_R))               // Replace in files
// #define IDEA_L04     _______
// #define IDEA_L05     LGUI(KC_F12)                   // [*] File structure popup
//
// #define IDEA_L11     LGUI(KC_A)                     // [*] select all
// #define IDEA_L12     LSFT(KC_F6)                    // Rename, a little easier to do that select scope search replace
// #define IDEA_L13     LGUI(KC_F6)                    // Change signature, and get the ask to reflect signature change
// #define IDEA_L14     LGUI(KC_P)                     // Get param infor
// #define IDEA_L15     _______
//
// #define IDEA_L21     VIM_HSPLIT                     // [*] hor split
// #define IDEA_L22     VIM_VSPLIT                     // [*] vert split
// #define IDEA_L23     _______
// #define IDEA_L24     LGUI(KC_D)                     // [*] Diff it
// #define IDEA_L25     VIM_PASTE_LAST_YANK            // [*] Paste last yank (instead of last selection)
//
// #define IDEA_L33     LGUI(KC_N)                     // Generate code
// #define IDEA_L34     LGUI(KC_J)                     // [*] Insert live templates
// #define IDEA_L35     LALT(LSFT(KC_E))               // [*] Distraction Free Mode Toggle
//
// // Right
// #define IDEA_R01     LALT(KC_DOWN)                  // Shrink selection (similar idea to editor but uses selection)
// #define IDEA_R02     VIM_NEXT_BRACKET               // [*]
// #define IDEA_R03     VIM_PREV_BRACKET               // [*]
// #define IDEA_R04     LALT(KC_UP)                    // Extend selection (similar idea to editor but uses selection)
// #define IDEA_R05     VIM_QUIT                       // [*]
//
// #define IDEA_R11     LALT(LSFT(KC_UP))              // [*] Move line up
// #define IDEA_R12     LSFT(LGUI(KC_BSPC))             // [*] prev edit location
// #define IDEA_R13     LALT(KC_SCLN)                  // [*] Next edit (custom keymap)
// #define IDEA_R14     VIM_INTELLIJ_INSERT_SPACE_ABOVE// [*] space above
// #define IDEA_R15     _______
//
// #define IDEA_R21     LALT(LSFT(KC_DOWN))            // [*] Move line down
// #define IDEA_R22     KC_F2                          // [*] Next highlighted error
// #define IDEA_R23     LSFT(KC_F2)                    // [*] Previous highlighted error
// #define IDEA_R24     VIM_INTELLIJ_INSERT_SPACE_BELOW// [*] space below
// #define IDEA_R25     _______
//
// #define IDEA_R31     LCTL(LSFT(KC_SPC))             // [*] Code complete
// #define IDEA_R32     LGUI(LSFT(KC_ENTER))           // [*] Statement complete
// #define IDEA_R33     LALT(KC_ENTER)                 // [*] Show intention actions and quick-fixes
//
//
//
// /* Intellij-git
//  * ,----------------------------------.  ,----------------------------------.
//  * |      |      |      |CMMITS|      |  |AccLft|HUNKN |HUNKP |AccRgt|HUNKU |
//  * |------+------+------+------+-------  -------+------+------+------+------|
//  * |LOGCFD|LOGCFS|Status|      | Blame|  |      |NEXTDF|PREVDF|      |      |
//  * |------+------+------+------+------|  |------+------+------+------+------|
//  * |      |      | DiffR|DiffIt| DiffB|  |      |      |      |      |      |
//  * `------+------+------+------+------+  +------+------+------+------+------'
//  *               |GPUSH |COMMIT|FETCH |  |      |      |      |
//  *               `--------------------'  `--------------------'
//  */
//
// // Left
// #define QWER_L01     _______
// #define QWER_L02     _______
// #define QWER_L03     _______
// #define QWER_L04     LGUI(KC_9)                   // [*] Local changes (need to move with tabs)
// #define QWER_L05     _______
//
// #define QWER_L11     LALT(LSFT(KC_H))             // [*] Show History for file
// #define QWER_L12     LALT(LSFT(KC_COMM))          // [*] Show History for file for selection
// #define QWER_L13     LGUI(KC_9)                   // [*] Git status
// #define QWER_L14     _______
// #define QWER_L15     LALT(KC_Q)                   // [*] Blame (custom keymap)
//
// #define QWER_L21     _______
// #define QWER_L22     _______
// #define QWER_L23     LALT(LGUI(KC_S))             // [*] Compare With Revision
// #define QWER_L24     LGUI(KC_D)                   // [*] Diff it
// #define QWER_L25     LALT(LSFT(KC_S))             // [*] Compare With Branch
//
// #define QWER_L33     LSFT(LGUI(KC_K))             // [*] Push
// #define QWER_L34     LGUI(KC_K)                   // [*] Commit
// #define QWER_L35     LALT(LSFT(KC_J))             // [*] Fetch
//
// // Right
// #define QWER_R01     LALT(LSFT(KC_L))             // [*] Accept Left Side
// #define QWER_R02     KC_F7                        // [*] Next Hunk
// #define QWER_R03     LSFT(KC_F7)                  // [*] Prev Hunk
// #define QWER_R04     LALT(LSFT(KC_U))             // [*] Accept Right Side
// #define QWER_R05     LALT(LGUI(KC_Z))             // [*] hunk undo
//
// #define QWER_R11     _______
// #define QWER_R12     KC_DOWN                      // [*]
// #define QWER_R13     KC_UP                        // [*]
// #define QWER_R14     _______
// #define QWER_R15     _______
//
// #define QWER_R21     _______
// #define QWER_R22     _______
// #define QWER_R23     _______
// #define QWER_R24     _______
// #define QWER_R25     _______
//
// #define QWER_R31     _______
// #define QWER_R32     _______
// #define QWER_R33     _______



