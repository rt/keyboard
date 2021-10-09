#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"
#include "layers/adjust.h"
#include "layers/chrome.h"
#include "layers/clojure.h"
#include "layers/colemak_dhm.h"
#include "layers/debug.h"
// #include "layers/intellij_editor.h"
// #include "layers/intellij_git.h"
// #include "layers/intellij_item.h"
#include "layers/lower.h"
#include "layers/nav.h"
#include "layers/raise.h"
#include "layers/shift.h"
#include "layers/vim_editor.h"
#include "layers/vim_git.h"
#include "layers/vim_item.h"
#include "layers/visual_studio_editor.h"
#include "layers/visual_studio_git.h"
#include "layers/visual_studio_item.h"
#include "layers/work.h"

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

  CHROME_BOOKMARKS,

  CLOJURE_FORM_INSERT_BEG,
  CLOJURE_FORM_INSERT_END,
  CLOJURE_SLUPAGE_LEFT,
  CLOJURE_SLUPAGE_RIGHT,
  CLOJURE_BARFAGE_LEFT,
  CLOJURE_BARFAGE_RIGHT,
  CLOJURE_SPLICE,
  CLOJURE_FORM_WRAP_BEG,
  CLOJURE_FORM_WRAP_END,
  CLOJURE_ELEMENT_WRAP_BEG,
  CLOJURE_ELEMENT_WRAP_END,
  CLOJURE_FORM_RAISE,
  CLOJURE_ELEMENT_RAISE,
  CLOJURE_FORM_SWAP_LEFT,
  CLOJURE_FORM_SWAP_RIGHT,
  CLOJURE_ELEMENT_SWAP_LEFT,
  CLOJURE_ELEMENT_SWAP_RIGHT,
  CLOJURE_TOP_FORM_BEG,
  CLOJURE_TOP_FORM_END,
  CLOJURE_ELEMENT_LEFT_END,

  CD_PREV,
  CD_GIT_DIR,
  CD_GIT_ROOT,

  TMUX_PANE_NEXT,
  TMUX_PANE_PREV,
  TMUX_WIN_PREV,
  TMUX_WIN_NEXT,
  TMUX_SCROLL,
  TMUX_ZOOM_TOGGLE,
  TMUX_SIZE_UP,
  TMUX_SIZE_DOWN,
  TMUX_SIZE_LEFT,
  TMUX_SIZE_RIGHT,
  TMUX_HSPLIT,
  TMUX_VSPLIT,
  TMUX_KILL_SESSION,
  TMUX_DETACH,
  TMUX_FIND_SESSION,
  TMUX_RELOAD_CONFIG,

  VIM_TMUX_REDO,
  VIM_TMUX_CTLD,
  VIM_TMUX_CTLL,
  VIM_TMUX_PARA_EXECUTE,
  VIM_TMUX_SELECTED_EXECUTE,
  VIM_TMUX_LINE_EXECUTE,
  VIM_SHOW_MY_SNIPPETS, 
  VIM_HUNK_UNDO,
  VIM_HUNK_NEXT,
  VIM_HUNK_PREV,
  VIM_TARGET_BRANCH_HUNK,
  VIM_MERGE_BRANCH_HUNK,
  VIM_GIT_BROWSE,
	VIM_GIT_PUSH,
  VIM_GIT_COMMIT,
  VIM_GIT_FETCH,
  VIM_HELP,
  VIM_QUIT,
  VIM_WRITE,
  VIM_WRITE_ALL,
  VIM_WRITE_QUIT,
  VIM_SELECT_ALL,
  VIM_VSPLIT,
  VIM_HSPLIT,
  VIM_DIFFTOOL,
  VIM_PASTE_LAST_YANK,
  VIM_DIFF_TOGGLE,
  VIM_DIFF_IT,
  VIM_DIFF_NEXT,
  VIM_DIFF_PREV,
  VIM_LOG_CURRENT_FILE_SELECTION,
  VIM_LOG_CURRENT_FILE_DETAILS,
  VIM_PICK_AXE,
  VIM_PICK_AXE_CURRENT_FILE,
  VIM_USAGES_CWORD,
  VIM_USAGES_CFILE,
  VIM_EDIT_ANY,
  VIM_DIFF_INDEX,
  VIM_DIFF_ANY,
  VIM_DIFF_ON,
  VIM_GIT_COMMITS,
  VIM_GIT_STATUS,
  VIM_GIT_BLAME,
  VIM_GIT_GREP,
	VIM_ARGS_FIRST,
	VIM_ARGS_NEXT,
	VIM_ARGS_PREV,
	VIM_ARGS_LAST,
  VIM_BUFFER_PREV,
  VIM_BUFFER_NEXT,
  VIM_CTAGS,
  VIM_CTAGS_DECL,
  VIM_CTAGS_SEL,
  VIM_TAGBAR_OPEN_AUTOCLOSE,
  VIM_BLINES,
  VIM_REPLACE_IN_FILES,
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
  VIM_SHOW_PLAYGROUND_JAVASCRIPT,
  VIM_SHOW_PLAYGROUND_JAVA,
  VIM_SHOW_PLAYGROUND_CLOJURE,
  VIM_SHOW_PLAYGROUND_BASH,
  VIM_SHOW_PLAYGROUND_MISC,
  VIM_SHOW_KEYMAPS,
  VIM_ONLY,
  VIM_GUNDO,
  VIM_SNIPPETS,
  VIM_DISTRACTION_FREE_MODE,
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
  VIM_SEARCH_IN_DIR,
  VIM_WORK_SHOW_NOTES,
  VIM_WORK_GOTO_COMPONENT,
  VIM_WORK_GET_TEMPLATE,
  VIM_WORK_GET_BACKING_FILE,
  VIM_GET_STYLE_FILE,
  VIM_GOTO_TEST,
  VIM_GET_USAGES_BY_CURRENT_FILE,
  VIM_GET_IMPL,

  WORK_DB_MIGRATIONS_SHARED,
  WORK_DB_MIGRATIONS_CLIENT,
  WORK_FE_ROUTES,
  WORK_GOTO_JIRA,
};


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
