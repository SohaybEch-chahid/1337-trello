#include <unistd.h>

void hello() {
  write (1, "Hello World!\n", 13);
}

int main(int argc, char *argv[]) {
  hello();
  return (0);
}
