#ifndef SRC_LIB_SHIT_HAPPENS_SPRINTF_LIB_MODIFIERS_H_
#define SRC_LIB_SHIT_HAPPENS_SPRINTF_LIB_MODIFIERS_H_

#include "../../../s21_string.h"

char *s21_itoa(int n, char *s, char *flag, int accuracy);
char *s21_itoa_short(short int n, char *s, char *flag, int accuracy);
char *s21_itoa_long(long int n, char *s, char *flag, int accuracy);
char *s21_ftoa(double n, char *s, int accuracy, char *flag);
char *s21_ftoa_long(long double n, char *s, int accuracy, char *flag);
char *s21_gtoa(char *str, double number, int accuracy, char *flag,
               int poshli_vse_v_pizdu);
char *s21_gtoa_long(long double num, char *s, char *flag, int accuracy);
char *s21_ntoa(char *str, double number, int accuracy, char *flag, int symbol,
               int kostyl_2);
int s21_ctos(char *str, char param, char *flag, int width);
char *s21_stos(char *str, va_list *params, int accuracy, char type);
char *s21_ptos(char *str, void *ptr);
char *s21_utoa(char *str, unsigned int number, int base, int accuracy,
               const char *flag, char *fuck_society);
char *s21_ntoa_long(long double number, char *str, int accuracy, char *flag);
void trim_trailing_zeros(char *str);
void reverse(char *s, int *length);
void reverse_exp(char *s, int j, int i);
char *s21_ntoa_short(float number, char *str, int accuracy, char *flag);

#endif