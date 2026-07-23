#include <unistd.h>

void only_z() {
  write (1, "z", 1);
}

int main() {
  only_z();
  return (0);
}
