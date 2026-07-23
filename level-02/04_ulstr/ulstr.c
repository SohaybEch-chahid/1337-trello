#include <unistd.h>

void ulstr(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;
    char C;
    while (argv[1][i]) {
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
        C = argv[1][i] - 32;
        write(1, &C, 1);
      } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
        C = argv[1][i] + 32;
        write(1, &C, 1);
      } else
        write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  ulstr(argc, argv);
  return (0);
}
