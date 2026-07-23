size_t ft_strspn(const char *s, const char *accept) {
  int hash[256] = {0};
  size_t length = 0;

  int i = 0;
  while (accept[i]) {
    hash[(unsigned char)accept[i]] = 1;
    i++;
  }

  i = 0;
  while (s[i]) {
    if (hash[(unsigned char)s[i]] == 1)
      length++;
    else
      return (length);
    i++;
  }
  return (length);
}
