#include "../s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  const char *s1 = str1;
  const char *s2;

  while (*s1 != '\0') {
    s2 = str2;
    while (*s2 != '\0') {
      if (*s2 == *s1) {
        return (char *)s1;
      }
      s2++;
    }
    s1++;
  }

  return NULL;
}