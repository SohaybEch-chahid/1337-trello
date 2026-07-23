size_t ft_strcspn(const char *s, const char *reject) {
  int hash[256] = {0};
  size_t count = 0;

  int i = 0;
  while (reject[i]) {
    hash[(unsigned char)reject[i]] = 1;
    i++;
  }

  i = 0;
  while (s[i]) {
    if (hash[(unsigned char)s[i]] == 1)
      return (count);
    count++;
    i++;
  }
  return (count);
}
