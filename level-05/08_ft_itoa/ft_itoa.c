#include <stdlib.h>

int ft_nblen(long nbr) {
  int len;
  len = 0;
  if (nbr == 0)
    return (1);
  else if (nbr < 0) {
    len++;
    nbr *= -1;
  }
  while (nbr > 0) {
    len++;
    nbr /= 10;
  }
  return (len);
}

char *ft_itoa(int nbr) {
  char *res;
  long nb;
  int len;
  int i;

  len = ft_nblen(nbr);

  res = malloc(len + 1);
  if (!res)
    return (0);

  nb = nbr;
  if (nb < 0) {
    res[0] = '-';
    nb *= -1;
  }

  i = len - 1;
  if (nb == 0)
    res[0] = '0';
  while (nb > 0) {
    res[i--] = (nb % 10) + '0';
    nb /= 10;
  }
  res[len] = '\0';
  return (res);
}
