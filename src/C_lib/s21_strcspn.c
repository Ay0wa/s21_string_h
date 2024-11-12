#include "../s21_string.h"

size_t s21_strcspn(const char *str1, const char *str2) {
  unsigned int i = 0;
  while (str1[i] != '\0') {
    if (s21_strchr(str2, str1[i])) {
      break;
    }
    ++i;
  }

  return i;
}