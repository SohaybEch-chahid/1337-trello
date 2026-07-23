#include <unistd.h>

void aff_a(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;
    while (argv[1][i] != '\0') {
      if (argv[1][i] == 'a') {
        write(1, "a\n", 2);
        return;
      }
      i++;
    }
  } else {
    write(1, "a", 1);
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  aff_a(argc, argv);
  return (0);
}
