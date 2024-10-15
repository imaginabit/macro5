# macro5

## Reversed!

    "diode_direction": "COL2ROW",
    "matrix_pins": {
        "direct": ["GP10", "GP9", "GP11", "GP12", "GP13"],
        "rows": ["GP3"]
    },

in this version its directs pins 

    "matrix_pins": {
        "direct": [
            ["GP9", "GP10"], 
            ["GP13", "GP12","GP11" ]
        ]
    },


![macro5](https://i.imgur.com/6ufqhN6.jpeg)

Little macro keyboard with 5 keys and rp2040-zero

* Keyboard Maintainer: [Imaginabit](https://github.com/imaginabit)
* Hardware Supported: custom PCB you wild find in my github 
* Hardware Availability: not yet

Make example for this keyboard (after setting up your build environment):

    make macro5:default

Flashing example for this keyboard:

    make macro5:default:flash

vial:

    make macro5:vial


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


<!-- 
qmk compile -kb macro5 -km default

qmk lint -kb macro5  -->