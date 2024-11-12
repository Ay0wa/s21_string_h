#include "../s21_string.h"

void *s21_memset(void *str, int c, size_t n) {
  unsigned char *s1 = (unsigned char *)str;
  unsigned char uc = (unsigned char)c;

  for (size_t i = 0; i < n; i++) {
    s1[i] = uc;
  }

  return str;
}