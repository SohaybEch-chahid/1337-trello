#include <stdlib.h>
#include <stdio.h>
#include "t_point.h"

char **create_tab(char area[5][5], t_point size) {
  char **ret;
  int x;
  int y;

  x = 0;
  y = 0;
  ret = (char **)malloc(sizeof(char *) * size.y);
  while (y < size.y) {
    x = 0;
    ret[y] = (char *)malloc(sizeof(char) * size.x);
    while (x < size.x) {
      ret[y][x] = area[y][x];
      x++;
    }
    y++;
  }
  return (ret);
}
void print_tab(char **tab, t_point size) {
  for (int i = 0; i < size.y; i++) {
    for (int j = 0; j < size.x; j++) {
      printf("%c", tab[i][j]);
    }
    printf("\n");
  }
}
