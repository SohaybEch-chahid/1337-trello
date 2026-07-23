#include <stdlib.h>

int *ft_range(int start, int end) {
  int flag = 0;
  int len = (end - start);
  if (len < 0) {
    flag = 1;
    len *= -1;
  }
  int *answer = (int *)malloc((len + 1) * sizeof(int));
  if (!answer)
    return (answer);

  int i = 0;
  while (i <= len) {
    if (flag == 1)
      *(answer + i) = (start - i);
    else
      *(answer + i) = (start + i);
    i++;
  }
  return (answer);
}
