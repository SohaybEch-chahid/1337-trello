#include <unistd.h>

void ft_countdown() {
  int i = 9;
  char C;
  while (i >= 0) {
    C = i + '0';
    write(1, &C, 1);
    i--;
  }
  write(1,"\n",1);
}

int main(){
  ft_countdown();
  return (0);
}
