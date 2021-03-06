#pragma once

#include <pebble.h>

#define DEBUG_MODE true

// Layout
#define BEAM_WIDTH      30
#define BEAM_HEIGHT    101
#define HOUR_TENS_X    -13 
#define HOURS_UNITS_X   21
#define MINS_TENS_X     63
#define MINS_UNITS_X    97
#define X_OFFSET        14
#define LIFT_DURATION  300
#define LOWER_DURATION 300

// Settings keys
#define PERSIST_KEY_DATE     1
#define PERSIST_KEY_ANIM     2
#define PERSIST_KEY_BT       3
#define PERSIST_KEY_BATTERY  4
#define PERSIST_KEY_HOURLY   5
#define PERSIST_KEY_THEME    6

#define THEME_CLASSIC          0
#define THEME_GREEN            1
#define THEME_BLUE             2
#define THEME_RED              3
#define THEME_CLASSIC_INVERTED 4
#define THEME_MIDNIGHT         5
#define THEME_YELLOW           6

extern TextLayer *g_digits[5];
extern TextLayer *g_day_layer;
extern TextLayer *g_date_layer;
extern int g_state_now[4];
extern int g_state_prev[4];
extern char g_time_buffer[5];
extern char g_day_buffer[3];
extern char g_date_buffer[2];
extern bool g_do_animations;