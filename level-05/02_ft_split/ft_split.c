#include <stdlib.h>

int is_sep(char C) { return (C == ' ' || C == 9 || C == '\n'); }

int ft_count_words(char *str) {
  int word = 0;

  while (*str) {
    while (*str && is_sep(*str)) {
      str++;
    }
    if (*str) {
      word++;
    }
    while (*str && !is_sep(*str))
      str++;
  }
  return (word);
}

int ft_word_len(char *str) {
  int len = 0;

  while (str[len] && !is_sep(str[len]))
    len++;
  return (len);
}

char **ft_split(char *str) {
  char **res;
  int words;
  int i;
  int j;
  int len;

  words = ft_count_words(str);
  res = malloc((sizeof(char *)) * (words + 1));
  if (!res)
    return (0);

  i = 0;
  while (i < words) {
    while (*str && is_sep(*str))
      str++;

    len = ft_word_len(str);
    res[i] = malloc(len + 1);
    if (!res[i])
      return (0);

    j = 0;
    while (j < len) {
      res[i][j] = str[j];
      j++;
    }

    res[i][j] = '\0';
    str += len;
    i++;
  }
  res[i] = 0;
  return (res);
}
