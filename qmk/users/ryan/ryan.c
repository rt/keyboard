#include "ryan.h"

extern keymap_config_t keymap_config;

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case COLEMAKDH:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLE);
      }
      return false;
    /* case LOWER: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_LOWER); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } else { */
    /*     layer_off(_LOWER); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } */
    /*   return false; */
    /* case RAISE: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } else { */
    /*     layer_off(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } */
    /*   return false; */
    
    /*case EPRM:*/
      /*if (record->event.pressed) {*/
        /*eeconfig_init();*/
      /*}*/
      /*return false;*/
    /*case VRSN:*/
      /*if (record->event.pressed) {*/
        /*SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);*/
      /*}*/
      /*return false;*/
    /*case RGB_SLD:*/
      /*if (record->event.pressed) {*/
        /*#ifdef RGBLIGHT_ENABLE*/
        /*rgblight_mode(1);*/
        /*#endif*/
      /*}*/
      /*return false;*/
    
    case CHROME_BOOKMARKS:
      if (record->event.pressed) {
        SEND_STRING("chrome.bookmarks"SS_TAP(X_ENTER));
      }
        break;

    case CLOJURE_SLUPAGE_LEFT:
      if (record->event.pressed) {
        SEND_STRING("<(");
      }
        break;
    case CLOJURE_SLUPAGE_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(">)");
      }
        break;
    case CLOJURE_BARFAGE_LEFT:
      if (record->event.pressed) {
        SEND_STRING(">(");
      }
        break;
    case CLOJURE_BARFAGE_RIGHT:
      if (record->event.pressed) {
        SEND_STRING("<)");
      }
        break;
    case CLOJURE_SPLICE:
      if (record->event.pressed) {
        SEND_STRING("\\@");
      }
        break;
    case CLOJURE_FORM_INSERT_BEG:
      if (record->event.pressed) {
        SEND_STRING("<I");
      }
        break;
    case CLOJURE_FORM_INSERT_END:
      if (record->event.pressed) {
        SEND_STRING(">I");
      }
        break;
    case CLOJURE_FORM_WRAP_BEG:
      if (record->event.pressed) {
        SEND_STRING("\\i");
      }
        break;
    case CLOJURE_FORM_WRAP_END:
      if (record->event.pressed) {
        SEND_STRING("\\I");
      }
        break;
    case CLOJURE_ELEMENT_WRAP_BEG:
      if (record->event.pressed) {
        SEND_STRING("\\w");
      }
        break;
    case CLOJURE_ELEMENT_WRAP_END:
      if (record->event.pressed) {
        SEND_STRING("\\W");
      }
        break;
    case CLOJURE_FORM_RAISE:
      if (record->event.pressed) {
        SEND_STRING("\\o");
      }
        break;
    case CLOJURE_ELEMENT_RAISE:
      if (record->event.pressed) {
        SEND_STRING("\\O");
      }
        break;
    case CLOJURE_FORM_SWAP_LEFT:
      if (record->event.pressed) {
        SEND_STRING("<f");
      }
        break;
    case CLOJURE_FORM_SWAP_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(">f");
      }
        break;
    case CLOJURE_ELEMENT_SWAP_LEFT:
      if (record->event.pressed) {
        SEND_STRING("<e");
      }
        break;
    case CLOJURE_ELEMENT_SWAP_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(">e");
      }
        break;
    case CLOJURE_TOP_FORM_BEG:
      if (record->event.pressed) {
        SEND_STRING("[[");
      }
        break;
    case CLOJURE_TOP_FORM_END:
      if (record->event.pressed) {
        SEND_STRING("]]");
      }
        break;
    case CLOJURE_ELEMENT_LEFT_END:
      if (record->event.pressed) {
        SEND_STRING("gE");
      }
        break;

    case CD_PREV:
      if (record->event.pressed) {
        SEND_STRING("cd -"SS_TAP(X_ENTER));
      }
        break;
    case CD_GIT_ROOT:
      if (record->event.pressed) {
        SEND_STRING("cd.git.root"SS_TAP(X_ENTER));
      }
        break;
    case CD_GIT_DIR:
      if (record->event.pressed) {
        /* SEND_STRING("fd.dir.git"SS_TAP(X_ENTER)); */
        SEND_STRING(SS_TAP(X_ESCAPE)"c");
      }
        break;
    
    case VIM_QUIT:
      if (record->event.pressed) {
        SEND_STRING(":q"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WRITE:
      if (record->event.pressed) {
        SEND_STRING(":w"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WRITE_ALL:
      if (record->event.pressed) {
        SEND_STRING(":wa"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WRITE_QUIT:
      if (record->event.pressed) {
        SEND_STRING(":wq"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PREV_EDIT:
      if (record->event.pressed) {
        SEND_STRING("g;");
      }
        break;
    case VIM_NEXT_EDIT:
      if (record->event.pressed) {
        SEND_STRING("g,");
      }
        break;
    case VIM_PREV_BRACKET:
      if (record->event.pressed) {
        SEND_STRING("[{");
      }
        break;
    case VIM_NEXT_BRACKET:
      if (record->event.pressed) {
        SEND_STRING("]}");
      }
        break;
    case VIM_ALE_PREV:
      if (record->event.pressed) {
        SEND_STRING(":ALEPrevious"SS_TAP(X_ENTER));
      }
        break;
    case VIM_ALE_NEXT:
      if (record->event.pressed) {
        SEND_STRING(":ALENext"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SELECT_ALL:
      if (record->event.pressed) {
        SEND_STRING("ggVG");
      }
        break;
    case VIM_VSPLIT:
      if (record->event.pressed) {
        SEND_STRING(":vsp"SS_TAP(X_ENTER));
      }
        break;
    case VIM_HSPLIT:
      if (record->event.pressed) {
        SEND_STRING(":sp"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PASTE_LAST_YANK:
      if (record->event.pressed) {
        SEND_STRING("\"0p");
      }
        break;
    case VIM_USAGES_CWORD:
      if (record->event.pressed) {
        SEND_STRING(":UsagesCWord"SS_TAP(X_ENTER));
      }
        break;
    case VIM_USAGES_CFILE:
      if (record->event.pressed) {
        SEND_STRING(":UsagesCFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_STATUS:
      if (record->event.pressed) {
        SEND_STRING(":Git"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_BLAME:
      if (record->event.pressed) {
        SEND_STRING(":Git blame"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFFTOOL:
      if (record->event.pressed) {
        /* SEND_STRING(":Git difftool"SS_TAP(X_ENTER)); */
        SEND_STRING(":GitGutterQuickFix"SS_TAP(X_ENTER)":copen"SS_TAP(X_ENTER));
      }
        break;
    case VIM_HELP:
      if (record->event.pressed) {
        SEND_STRING(":Help"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFF_INDEX:
      if (record->event.pressed) {
        SEND_STRING(":Gvdiffsplit"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFF_ANY:
      if (record->event.pressed) {
        SEND_STRING(":Gvdiffsplit master:%");
      }
        break;
    case VIM_EDIT_ANY:
      if (record->event.pressed) {
        SEND_STRING(":Gedit master:%");
      }
        break;
    case VIM_LOG_CURRENT_FILE_SELECTION:
      if (record->event.pressed) {
        SEND_STRING(":'<,'>Gclog"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_GREP:
      if (record->event.pressed) {
        SEND_STRING(":Ggrep master");
      }
        break;
    case VIM_GIT_COMMITS:
      if (record->event.pressed) {
        SEND_STRING(":Commits"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_BROWSE:
      if (record->event.pressed) {
        SEND_STRING(":'<,'>GBrowse"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_FETCH:
      if (record->event.pressed) {
        SEND_STRING(":Git fetch"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_COMMIT:
      if (record->event.pressed) {
        SEND_STRING("cc");
      }
        break;
    case VIM_GIT_PUSH:
      if (record->event.pressed) {
        SEND_STRING(":Git push"SS_TAP(X_ENTER));
      }
        break;
    case VIM_HUNK_NEXT:
      if (record->event.pressed) {
        SEND_STRING(":GitGutterNextHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_HUNK_PREV:
      if (record->event.pressed) {
        SEND_STRING(":GitGutterPrevHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_HUNK_UNDO:
      if (record->event.pressed) {
        SEND_STRING(":GitGutterUndoHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_TARGET_BRANCH_HUNK:
      if (record->event.pressed) {
        SEND_STRING(":diffget //2 | diffup"SS_TAP(X_ENTER));
      }
        break;
    case VIM_MERGE_BRANCH_HUNK:
      if (record->event.pressed) {
        SEND_STRING(":diffget //3 | diffup"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PICK_AXE:
      if (record->event.pressed) {
        SEND_STRING(":PickAxe"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PICK_AXE_CURRENT_FILE:
      if (record->event.pressed) {
        SEND_STRING(":PickAxeCurrentFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_LOG_CURRENT_FILE_DETAILS:
      if (record->event.pressed) {
        SEND_STRING(":0Gclog"SS_TAP(X_ENTER));
      }
        break;
        
    case VIM_ARGS_FIRST:
      if (record->event.pressed) {
        SEND_STRING("[A");
      }
        break;
    case VIM_ARGS_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]a");
      }
        break;
    case VIM_ARGS_PREV:
      if (record->event.pressed) {
        SEND_STRING("[a");
      }
        break;
    case VIM_ARGS_LAST:
      if (record->event.pressed) {
        SEND_STRING("]A");
      }
        break;
    case VIM_QUICK_FIRST:
      if (record->event.pressed) {
        SEND_STRING("[Q");
      }
        break;
    case VIM_QUICK_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]q");
      }
        break;
    case VIM_QUICK_PREV:
      if (record->event.pressed) {
        SEND_STRING("[q");
      }
        break;
    case VIM_QUICK_LAST:
      if (record->event.pressed) {
        SEND_STRING("]Q");
      }
        break;
    case VIM_EXCHANGE_LINE_BELOW:
      if (record->event.pressed) {
        SEND_STRING("]e");
      }
        break;
    case VIM_EXCHANGE_LINE_ABOVE:
      if (record->event.pressed) {
        SEND_STRING("[e");
      }
        break;
    case VIM_INTELLIJ_INSERT_SPACE_BELOW:
      if (record->event.pressed) {
        SEND_STRING("o"SS_TAP(X_UP)SS_TAP(X_ESCAPE));
      }
        break;
    case VIM_INTELLIJ_INSERT_SPACE_ABOVE:
      if (record->event.pressed) {
        SEND_STRING("O"SS_TAP(X_DOWN)SS_TAP(X_ESCAPE));
      }
        break;
    case VIM_INSERT_SPACE_BELOW:
      if (record->event.pressed) {
        SEND_STRING("] ");
      }
        break;
    case VIM_INSERT_SPACE_ABOVE:
      if (record->event.pressed) {
        SEND_STRING("[ ");
      }
        break;
    case VIM_DIFF_ON:
      if (record->event.pressed) {
        SEND_STRING(":windo diffthis"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFF_TOGGLE:
      if (record->event.pressed) {
        SEND_STRING("yod");
      }
        break;
    case VIM_DIFF_IT:
      if (record->event.pressed) {
        SEND_STRING("dvgg:GitGutterNextHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFF_PREV:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("e")SS_TAP(X_UP)"dvgg:GitGutterNextHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIFF_NEXT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("e")SS_TAP(X_DOWN)"dvgg:GitGutterNextHunk"SS_TAP(X_ENTER));
      }
        break;
    case VIM_BUFFER_PREV:
      if (record->event.pressed) {
        SEND_STRING(":BufSurfBack"SS_TAP(X_ENTER));
      }
        break;
    case VIM_BUFFER_NEXT:
      if (record->event.pressed) {
        SEND_STRING(":BufSurfForward"SS_TAP(X_ENTER));
      }
        break;
    case VIM_CTAGS_SEL:
      if (record->event.pressed) {
        SEND_STRING(":ts"SS_TAP(X_ENTER));
      }
        break;
    case VIM_CTAGS_DECL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("]"));
      }
        break;
    case VIM_BLINES:
      if (record->event.pressed) {
        SEND_STRING(":BLines"SS_TAP(X_ENTER));
      }
        break;
    case VIM_REPLACE_IN_FILES:
      if (record->event.pressed) {
        SEND_STRING(":args `grep keyword -rl dir`");
      }
        break;
    case VIM_TAGBAR_OPEN_AUTOCLOSE:
      if (record->event.pressed) {
        SEND_STRING(":TagbarOpenAutoClose"SS_TAP(X_ENTER));
        /* SEND_STRING(":TagbarToggle"SS_TAP(X_ENTER)); */
      }
        break;
    case VIM_FIND_INPATH:
      if (record->event.pressed) {
        SEND_STRING(":Rg ");
      }
        break;
    case VIM_FIND_GFILE:
      if (record->event.pressed) {
        SEND_STRING(":GFiles"SS_TAP(X_ENTER));
      }
        break;
    case VIM_COMMANDS:
      if (record->event.pressed) {
        SEND_STRING(":Commands"SS_TAP(X_ENTER));
      }
        break;
    case VIM_MARKS:
      if (record->event.pressed) {
        SEND_STRING(":Marks"SS_TAP(X_ENTER));
      }
        break;
    case VIM_FILES_RECENT:
      if (record->event.pressed) {
        SEND_STRING(":Buffers"SS_TAP(X_ENTER));
      }
        break;
    case VIM_VIEW_PROJ:
      if (record->event.pressed) {
        SEND_STRING(":NERDTreeToggle"SS_TAP(X_ENTER));
      }
        break;
    case VIM_FILE_INPROJ:
      if (record->event.pressed) {
        SEND_STRING(":NERDTreeFind"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DISPATCH_NPM:
      if (record->event.pressed) {
        SEND_STRING(":Dispatch npm run ");
      }
        break;
    case VIM_SHOW_QUICK_REF:
      if (record->event.pressed) {
        SEND_STRING(":ShowQuickReference"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SHOW_KEYMAPS:
      if (record->event.pressed) {
        SEND_STRING(":ShowKeymaps"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SHOW_MY_SNIPPETS:
      if (record->event.pressed) {
        SEND_STRING(":ShowMySnippets"SS_TAP(X_ENTER));
      }
        break;
    case VIM_ONLY:
      if (record->event.pressed) {
        SEND_STRING(":only"SS_TAP(X_ENTER));
      }
        break;
    case VIM_NERD_NEW:
      if (record->event.pressed) {
        SEND_STRING("ma");
      }
        break;
    case VIM_NERD_COPY:
      if (record->event.pressed) {
        SEND_STRING("mc");
      }
        break;
    case VIM_NERD_MOVE:
      if (record->event.pressed) {
        SEND_STRING("mm");
      }
        break;
    case VIM_NERD_DEL:
      if (record->event.pressed) {
        SEND_STRING("md");
      }
        break;
    case VIM_GUNDO:
      if (record->event.pressed) {
        SEND_STRING(":GundoToggle"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SNIPPETS:
      if (record->event.pressed) {
        SEND_STRING(":Snippets"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DISTRACTION_FREE_MODE:
      if (record->event.pressed) {
        SEND_STRING(":Goyo"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SHOW_NOTES:
      if (record->event.pressed) {
        SEND_STRING(":WorkShowNotes"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SHOW_PROVISIONERS:
      if (record->event.pressed) {
        SEND_STRING(":WorkShowProvisioners"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_ROOT:
      if (record->event.pressed) {
        SEND_STRING(":CdRoot"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SEARCH_IN_DIR:
      if (record->event.pressed) {
        SEND_STRING(":lcd %:p:h"SS_TAP(X_ENTER)":Ag ");
        /* SEND_STRING("cd"SS_LCTRL("i")":Ag "); */ // this will only have the tree with correct pwd
      }
        break;
    case VIM_WORK_GOTO_COMPONENT:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoComponent"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_STYLE_FILE:
      if (record->event.pressed) {
        SEND_STRING(":GetStyleFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_TEMPLATE:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetComponentTemplates"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_BACKING_FILE:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetBackingFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GOTO_TEST:
      if (record->event.pressed) {
        SEND_STRING(":GotoTest"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_USAGES_BY_CURRENT_FILE:
      if (record->event.pressed) {
        SEND_STRING(":GetUsagesByCurrentFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_IMPL:
      if (record->event.pressed) {
        SEND_STRING(":GetImpl"SS_TAP(X_ENTER));
      }
        break;
    case VIM_TMUX_LINE_EXECUTE:
      if (record->event.pressed) {
        SEND_STRING(",tj");
      }
        break;
    case VIM_TMUX_SELECTED_EXECUTE:
      if (record->event.pressed) {
        SEND_STRING(",tj"SS_TAP(X_ESCAPE));
      }
        break;
    case VIM_TMUX_PARA_EXECUTE:
      if (record->event.pressed) {
        SEND_STRING("vip,tj"SS_TAP(X_ESCAPE));
      }
        break;
    case VIM_TMUX_REDO:
      if (record->event.pressed) {
        SEND_STRING(",tr");
      }
        break;
    case VIM_TMUX_CTLD:
      if (record->event.pressed) {
        SEND_STRING(",td");
      }
        break;
    case VIM_TMUX_CTLL:
      if (record->event.pressed) {
        SEND_STRING(",tll");
      }
        break;
    case TMUX_PANE_PREV:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bk"));
      }
        break;
    case TMUX_PANE_NEXT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bj"));
      }
        break;
    case TMUX_WIN_PREV:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bh"));
      }
        break;
    case TMUX_WIN_NEXT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bl"));
      }
        break;
    case TMUX_SCROLL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"[");
      }
        break;
    case TMUX_RELOAD_CONFIG:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")":source-file ~/.tmux.conf"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_ZOOM_TOGGLE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"z");
      }
        break;
    case TMUX_FIND_SESSION:
      if (record->event.pressed) {
        SEND_STRING("tm"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_DETACH:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")":detach"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_KILL_SESSION:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")":kill-session"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_VSPLIT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"|"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_HSPLIT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"-"SS_TAP(X_ENTER));
      }
        break;
    case TMUX_SIZE_UP:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"K");
      }
        break;
    case TMUX_SIZE_DOWN:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"J");
      }
        break;
    case TMUX_SIZE_LEFT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"H");
      }
        break;
    case TMUX_SIZE_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"L");
      }
        break;
    case WORK_DB_MIGRATIONS_SHARED:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetMigrationsShared"SS_TAP(X_ENTER));
      }
        break;
    case WORK_DB_MIGRATIONS_CLIENT:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetMigrationsClient"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_ROUTES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListRoutes"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_CONTROLLERS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListControllers"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_COMPONENTS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListComponents"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_TEMPLATES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListTemplates"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_STYLES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListStyles"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_HANDLEBAR_HELPERS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListHandlebarHelpers"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_STORES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListStores"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_MODELS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListModels"SS_TAP(X_ENTER));
      }
        break;
    case WORK_FE_ACTIONS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListActions"SS_TAP(X_ENTER));
      }
        break;
    case WORK_GOTO_TP:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoTp"SS_TAP(X_ENTER));
      }
        break;
    case WORK_GOTO_JIRA:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoJira"SS_TAP(X_ENTER));
      }
        break;
    case WORK_GOTO_CONFLUENCE:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoConfluence"SS_TAP(X_ENTER));
      }
        break;
    case WORK_EDIT_ELP:
      if (record->event.pressed) {
        SEND_STRING(":WorkPlaceELP"SS_TAP(X_ENTER));
      }
        break;
    case WORK_EDIT_JENKINSFILE:
      if (record->event.pressed) {
        SEND_STRING(":WorkPlaceJenkinsfile"SS_TAP(X_ENTER));
      }
        break;
    case WORK_EDIT_BUILD:
      if (record->event.pressed) {
        SEND_STRING(":WorkPlaceBuild"SS_TAP(X_ENTER));
      }
        break;
        
  }
  return true;
}


/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {*/
  /*switch (keycode) {*/
    /*case QWERTY:*/
      /*if (record->event.pressed) {*/
        /*#ifdef AUDIO_ENABLE*/
          /*PLAY_SONG(tone_qwerty);*/
        /*#endif*/
        /*[>persistent_default_layer_set(1UL<<_QWERTY);<]*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case COLEMAKDH:*/
      /*if (record->event.pressed) {*/
        /*#ifdef AUDIO_ENABLE*/
          /*PLAY_SONG(tone_colemak);*/
        /*#endif*/
        /*[>persistent_default_layer_set(1UL<<_COLE);<]*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case LOWER:*/
      /*if (record->event.pressed) {*/
        /*layer_on(_LOWER);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*} else {*/
        /*layer_off(_LOWER);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case RAISE:*/
      /*if (record->event.pressed) {*/
        /*layer_on(_RAISE);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*} else {*/
        /*layer_off(_RAISE);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*}*/
      /*break;*/
      /*break;*/
      
      
  /*}*/
  /*return true;*/
/*}*/
