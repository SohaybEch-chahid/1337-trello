#include <unistd.h>

int is_sep(char C) { return (C == ' ' || C == 9 || C == '\n'); }

void restring(int ac, char **av) {
  if (ac > 1) {
    int i;
    int printed = 0;
    int start;
    int end;

    i = 0;
    while (av[1][i] && is_sep(av[1][i]))
      i++;

    start = i;
    while (av[1][i] && !is_sep(av[1][i])) {
      i++;
    }
    end = i;

    while (av[1][i] && is_sep(av[1][i]))
      i++;

    while (av[1][i]) {

      if (printed)
        write(1, " ", 1);
      while (av[1][i] && !is_sep(av[1][i])) {
        write(1, &av[1][i], 1);
        i++;
      }

      printed = 1;

      while (av[1][i] && is_sep(av[1][i])) {
        i++;
      }
    }
    if (printed)
      write(1, " ", 1);

    while ((start < end) && (!is_sep(av[1][start]))) {
      write(1, &av[1][start], 1);
      start++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  restring(argc, argv);
  return (0);
}
