#include <unistd.h>

void repeat_alpha(int argc, char **argv) {
  if (argc == 2) {
    int repeat;
    int i = 0;
    while (argv[1][i]) {
      if (argv[1][i] >= 97 && argv[1][i] <= 122) {
        repeat = (argv[1][i] - 97) + 1;
        while (repeat > 0) {
          write(1, &argv[1][i], 1);
          repeat--;
        }
      } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
        repeat = argv[1][i] - 'A' + 1;
        while (repeat > 0) {
          write(1, &argv[1][i], 1);
          repeat--;
        }
      } else
        write(1, &argv[1][i], 1);

      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  repeat_alpha(argc, argv);
  return (0);
}
