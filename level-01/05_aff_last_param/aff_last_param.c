#include <unistd.h>

void aff_last_param(int argc, char **argv) {
  if (argc > 1) {
    int i = 0;
    while (argv[argc - 1][i] != '\0') {
      char C = argv[argc - 1][i];
      write(1, &C, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  aff_last_param(argc, argv);
  return (0);
}
