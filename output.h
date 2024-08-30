#ifndef OUTPUT
#define OUTPUT

enum basicColor {
  COLOR_STANDARD_BLACK,
  COLOR_STANDARD_RED,
  COLOR_STANDARD_GREEN,
  COLOR_STANDARD_YELLO,
  COLOR_STANDARD_BLUE,
  COLOR_STANDARD_MAGENTA,
  COLOR_STANDARD_CYAN,
  COLOR_STANDARD_WHITE,
  COLOR_VIBRANT_BLACK,
  COLOR_VIBRANT_RED,
  COLOR_VIBRANT_GREEN,
  COLOR_VIBRANT_YELLO,
  COLOR_VIBRANT_BLUE,
  COLOR_VIBRANT_MAGENTA,
  COLOR_VIBRANT_CYAN,
  COLOR_VIBRANT_WHITE,
};

/**
 * Sets the foreground color of the terminal using ansi escape codes
 * 
 * @param basicColor The standard color set
 */
void setForegroundColorBasic(enum basicColor);

/**
 * Sets the foreground color of the terminal using ANSI escape codes
 * this function uses 256 color mode
 *
 * @param ch The number index of the color code
 */
void setForegroundColor256(unsigned char ch);

/**
 * Sets the background color of the terminal using ANSI escape codes
 *
 * @param basicColor The standard color set
 */
void setBackgroundColorBasic(enum basicColor);


/**
 * Sets the background color of the terminal using ANSI escape codes
 * this function uses the 256 color mode.
 *
 * @param ch The number index of the color code
 */
void setBackgroundColor256(unsigned char ch);

#endif
