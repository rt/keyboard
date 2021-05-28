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



