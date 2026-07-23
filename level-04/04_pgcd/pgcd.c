#include <stdio.h>
#include <stdlib.h>

void pgcd(int argc, char **argv) {
  if (argc == 3) {
    int f_nb = atoi(argv[1]);
    int l_nb = atoi(argv[2]);

    int i = 2;
    int pgcd = 1;
    while ((i <= f_nb) && (i <= l_nb)) {
      if ((f_nb % i == 0) && (l_nb % i == 0))
        pgcd = i;
      i++;
    }
    printf("%d", pgcd);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  pgcd(argc, argv);
  return (0);
}
