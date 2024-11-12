#ifndef SRC_LIB_SHIT_HAPPENS_SPRINTF_LIB_CONFIG_H_
#define SRC_LIB_SHIT_HAPPENS_SPRINTF_LIB_CONFIG_H_

#include <stdarg.h>
#include <stdio.h>

#include "../../../headers/s21_sprintf.h"
#include "../../../s21_string.h"
#include "numtostring.h"

int config(char *buffer, const char *format, Mod *mod, va_list *args);
int set_accuracy(int accuracy, int format);
char *fill_str(char *str, Mod mod, char format);
const char *parse_modifiers(const char *format, Mod *mod, va_list *args);

#endif