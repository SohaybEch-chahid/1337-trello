#include <unistd.h>

void search_and_replace(int argc, char **argv) {
  if (argc == 4) {

    if (argv[2][1] || argv[3][1]) {
      write (1, "\n", 1);
      return;
    }

    int i = 0;
    while (argv[1][i] != '\0') {
      if (argv[1][i] == argv[2][0])
        argv[1][i] = argv[3][0];

      char C = argv[1][i];
      write(1, &C, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  search_and_replace(argc, argv);
  return (0);
}
