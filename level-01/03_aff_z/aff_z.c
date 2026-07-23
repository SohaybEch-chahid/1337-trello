#include <unistd.h>

void aff_z (int argc, char** argv) {
  write (1, "z\n", 2); // display z followed by a newline in all cases

}

int main(int argc, char *argv[]) {
  aff_z (argc, argv);
  return 0;
}
