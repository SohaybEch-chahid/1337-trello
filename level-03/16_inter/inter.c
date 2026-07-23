#include <unistd.h>

void inter(int argc, char **argv) {
  if (argc == 3) {
    int hash[256] = {0};

    int i = 0;
    while (argv[1][i]) {
      if (hash[(unsigned char)argv[1][i]] == 0)
        hash[(unsigned char)argv[1][i]]++;
      i++;
    }

    i = 0;
    while (argv[2][i]) {
      if (hash[(unsigned char)argv[2][i]] == 1)
        hash[(unsigned char)argv[2][i]]++;
      i++;
    }

    i = 0;
    while (argv[1][i]) {
      if (hash[argv[1][i]] == 2) {
        hash[(unsigned char)argv[1][i]] = 0;
        write(1, &argv[1][i], 1);
      }
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  inter(argc, argv);
  return (0);
}
