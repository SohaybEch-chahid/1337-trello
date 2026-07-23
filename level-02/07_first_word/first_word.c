#include <unistd.h>

void first_word(int argc, char **argv) {
  if (argc == 2) {

    int i = 0;
    while (((argv[1][i] == 32) || (argv[1][i] == 9)) && argv[1][i])
      i++;

    while (argv[1][i]) {
      if ((argv[1][i] == 32) || (argv[1][i] == 9))
        break;
      write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  first_word(argc, argv);
  return (0);
}
