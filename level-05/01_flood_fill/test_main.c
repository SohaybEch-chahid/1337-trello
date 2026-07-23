#include "flood_fill.h"
#include <stdio.h>

int main(void) {
  char tab[5][5] = {"11111", "10001", "10111", "10100", "11111"};
  char **area;

  t_point size = {5, 5};
  t_point begin = {1, 1};
  area = create_tab(tab, size);
  print_tab(area, size);
  flood_fill(area, size, begin);
  printf("\n\n\n\n");
  print_tab(area, size);
  return (0);
}
