#include <unistd.h>

int ft_atoi(char *str) {
  int nb = 0;
  int sign = 1;
  int i = 0;

  if (str[i] == '-') {
    sign *= (-1);
    i++;
  }

  while (str[i]) {
    nb = (nb * 10) + (str[i] - '0');
    i++;
  }
  return (sign * nb);
}

int is_prime(int nb) {
  if (nb <= 1)
    return (0);

  int i = (nb - 1);

  while (i > 1) {
    if (nb % i == 0)
      return (0);
    i--;
  }
  return (1);
}

void ft_putnb(int nb) {
  char C;

  if (nb > 9) {
    ft_putnb(nb / 10);
    nb %= 10;
  }

  C = nb + '0';
  write(1, &C, 1);
}

void add_prime_sum(int ac, char **av) {
  if (ac == 2) {
    int nb = ft_atoi(av[1]);
    int res = 0;

    if (nb < 0) {
      write(1, "0", 1);
      write(1, "\n", 1);
      return;
    }

    int i = 2;
    while (i <= nb) {
      if (is_prime(i)) {
        res += i;
      }
      i++;
    }
    ft_putnb(res);
    write(1, "\n", 1);
  } else {
    write(1, "0", 1);
    write(1, "\n", 1);
  }
}

int main(int argc, char *argv[]) {
  add_prime_sum(argc, argv);
  return (0);
}
