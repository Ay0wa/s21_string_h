#include "../s21_string.h"

s21_size_t s21_strspn(const char *str1, const char *str2) {
  const char *p1;
  const char *p2;
  s21_size_t count = 0;

  for (p1 = str1; *p1 != '\0'; p1++) {
    for (p2 = str2; *p2 != '\0'; p2++) {
      if (*p1 == *p2) {
        break;
      }
    }
    if (*p2 == '\0') {
      return count;
    }
    count++;
  }
  return count;
}