#include "../../headers/s21_sprintf.h"

#include "sprintf_lib/config.h"
#include "sprintf_lib/numtostring.h"

#define MAX_BUFFER_SIZE 1024

int s21_sprintf(char *buffer, const char *format, ...);

int s21_sprintf(char *buffer, const char *format, ...) {
  va_list args;
  va_start(args, format);
  char *buf_ptr = buffer;
  const char *fmt_ptr;
  int counter = 0;

  for (fmt_ptr = format; *fmt_ptr != '\0'; fmt_ptr++) {
    if (*fmt_ptr != '%') {
      buf_ptr[counter] = *fmt_ptr;
      buf_ptr[counter += 1] = '\0';
      continue;
    }
    fmt_ptr++;
    Mod mod = {"xxxxxx", INT_MIN, INT_MIN, 'x'};
    fmt_ptr = parse_modifiers(fmt_ptr, &mod, &args);
    if (*fmt_ptr == 'n') {
      *(va_arg(args, int *)) = counter;
    } else {
      counter += config(buffer + counter, fmt_ptr, &mod, &args);
    }
  }
  buf_ptr[counter + 1] = '\0';

  va_end(args);

  return s21_strlen(buffer);
}