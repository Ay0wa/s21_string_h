#include "../s21_string.h"

int s21_strncmp(const char *s1, const char *s2, s21_size_t n) {
  if (n == 0) return (0);
  do {
    if (*s1 != *s2++) return (*(unsigned char *)s1 - *(unsigned char *)--s2);
    if (*s1++ == 0) break;
  } while (--n != 0);
  return (0);
}