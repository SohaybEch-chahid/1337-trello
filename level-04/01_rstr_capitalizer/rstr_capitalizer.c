#include <unistd.h>

void ft_rstr_capitalizer(int argc, char **argv) {
  if (argc >= 2) {
    int len = 1;
    while (argv[len]) {
      int i = 0;
      char C;
      while (argv[len][i]) {
        if ((argv[len][i + 1] == 32) || (argv[len][i + 1] == 9) ||
            (argv[len][i + 1] == '\0')) {
          if ((argv[len][i] >= 'a') && (argv[len][i] <= 'z'))
            C = argv[len][i] - 32;
          else
            C = argv[len][i];

          write(1, &C, 1);
        } else {
          if ((argv[len][i] >= 'A') && (argv[len][i] <= 'Z'))
            C = argv[len][i] + 32;
          else
            C = argv[len][i];

          write(1, &C, 1);
        }
        i++;
      }
      len++;
      write(1, "\n", 1);
    }
  } else
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  ft_rstr_capitalizer(argc, argv);
  return (0);
}
