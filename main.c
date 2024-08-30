#include<stdio.h>
#include<stdlib.h>
#include"output.h"

int main( void )
{
  setForegroundColorBasic(COLOR_STANDARD_RED);
  printf("Test\n");
  setForegroundColorBasic(COLOR_VIBRANT_WHITE);
  setForegroundColor256(221);
  printf("Test\n");
  setForegroundColorBasic(COLOR_VIBRANT_WHITE);
  return EXIT_SUCCESS;
}
