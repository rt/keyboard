
## Bitboards

I used https://github.com/ogatatsu/Cherry-Mx-Bitboard-Re socketed single switches.
To print them, use KiCad, clone the repo, go into the pitch that you want (18.5, 19.05, 19) select the *.kicad_pcb file
and create gerber files to send to allpcb.com.  In the order form I just took all the defaults.

## Notes

```
enum custom_keycodes {
  MY_MACRO = SAFE_RANGE
};

//...

case MY_MACRO: {
  if (record->event.pressed) {
    key_timer = timer_read();
    register_mods(MOD_BIT(KC_LCTL));
  }
  else if (timer_elapsed(key_timer) < TAPPING_TERM) {
    unregister_mods(MOD_BIT(KC_LCTL));
    register_mods(MOD_BIT(KC_LSFT));
    register_code(KC_EQL);
    unregister_code(KC_EQL);
    unregister_mods(MOD_BIT(KC_LSFT));
  }
  else {
    unregister_mods(MOD_BIT(KC_LCTL));
  }
  return false;
}

//...
```


```
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
```

