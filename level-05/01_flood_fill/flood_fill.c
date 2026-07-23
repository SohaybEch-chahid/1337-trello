#include "flood_fill.h"

void flood(char **tab, char C, t_point size, t_point begin) {

  t_point map[4];

  map[0].y = begin.y;
  map[0].x = begin.x + 1;

  map[1].y = begin.y;
  map[1].x = begin.x - 1;

  map[2].y = begin.y + 1;
  map[2].x = begin.x;

  map[3].y = begin.y - 1;
  map[3].x = begin.x;

  if (begin.x < 0 || begin.x > size.x || begin.y < 0 || begin.y > size.y)
    return;

  if (tab[begin.y][begin.x] != C || tab[begin.y][begin.x] == 'F')
    return;

  tab[begin.y][begin.x] = 'F';
  flood(tab, C, size, map[0]);
  flood(tab, C, size, map[1]);
  flood(tab, C, size, map[2]);
  flood(tab, C, size, map[3]);
}

void flood_fill(char **tab, t_point size, t_point begin) {
  char C = tab[begin.y][begin.x];

  flood(tab, C, size, begin);
}

