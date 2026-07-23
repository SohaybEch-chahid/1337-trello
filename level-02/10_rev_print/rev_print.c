#include <unistd.h>

int ft_strlen(char *str) {
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

void rev_print(int argc, char **argv) {
  if (argc == 2) {
    int current = ft_strlen(argv[1]) - 1;
    while (current >= 0) {
      write(1, &argv[1][current], 1);
      current--;
    }
  }
  write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
  rev_print(argc, argv);
  return (0);
}
