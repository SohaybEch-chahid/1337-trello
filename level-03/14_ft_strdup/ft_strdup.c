#include <stdlib.h>

int ft_length(char *str) {
  int count = 0;
  while (str[count])
    count++;
  return (count);
}

char *ft_strdup(char *src) {
  int len = ft_length(src);
  char *duplicate = malloc((len + 1) * sizeof(char));

  if (!duplicate)
    return (duplicate);

  int i = 0;
  while (src[i]) {
    duplicate[i] = src[i];
    i++;
  }
  duplicate[i] = '\0';

  return (duplicate);
}
