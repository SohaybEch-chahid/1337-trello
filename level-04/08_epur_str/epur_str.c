#include <unistd.h>

int is_ft_skip(int index, char *str) {
  while (str[index]) {
    if (str[index] != 32 && str[index] != 9)
      return (1);
    index++;
  }
  return (0);
}

void epur_str(int argc, char **argv) {
  if (argc == 2) {
    int i = 0;

    // skip all spaces and tabs from the start and
    // if there are no words to display
    while (argv[1][i]) {
      if ((argv[1][i] == 32) || (argv[1][i] == 9))
        i++;
      else
        break;
    }
    if (argv[1][i] == '\0') {
      write(1, "\n", 1);
      return;
    }

    // start from the first character
    // skip all spaces and tabs from the end to the last character
    int flag = 1;
    while (argv[1][i]) {
      if ((argv[1][i] != 32) && (argv[1][i] != 9)) {
        write(1, &argv[1][i], 1);
        flag = 0;
      } else if (((argv[1][i] == 32) || (argv[1][i] == 9)) && (flag == 0) &&
                 (is_ft_skip(i, argv[1]))) {
        write(1, " ", 1);
        flag = 1;
      }
      i++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  epur_str(argc, argv);
  return (0);
}
