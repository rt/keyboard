# Handwired Ryan's Switch Tester

This firmware is for a handwired Ryan's Switch Tester using an Arduino Pro Micro.

Keyboard Maintainer: [The QMK Community](https://github.com/qmk)  
Hardware Supported: Arduino Pro Micro  

## Pinout

The following pins are used:
- Columns 1-13: D4, D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4
- Rows 1-4: D3, D2, D1, D0

## Compiling and loading the firmware

Make example for this keyboard (after setting up your build environment):

    make handwired/ryan_switch_tester:default

To flash the firmware onto the microcontroller, run `make avrdude`, and press the reset button.

    make handwired/ryan_switch_tester:default:avrdude

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


### Linear

| Cherry Black       | Cherry Red          | Cherry Linear Gray |
| Gat Black          | Gat Red             | Gat Yellow         |
| Kailh Black        | Kailh Red           | Kailh Dark Yellow  |
| Kaihl Burgundy Pro | Cherry Speek Silver | Kailh Speed Silver |
| Tealios V1         | Tealios V2          | Gat White          |

extra: Gat White

### Clicky

| Cherry Blue      | Cherry Milk        | Cherry Green          |
| Gat Blue         | Gat Green          | Kailh Pro Light Green |
| Kailh White      | Kailh Pale Blue    | Kailh Box Pinks       |
| Kailh Jade       | Kailh Navy         | Kailh Speed Navy      |
| Kailh Speed Gold | Kailh Speed Bronze | Kailh Box Pink Lubed  |

### Tactile

| Cherry Brown    | Cherry Clear     | Cherry Tactile Gray | Box Royal          | Hako Royal True        | Hako Royal Clear      |
| Gat Brown       | Gat Silent Brown | Aliaz 60            | Aliaz 70           | Aliaz 80               | Aliaz 100             |
| Kailh Box Brown | Kailh Pro Purple | Kailh Burnt Orange  | Kailh Speed Copper | Input Club True        | Input Club Hako True  |
| Zealios 62      | Zealios 65       | Zealios 67          | Zealios 78         | Input Club Clear       | Input Club Hako Clear |
| Zealios V2 62   | Zealios V2 65    | Zealios V2 67       | Zealios V2 78      | Input Club Hako Violet | Holy Panda            |
