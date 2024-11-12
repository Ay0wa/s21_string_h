#include "../s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *saved_str = NULL;
  if (str != NULL) {
    saved_str = str;
  } else if (saved_str == NULL) {
    return NULL;
  }

  while (*saved_str && s21_strchr(delim, *saved_str)) {
    saved_str++;
  }

  if (*saved_str == '\0') {
    return NULL;
  }

  char *token_start = saved_str;

  while (*saved_str && !s21_strchr(delim, *saved_str)) {
    saved_str++;
  }

  if (*saved_str != '\0') {
    *saved_str = '\0';
    saved_str++;
  }

  return token_start;
}