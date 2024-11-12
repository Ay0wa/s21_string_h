#include "../s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char ch = (char)c;
  char *last_occurrence = NULL;

  while (*str != '\0') {
    if (*str == ch) {
      last_occurrence = (char *)str;
    }
    str++;
  }

  if (ch == '\0') {
    return (char *)str;
  }

  return last_occurrence;
}