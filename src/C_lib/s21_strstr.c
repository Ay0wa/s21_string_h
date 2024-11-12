#include "../s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  if (!*needle) {
    return (char *)haystack;
  }

  for (const char *s1 = haystack; *s1; s1++) {
    const char *s1_start = s1;
    const char *s2 = needle;

    while (*s1_start && *s2 && (*s1_start == *s2)) {
      s1_start++;
      s2++;
    }

    if (!*s2) {
      return (char *)s1;
    }
  }

  return NULL;
}