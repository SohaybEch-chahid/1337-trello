#include <stdio.h>
/*
unsigned char reverse_bits(unsigned char octet) {
  int left = 0;
  int right = 7;

  while (left < right) {
    if (((octet & (1 << left)) != 0) && ((octet & (1 << right)) != 0)) {
      left++;
      right--;
      continue;
    } else if (((octet & (1 << left)) == 0) && ((octet & (1 << right)) == 0)) {
      left++;
      right--;
      continue;
    } else {
      octet = (octet ^ (1 << left));
      octet = (octet ^ (1 << right));
    }
    left++;
    right--;
  }
  return (octet);
}*/

unsigned char reverse_bits(unsigned char octet) {
  unsigned char res = 0; // 0b00000000
  int i = 8;
  while (i) {
    res = ((res << 1) | (octet & 1));
    octet = (octet >> 1);
    i--;
  }
  return (res);
}

int main(int argc, char *argv[]) {
  unsigned char C = reverse_bits(8);
  printf("%d\n", C);
  return (0);
}
