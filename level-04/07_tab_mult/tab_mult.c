#include <unistd.h>

int ft_atoi(char *str) {
  int nb = 0;

  int i = 0;
  while (str[i]) {
    nb = (nb * 10) + (str[i] - '0');
    i++;
  }
  return (nb);
}

void ft_putnb(int nb) {
  char C;

  if (nb <= 9) {
    C = nb + '0';
    write(1, &C, 1);
    return;
  }

  while (nb > 9) {
    ft_putnb(nb / 10);
    nb %= 10;
  }
  C = nb + '0';
  write(1, &C, 1);
}

void tab_mult(int argc, char **argv) {
  if (argc == 2) {
    int nb = ft_atoi(argv[1]);

    int i = 1;
    while (i <= 9) {
      char C1 = i + '0';

      write(1, &C1, 1);
      write(1, " ", 1);
      write(1, "x", 1);
      write(1, " ", 1);
      ft_putnb(nb);
      write(1, " ", 1);
      write(1, "=", 1);
      write(1, " ", 1);
      ft_putnb(nb * i);
      write(1, "\n", 1);

      i++;
    }
  } else
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  tab_mult(argc, argv);
  return (0);
}
