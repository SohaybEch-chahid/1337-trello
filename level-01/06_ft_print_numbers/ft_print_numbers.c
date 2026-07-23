#include <unistd.h>

void ft_print_numbers(void) {
  int i = 0;
  char C;
  while (i < 10) {
    C = i + '0';
    write(1, &C, 1);
    i++;
  }
}
