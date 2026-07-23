#include <unistd.h>

void rotone(int argc, char **argv) {

  if (argc == 2) {
    int i = 0;
    while (argv[1][i]) {
      char C = argv[1][i];
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
        if (argv[1][i] == 'z')
          C = 'a';
        else
          C = argv[1][i] + 1;
      } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
        if (argv[1][i] == 'Z')
          C = 'A';
        else
          C = argv[1][i]+ 1;
      }
      write(1, &C, 1);
      i++;
    }
  }

  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  rotone(argc, argv);
  return (0);
}
