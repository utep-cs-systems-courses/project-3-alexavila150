/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

void draw_donut(int center);

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  
  //for(int row = 0; row < 10; row++){
  //for(int col = 0; col < row + 1; col++){
  //  drawPixel(col + 10, row, COLOR_WHITE);
  //  drawPixel((col - row) + 9, row, COLOR_WHITE);
  //}
  //}
  for(int i = 5; i < 120; i += 12){
    draw_donut(i);
  }
  
  
}

void draw_donut(int center)
{
  for(int r = center - 5; r < center + 7; r++){
    for(int c = center - 5; c < center + 7; c++){
      drawPixel(c, r, COLOR_WHITE);
    }
  }

  for(int r = center - 1; r < center + 3; r++){
    for(int c = center - 1; c < center + 3; c++){
      drawPixel(c, r, COLOR_BLUE);
    }
  }
}
