#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *castedStr = (unsigned char *)str;
  for (unsigned int i = 0; i < n; ++i) {
    if (castedStr[i] == c) {
      return (void *)&castedStr[i];
    }
  }

  return 0;
}