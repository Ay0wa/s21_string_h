#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../C_lib/shit_happens/sprintf_lib/config.h"
#include "../../headers/s21_sprintf.h"
#include "../../s21_string.h"

#define FORMAT_PLUS "+d"
#define FORMAT_GRID "#d"
#define FORMAT_WIDTH "5d"
#define FORMAT_ARG_WIDTH "*d"
#define FORMAT_ARG_ACCURACY ".*d"

void modifiers_plus_test(Mod mod) {
  va_list args;
  parse_modifiers(FORMAT_PLUS, &mod, &args);
  if ((mod.flag)[0] == 'o') {
    printf("PLUS MOD TEST PASSED LINE 19\n");
  } else {
    printf("PLUS MOD TEST ERROR LINE 19\n");
  }
}

void modifiers_grid_test(Mod mod) {
  va_list args;
  parse_modifiers(FORMAT_GRID, &mod, &args);
  if ((mod.flag)[1] == 'o') {
    printf("GRID MOD TEST PASSED LINE 29\n");
  } else {
    printf("GRID MOD TEST ERROR LINE 29\n");
  }
}

void modifiers_width_test(Mod mod) {
  va_list args;
  parse_modifiers(FORMAT_WIDTH, &mod, &args);
  if (mod.width == 5) {
    printf("WIDTH MOD TEST PASSED LINE 39\n");
  } else {
    printf("WIDTH MOD TEST ERROR LINE 39\n");
  }
}

void modifiers_arg_width_test(Mod mod, ...) {
  va_list args;
  va_start(args, mod);
  parse_modifiers(FORMAT_ARG_WIDTH, &mod, &args);
  if (mod.width == 5) {
    printf("WIDTH ARG MOD TEST PASSED LINE 49\n");
  } else {
    printf("WIDTH ARG MOD TEST ERROR LINE 49\n");
  }
}

void modifiers_arg_accuracy_test(Mod mod, ...) {
  va_list args;
  va_start(args, mod);
  parse_modifiers(FORMAT_ARG_ACCURACY, &mod, &args);
  if (mod.accuracy == 5) {
    printf("ACCURACY ARG MOD TEST PASSED LINE 60\n");
  } else {
    printf("ACCURACY ARG MOD TEST ERROR LINE 60\n");
  }
}

void config_int_test(const char *format, ...) {
  va_list args;
  va_start(args, format);
  Mod mod = {"xxxxxx", INT_MIN, INT_MIN, 'x'};
  char buffer[1024];
  int len = config(buffer, format, &mod, &args);
  if (s21_strcmp(buffer, "12") == 0 && len == 2) {
    printf("CONFIG_INT_TEST PASSED LINE 71\n");
  } else {
    printf("CONFIG_INT_TEST ERROR LINE 71\n");
  }
}

int main() {
  Mod mod = {0};
  config_int_test("d", 12);
  modifiers_plus_test(mod);
  modifiers_grid_test(mod);
  modifiers_width_test(mod);
  modifiers_arg_width_test(mod, 5);
  modifiers_arg_accuracy_test(mod, 5);
}
