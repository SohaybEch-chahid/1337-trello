#include <stdlib.h>

int *ft_rrange(int start, int end) {
  int len = (start < end) ? (end - start + 1) : (start - end + 1);
  int *res = (int *)malloc(len * sizeof(int));
  if (!res)
    return (res);

  int i = 0;
  while (i < len) {
    if (end >= start)
      *(res + i) = (end - i);
    else if (end < start)
      *(res + i) = (end + i);

    i++;
  }
  return (res);
}
