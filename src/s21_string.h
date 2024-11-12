#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#include <ctype.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#include "headers/s21_sprintf.h"

#define s21_NULL ((void *)0)

typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str);
s21_size_t s21_strspn(const char *str1, const char *str2);
char *s21_strtok(char *str, const char *delim);
char *s21_strcpy(char *destptr, const char *srcptr);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strcat(char *destptr, const char *srcptr);
void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t size);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strchr(const char *str, int c);
size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errorNumber);
int s21_strncmp(const char *s1, const char *s2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
int s21_strcmp(const char *str_1, const char *str_2);

void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_to_lower(const char *str);
void *s21_to_upper(const char *str);
void *s21_trim(const char *src, const char *trim_chars);

#endif