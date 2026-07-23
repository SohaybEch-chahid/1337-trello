#include <unistd.h>

void aff_first_param(int argc, char **argv) {
  if (argc >= 2) {
    char C;
    int i = 0;
    while (argv[1][i] != '\0') {
      C = argv[1][i];
      write(1, &C, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  aff_first_param(argc, argv);
  return (0);
}
