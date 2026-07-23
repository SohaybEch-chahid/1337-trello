int ft_length(char *str) {
  int len = 0;
  while (str[len])
    len++;
  return (len);
}

void ft_swap(char *c1, char *c2) {
  char swap = *c1;
  *c1 = *c2;
  *c2 = swap;
}

char *ft_strrev(char *str) {
  int len = ft_length(str);

  int start = 0;
  int end = len - 1;
  while (start < end) {
    ft_swap(&str[start], &str[end]);
    start++;
    end--;
  }
  return (str);
}
