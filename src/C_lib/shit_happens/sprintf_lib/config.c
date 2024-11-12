#include "config.h"

int config(char *buffer, const char *format, Mod *mod, va_list *args) {
  int accuracy = 0;
  accuracy = set_accuracy(mod->accuracy, *format);
  int chut_chut_tyda = 0;
  switch (*format) {
    case '%':
      s21_strcat(buffer, "%");
      break;
    case 'd':
    case 'i':
      if (mod->type == 'h')
        s21_itoa_short(va_arg(*args, int), buffer + chut_chut_tyda, mod->flag,
                       accuracy);
      else if (mod->type == 'l')
        s21_itoa_long(va_arg(*args, long int), buffer + chut_chut_tyda,
                      mod->flag, accuracy);
      else
        s21_itoa(va_arg(*args, int), buffer + chut_chut_tyda, mod->flag,
                 accuracy);
      break;
    case 'f':
      if (mod->type == 'L')
        s21_ftoa_long(va_arg(*args, long double), buffer + chut_chut_tyda,
                      accuracy, mod->flag);
      else
        s21_ftoa(va_arg(*args, double), buffer + chut_chut_tyda, accuracy,
                 mod->flag);
      break;
    case 'c':
      s21_ctos(buffer + chut_chut_tyda, va_arg(*args, int), mod->flag,
               mod->width);
      break;
    case 's':
      s21_stos(buffer + chut_chut_tyda, args, accuracy, mod->type);
      break;
    case 'p':
      s21_ptos(buffer + chut_chut_tyda, va_arg(*args, void *));
      break;
    case 'e':
      if (mod->type == 'L')
        s21_ntoa_long(va_arg(*args, long double), buffer + chut_chut_tyda,
                      accuracy, mod->flag);
      else
        s21_ntoa(buffer + chut_chut_tyda, va_arg(*args, double), accuracy,
                 mod->flag, *format, 0);
      break;
    case 'E':
      if (mod->type == 'L')
        s21_ntoa_long(va_arg(*args, long double), buffer + chut_chut_tyda,
                      accuracy, mod->flag);
      else
        s21_ntoa(buffer + chut_chut_tyda, va_arg(*args, double), accuracy,
                 mod->flag, *format, 0);
      break;
    case 'u':
      s21_utoa(buffer + chut_chut_tyda, va_arg(*args, unsigned int), 10,
               accuracy, mod->flag, "0123456789abcdef");
      break;
    case 'o':
      s21_utoa(buffer + chut_chut_tyda, va_arg(*args, unsigned int), 8,
               accuracy, mod->flag, "0123456789abcdef");
      break;
    case 'x':
    case 'X':
      if (*format == 'x') {
        s21_utoa(buffer + chut_chut_tyda, va_arg(*args, unsigned int), 16,
                 accuracy, mod->flag, "0123456789abcdef");
      } else {
        s21_utoa(buffer + chut_chut_tyda, va_arg(*args, unsigned int), 16,
                 accuracy, mod->flag, "0123456789ABCDEF");
      }

      break;
    case 'g':
    case 'G':
      if (mod->type == 'L')
        s21_gtoa_long(va_arg(*args, long double), buffer + chut_chut_tyda,
                      mod->flag, accuracy);
      else
        s21_gtoa(buffer + chut_chut_tyda, va_arg(*args, double), accuracy,
                 mod->flag, *format);
      break;
    default:
      break;
  }
  s21_strchr("n%c", *format) ? 0
                             : fill_str(buffer + chut_chut_tyda, *mod, *format);
  return s21_strlen(buffer);
}

int set_accuracy(int accuracy, int format) {
  if (accuracy < 0) {
    s21_strchr("diouxX", format) ? accuracy = 1 : 0;
    s21_strchr("eEfgG", format) ? accuracy = 6 : 0;
    s21_strchr("p", format) ? accuracy = 16 : 0;
  }
  return accuracy;
}

char *fill_str(char *str, Mod mod, char format) {
  if (s21_strcmp(mod.flag, "xxxxx") || mod.width >= 0 || mod.type != 'x') {
    if (s21_strchr("gG", format) && mod.flag[3] != 'o') {
      if (!(s21_strlen(str) == 1 && str[0] == '0')) {
        for (int x = (s21_strlen(str) - 1); str[x] == '0';
             str[x] = '\0', x -= 1)
          continue;
      }
    }
  }
  char *aux = str;
  char filler = ' ';
  int countFill = mod.width > 0 ? mod.width - s21_strlen(str) : 0;
  if (mod.flag[4] == 'o') {
    aux[0] == '-' ? aux += 1 : 0;
    s21_strchr("cs", format) ? 0 : (filler = '0');
  } else if (mod.flag[0] == 'o') {
    aux += s21_strlen(aux);
  }
  if (countFill > 0) {
    for (s21_memmove(aux + countFill, aux, s21_strlen(aux) + 1);
         countFill != 0;) {
      aux[countFill - 1] = filler;
      countFill -= 1;
    }
  }
  return str;
}

const char *parse_modifiers(const char *format, Mod *mod, va_list *args) {
  while (s21_strchr("-+ #0", *format)) {
    switch (*format) {
      case '-':
        (mod->flag)[0] = 'o';
        break;
      case '+':
        (mod->flag)[1] = 'o';
        break;
      case ' ':
        (mod->flag)[2] = 'o';
        break;
      case '#':
        (mod->flag)[3] = 'o';
        break;
      case '0':
        (mod->flag)[4] = 'o';
        break;
      default:
        break;
    }
    format++;
  }
  while (s21_strchr("1234567890", *format)) {
    mod->width = (mod->width * 10) + (*format - 48);
    format++;
  }
  while (s21_strchr("*", *format)) {
    mod->width = va_arg(*args, int);
    format++;
  }
  if (*format == '.') {
    format++;
    if (*format == '*') {
      mod->accuracy = va_arg(*args, int);
      format++;
    } else if (s21_strchr("1234567890", *format)) {
      while (s21_strchr("1234567890", *format)) {
        mod->accuracy = (mod->accuracy * 10) + (*format - 48);
        format++;
      }
    } else {
      mod->accuracy = 0;
    }
  }
  while (s21_strchr("hlL", *format)) {
    mod->type = *format;
    format++;
  }

  return format;
}
