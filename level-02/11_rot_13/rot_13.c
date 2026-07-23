#include <unistd.h>

void rot_13(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;
    char C;
    while (argv[1][i]) {
      C = argv[1][i];
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
        C = (argv[1][i] > 'm') ? argv[1][i] - 13 : argv[1][i] + 13;
      } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
        C = (argv[1][i] > 'M') ? argv[1][i] - 13 : argv[1][i] + 13;
      }
      write(1, &C, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  rot_13(argc, argv);
  return (0);
}
