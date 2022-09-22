/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix driver configuration */
#    define DRIVER_COUNT 2

#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100
#    define DRIVER_1_LED_TOTAL 47
#    define DRIVER_2_LED_TOTAL 40
#    define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Set to infinit, which is use in USB mode by default */
#define RGB_DISABLE_TIMEOUT RGB_DISABLE_TIME_INFINITE
/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32

#    ifdef VIA_ENABLE
#        define VIA_QMK_RGBLIGHT_ENABLE
#    endif

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT

/* enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined */
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN

/*  enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined*/
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH

#define MODS_SHIFT  (get_mods() & MOD_MASK_SHIFT)
#define MODS_CTRL   (get_mods() & MOD_MASK_CTRL)
#define MODS_ALT    (get_mods() & MOD_MASK_ALT)

#define FORCE_NKRO                  // NKRO by default requires to be turned on, this forces it on during keyboard startup regardless of EEPROM setting. NKRO can still be turned off but will be turned on again if the keyboard reboots.
// #define QMK_KEYS_PER_SCAN 4         // Allows sending more than one key per scan. By default, only one key event gets sent via process_record() per scan. This has little impact on most typing, but if you're doing a lot of chords, or your scan rate is slow to begin with, you can have some delay in processing key events. Each press and release is a separate event. For a keyboard with 1ms or so scan times, even a very fast typist isn't going to produce the 500 keystrokes a second needed to actually get more than a few ms of delay from this. But if you're doing chording on something with 3-4ms scan times? You probably want this.
// #define STRICT_LAYER_RELEASE        // Force a key release to be evaluated using the current layer stack instead of remembering which layer it came from (used for advanced cases)
// #define LOCKING_SUPPORT_ENABLE      // Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
// #define LOCKING_RESYNC_ENABLE       // Tries to keep switch state consistent with keyboard LED state
#define TAPPING_TERM 200            // How long before a tap becomes a hold, if set above 500, a key tapped during the tapping term will turn it into a hold too
// #define TAPPING_TERM_PER_KEY        // Enables handling for per key TAPPING_TERM settings
// #define RETRO_TAPPING               // Tap anyway, even after TAPPING_TERM, if there was no other key interruption between press and release
#define TAPPING_TOGGLE 2            // How many taps before triggering the toggle
#define RGB_MATRIX_STARTUP_VAL 100 // Sets the default brightness value, if none has been set
#define RGB_MATRIX_STARTUP_SPD 80 // Sets the default animation speed, if none has been set

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT // Sets the default mode, if none has been set


/* Set LED driver current */
#define CKLED2001_CURRENT_TUNE   {0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38}

#endif
