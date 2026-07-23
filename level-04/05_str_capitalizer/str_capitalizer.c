#include <unistd.h>

void str_capitalizer(int argc, char **argv) {
  if (argc >= 2) {
    int current = 1;
    int len = (argc - 1);

    while (current <= len) {
      int i = 0;
      char C;
      while (argv[current][i]) {
        if ((i == 0) && (argv[current][i] >= 'a' && argv[current][i] <= 'z'))
          C = argv[current][i] - 32;
        else if ((i != 0) &&
                 (argv[current][i - 1] == 32 || argv[current][i - 1] == 9) &&
                 (argv[current][i] >= 'a' && argv[current][i] <= 'z'))
          C = argv[current][i] - 32;
        else if ((i != 0) &&
                 (argv[current][i - 1] != 32 && argv[current][i - 1] != 9) &&
                 (argv[current][i] >= 'A' && argv[current][i] <= 'Z'))
          C = argv[current][i] + 32;
        else
          C = argv[current][i];
        write(1, &C, 1);
        i++;
      }
      current++;
      write(1, "\n", 1);
    }
  } else
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  str_capitalizer(argc, argv);
  return (0);
}
