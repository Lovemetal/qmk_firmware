// Copyright 2025 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_RAINBOW_SWIRL + 2)
#define RGBLIGHT_SLEEP

#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B

#define ENCODERS_PAD_A { B3, B11, A10 }
#define ENCODERS_PAD_B { B4, B12, A9 }
