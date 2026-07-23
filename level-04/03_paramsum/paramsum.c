#include <unistd.h>

void ft_putnb(int nb) {
  char C;
  if (nb <= 9) {
    C = nb + '0';
    write(1, &C, 1);
    return;
  } else {
    ft_putnb(nb / 10);
    nb %= 10;
  }
  C = nb + '0';
  write(1, &C, 1);
}

void paramsum(int argc) {
  int param_sum = (argc - 1);
  ft_putnb(param_sum);
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  paramsum(argc);
  return (0);
}
