#include <stdio.h>
#include <stdlib.h>

void fprime(int argc, char **argv) {
  if (argc == 2) {
    int nb = atoi(argv[1]);

    if (nb == 1) {
      printf("%d\n", nb);
      return;
    }

    int i = 2;
    while (nb > 1) {
      if (nb == i) {
        printf("%d", i);
        break;
      }

      while (nb % i == 0) {
        printf("%d*", i);
        nb /= i;
      }

      i++;
    }
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  fprime(argc, argv);
  return (0);
}
