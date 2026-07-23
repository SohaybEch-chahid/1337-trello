#include <unistd.h>

void maff_revalpha() {
  char lower, upper;

  lower = 'z';
  upper = 'Y';

  while (lower >= 'a' && upper >= 'A') {
    write(1, &lower, 1);
    write(1, &upper, 1);

    lower -= 2;
    upper -= 2;
  }
  write(1, "\n", 1);
}

int main() {
  maff_revalpha();
  return (0);
}
