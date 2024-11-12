#ifndef SRC_HEADERS_S21_SPRINTF_H_
#define SRC_HEADERS_S21_SPRINTF_H_

#include <ctype.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct {
  char flag[10];
  int width;
  int accuracy;
  char type;
} Mod;

int s21_sprintf(char *buffer, const char *format, ...);

#endif