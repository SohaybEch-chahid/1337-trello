#include <stdio.h>
#include <stdlib.h>

static int get_len(long nb, int base, int is_negative) {
  int len = 0;

  if (nb == 0)
    return (1);
  if (is_negative)
    len = 1; // to add '-'
  while (nb != 0) {
    len++;
    nb /= base;
  }
  return (len);
}

char *ft_itoa_base(int value, int base) {
  char *res;
  long nb;
  int len;
  int i;
  int is_negative;

  if (base < 2 || base > 16) // protection
    return (NULL);

  nb = value;
  is_negative = 0;
  if (base == 10 && nb < 0) {
    is_negative = 1;
    nb = -(long)nb;
  } else
    nb = (unsigned int)value; // if it's not a base 10 so is unsigned

  len = get_len(nb, base, is_negative);
  res = malloc(sizeof(char) * (len + 1));
  if (!res)
    return (0);

  res[len] = '\0';

  if (nb == 0)
    res[0] = '0';

  i = len - 1;
  while (nb > 0) {
    int mod = nb % base;
    if (mod < 10)
      res[i--] = mod + '0';
    else
      res[i--] = mod - 10 + 'A'; // 10 -> A, 11 -> B...
    nb /= base;
  }
  if (is_negative)
    res[0] = '-';
  return (res);
}

int main(void) {
  char *res = ft_itoa_base(42, 16);
  printf("%s\n", res); // 2A
  free(res);

  res = ft_itoa_base(-42, 10);
  printf("%s\n", res); // -42
  free(res);

  res = ft_itoa_base(-42, 16);
  printf("%s\n", res); // FFFFFFD6 -> switsh to binary first
  free(res);
  return (0);
}
