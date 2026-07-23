#include <unistd.h>

void ft_putnbr(int nb) {
  if (nb <= 9) {
    char C = nb + '0';
    write(1, &C, 1);
    return;
  } else {
    while (nb > 9) {
      ft_putnbr(nb / 10);
      nb = nb % 10;
    }
    ft_putnbr(nb);
  }
}

void fizzbuzz(int argc, char **argv) {
  int current = 1;
  while (current <= 100) {
    if ((current % 3) == 0 && (current % 5) == 0)
      write(1, "fizzbuzz\n", 9);
    else if ((current % 3) == 0)
      write(1, "fizz\n", 5);
    else if ((current % 5) == 0)
      write(1, "buzz\n", 5);
    else {
      ft_putnbr(current);
      write(1, "\n", 1);
    }
    current++;
  }
}

int main(int argc, char *argv[]) {
  //fizzbuzz(argc, argv);
  ft_putnbr(100);
  return (0);
}
