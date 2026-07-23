#include <unistd.h>

void ft_display(char *str) {
  int i = 0;
  while (str[i]) {
    write(1, &str[i], 1);
    i++;
  }
  write(1, "\n", 1);
}

void wdmatch(int argc, char **argv) {
  if (argc == 3) {
    int i = 0;
    int j = 0;
    while (argv[2][j]) {
      if (argv[1][i] == argv[2][j]) {
        i++;
      }
      if (argv[1][i] == '\0') {
        ft_display(argv[1]);
        return;
      }
      j++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  wdmatch(argc, argv);
  return (0);
}
