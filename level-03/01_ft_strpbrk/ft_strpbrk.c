char *ft_strpbrk(const char *s1, char *s2) {
  int i = 0;
  int j;
  while (s1[i]) {
    j = 0;
    while (s2[j]) {
      if (s1[i] == s2[j])
        return ((char *)(s1 + i));
      j++;
    }
    i++;
  }
  return ((char *)0); // 0 in pointer context = NULL pointer
}
