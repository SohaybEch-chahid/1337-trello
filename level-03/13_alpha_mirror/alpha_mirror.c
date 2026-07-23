#include <unistd.h>

void alpha_mirror(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;
    int mirror;

    while (argv[1][i]) {
      if ((argv[1][i] >= 'a') && (argv[1][i] <= 'm')) {
        mirror = (argv[1][i] + (25 - ((argv[1][i] - 97) * 2)));
        write(1, &mirror, 1);
      } else if ((argv[1][i] >= 'n') && (argv[1][i] <= 'z')) {
        mirror = (argv[1][i] - (((argv[1][i] - 97) * 2) - 25));
        write(1, &mirror, 1);
      } else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'M')) {
        mirror = (argv[1][i] + (25 - ((argv[1][i] - 65) * 2)));
        write(1, &mirror, 1);
      } else if ((argv[1][i] >= 'N') && (argv[1][i] <= 'Z')) {
        mirror = (argv[1][i] - (((argv[1][i] - 65) * 2) - 25));
        write(1, &mirror, 1);
      } else
        write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  alpha_mirror(argc, argv);
  return (0);
}
