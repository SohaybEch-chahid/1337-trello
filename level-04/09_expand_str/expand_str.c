#include <unistd.h>

void expande_str(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;

    // skip all spases and tabs from the begening
    // and check if is there any word to display
    while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9)) {
      i++;
    }

    while (argv[1][i]) {
      while (argv[1][i] && (argv[1][i] != 32 && argv[1][i] != 9)) {
        write(1, &argv[1][i], 1);
        i++;
      }

      while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9)) {
        i++;
      }

      if (argv[1][i])
        write(1, "   ", 3);
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  expande_str(argc, argv);
  return (0);
}
