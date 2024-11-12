#include "../s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *d = dest;
  const char *s = src;
  size_t i;

  while (*d != '\0') {
    d++;
  }

  for (i = 0; i < n && *s != '\0'; i++) {
    *d = *s;
    d++;
    s++;
  }

  *d = '\0';

  return dest;
}