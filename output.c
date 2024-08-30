#include <stdio.h>
#include "output.h"

#define ESC '\x1b'
#define START_CSI '['
#define END_CSI 'm'
#define BLACK_START 30


void setForegroundColorBasic(enum basicColor newColor)
{
  setForegroundColor256(newColor);
}

void setForegroundColor256(unsigned char ch)
{
  printf("%c[38;5;%dm",ESC,ch);
}

void setBackgroundColorBasic(enum basicColor newColor)
{
  setBackgroundColor256(newColor);
}

void setBackgroundColor256(unsigned char ch)
{
  printf("%c[48;5;%dm",ESC,ch);
}
