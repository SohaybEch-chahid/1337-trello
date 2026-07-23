int ft_atoi(const char *str) {
  int result;
  int sign = 1;
  int i = 0;

  while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;

  while (str[i] == '+' || str[i] == '-') {
    if (str[i] == '-')
      sign = -sign;
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9') {
    result = (result * 10) + (str[i] - '0');
    i++;
  }

  return (result * sign);
}
