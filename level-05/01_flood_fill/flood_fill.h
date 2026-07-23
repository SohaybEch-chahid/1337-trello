#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

#include "t_point.h"

void flood_fill(char **tab, t_point size, t_point begin);
char **create_tab(char area[5][5], t_point size);
void print_tab(char **tab, t_point size);

#endif
