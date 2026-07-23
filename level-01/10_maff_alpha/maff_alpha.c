#include <unistd.h>

void maff_alpha() {
  int lower = 'a';
  int upper = 'B';

  while (lower <= 'y' && upper <= 'Z') {
    write(1, &lower, 1);
    write(1, &upper, 1);

    lower += 2;
    upper += 2;
  }
  write (1, "\n", 1);
}

int main() {
  maff_alpha();
  return (0);
}
