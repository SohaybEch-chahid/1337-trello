#include <unistd.h>

int ft_atoi(char *str) {
  int res = 0;
  int sign = 1;

  int i = 0;
  if (str[i] == '-') {
    sign *= (-1);
    i++;
  }

  while (str[i]) {
    res = (res * 10) + (str[i] - '0');
    i++;
  }
  return (sign * res);
}

void ft_puthex(int nb) {
  char C;
  if (nb <= 9) {
    C = nb + '0';
    write(1, &C, 1);
  }

  else if (nb >= 10 && nb <= 15) {
    C = ('a' + (nb - 10));
    write(1, &C, 1);
  }
}

void ft_print_hex(int nb) {
  int i = 0;
  int res = 0;
  if (nb >= 16)
    ft_print_hex(nb / 16);
  res = nb % 16;
  ft_puthex(res);
}

void print_hex(int argc, char **argv) {
  if (argc == 2) {
    int nb = ft_atoi(argv[1]);
    if (nb < 0) {
      write(1, "\n", 1);
      return;
    }

    ft_print_hex(nb);
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  print_hex(argc, argv);
  return (0);
}
