#include <unistd.h>

void hidenp(int argc, char **argv) {
  if (argc == 3) {
    int i = 0;
    int j = 0;
    char C;
    while (argv[2][j]) {
      if (argv[2][j] == argv[1][i])
        i++;

      if (argv[1][i] == '\0') {
        C = 1 + '0';
        write(1, &C, 1);
        break;
      }
      j++;
    }
    if (argv[1][i] != '\0') {
      C = 0 + '0';
      write(1, &C, 1);
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  hidenp(argc, argv);
  return (0);
}
