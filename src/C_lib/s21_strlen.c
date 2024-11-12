#include "../s21_string.h"

size_t s21_strlen(const char *str) {
  unsigned int i = 0;
  while (str[i] != '\0') {
    ++i;
  }

  return i;
}