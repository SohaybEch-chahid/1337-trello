unsigned char swap_bits(unsigned char octet) {
  int left = (octet & 0b11110000);
  left = (left >> 4);

  int right = (octet & 0b00001111);
  right = (right << 4);

  return (left | right);

  // return ((octet & 0b11110000) >> 4 | (octet & 0b00001111) << 4);
}
