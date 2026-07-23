int get_value(char c) {
  int digit = 16;
  if (c >= '0' && c <= '9')
    digit = c - '0';
  else if ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) {
    if (c >= 'a' && c <= 'f')
      digit = (c - 'a') + 10;
    else
      digit = (c - 'A') + 10;
  }
  return (digit);
}

int ft_atoi_base(const char *str, int str_base) {
  if (str_base < 2 || str_base > 16)
    return (-1);

  int res = 0;
  int sign = 1;
  int i = 0;
  int val;

  if (str[0] == '-') {
    sign = -1;
    i = 1;
  }

  while (str[i]) {
    val = get_value(str[i]);
    if (val >= str_base)
      return (-1);

    res = (res * str_base) + val;
    i++;
  }

  return (sign * res);
}
