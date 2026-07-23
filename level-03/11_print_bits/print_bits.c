#include <unistd.h>

void print_bits(unsigned char octet) {
  int i = 7;
  while (i >= 0) {
    int print_last = (octet & (1 << i));
    if (print_last > 0)
      print_last = 1;

    char C = print_last + '0';
    write(1, &C, 1);
    i--;
  }
}
