int	ft_strlen(char *str) {
  int current = 0;
  while (str[current])
    current++;

  return (current);
}
