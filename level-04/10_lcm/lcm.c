int ft_hcf(int a, int b) {
  int hcf = 1;
  int limit = (a < b) ? a : b;

  int i = 2;
  while (i <= limit) {
    if ((hcf < i) && (a % i == 0 && b % i == 0))
      hcf = i;
    i++;
  }
  return (hcf);
}

unsigned int lcm(unsigned int a, unsigned int b) {
  int lcm;

  int prod = a * b;
  if (prod == 0)
    return (0);

  int hcf = ft_hcf(a, b);

  lcm = prod / hcf;
  return (lcm);
}
