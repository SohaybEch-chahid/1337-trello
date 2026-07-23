#include <unistd.h>

int ft_strlen(char *str) {
  int len = 0;
  while (str[len]) {
    len++;
  }
  return (len);
}

void last_word(int argc, char **argv) {
  if (argc == 2) {
    int lenght = ft_strlen(argv[1]);
    // skip all spaces or tabs from the end
    int i = lenght - 1;
    while ((i >= 0) && ((argv[1][i] == 32) || (argv[1][i] == 9))) {
      i--;
    }
    int end = i;
    if (end == -1) {
      write(1, "\n", 1);
      return;
    }
      
    while ((i >= 0) && ((argv[1][i] != 32) && (argv[1][i] != 9))) {
      i--;
    }
    int start = i + 1;

    while (start <= end) {
      write(1, &argv[1][start], 1);
      start++;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  last_word(argc, argv);
  return (0);
}
