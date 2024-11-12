#include "numtostring.h"

#include <stdbool.h>

char *s21_itoa(int n, char *s, char *flag, int accuracy) {
  int i = 0, sign;
  long int num = n;
  bool left_align = false;
  bool force_sign = false;
  bool space_sign = false;
  bool zero_padding = false;

  if (flag[0] == 'o') left_align = true;
  if (flag[1] == 'o') force_sign = true;
  if (flag[2] == 'o') space_sign = true;
  if (flag[3] == 'o') left_align = true;
  if (flag[4] == 'o') zero_padding = true;

  if ((sign = num) < 0) num = -num;

  do {
    s[i++] = num % 10 + '0';
    accuracy -= 1;
  } while ((num /= 10) > 0 || (accuracy > 0));
  if (sign < 0) {
    s[i++] = '-';
  } else if (force_sign) {
    s[i++] = '+';
  } else if (space_sign) {
    s[i++] = ' ';
  }
  if (zero_padding && !left_align) {
    while (i < accuracy) {
      s[i++] = '0';
    }
  }
  reverse(s, &i);
  if (left_align) {
    while (i < accuracy) {
      s[i++] = ' ';
    }
  }
  s[i] = '\0';
  return s;
}

char *s21_itoa_short(short int n, char *s, char *flag, int accuracy) {
  int i = 0, sign;
  bool left_align = false;
  bool force_sign = false;
  bool space_sign = false;
  bool zero_padding = false;

  if (flag[0] == 'o') left_align = true;
  if (flag[1] == 'o') force_sign = true;
  if (flag[2] == 'o') space_sign = true;
  if (flag[3] == 'o') left_align = true;
  if (flag[4] == 'o') zero_padding = true;

  if ((sign = n) < 0) n = -n;

  // Преобразование числа в строку
  do {
    s[i++] = n % 10 + '0';
    accuracy -= 1;
  } while ((n /= 10) > 0 || (accuracy > 0));

  // Обработка знаков
  if (sign < 0) {
    s[i++] = '-';
  } else if (force_sign) {
    s[i++] = '+';
  } else if (space_sign) {
    s[i++] = ' ';
  }

  s[i] = '\0';

  // Разворачиваем строку
  reverse(s, &i);

  // Заполнение нулями
  if (zero_padding && !left_align) {
    int len = s21_strlen(s);
    int sign_len = (sign < 0 || force_sign || space_sign) ? 1 : 0;
    while (len < accuracy + sign_len) {
      for (int j = len; j > 0; j--) {
        s[j] = s[j - 1];
      }
      s[0] = '0';
      len++;
    }
    // Перемещаем знак в начало строки, если он есть
    if (sign < 0 || force_sign || space_sign) {
      s[0] = (sign < 0) ? '-' : (force_sign ? '+' : ' ');
    }
  }

  // Заполнение пробелами для выравнивания по левому краю
  if (left_align) {
    int len = s21_strlen(s);
    while (len < accuracy) {
      s[len++] = ' ';
    }
    s[len] = '\0';
  }

  return s;
}

char *s21_itoa_long(long int n, char *s, char *flag, int accuracy) {
  int i = 0, sign = 0;
  char sign_char = '\0';

  bool force_sign = false;
  bool space_sign = false;

  // Process flags
  if (flag[1] == 'o') force_sign = true;
  if (flag[2] == 'o') space_sign = true;

  // Handle negative numbers
  if ((sign = n) < 0) {
    n = -n;
    sign_char = '-';
  } else {
    if (force_sign) {
      sign_char = '+';
    } else if (space_sign) {
      sign_char = ' ';
    }
  }

  // Convert number to string
  do {
    s[i++] = n % 10 + '0';
    n /= 10;
  } while (n > 0);

  // Handle accuracy (precision)
  while (i < accuracy) {
    s[i++] = '0';
  }

  // Add sign if necessary
  if (sign_char != '\0') {
    s[i++] = sign_char;
  }

  s[i] = '\0';

  // Reverse the string
  reverse(s, &i);

  return s;
}

// Helper function to round double to the given accuracy
double s21_round(double number, int accuracy) {
  double factor = pow(10.0, accuracy);
  return round(number * factor) / factor;
}

void format_fractional_part(char *s, double fpart, int accuracy,
                            int hash_flag) {
  int i = s21_strlen(s);  // Инициализация i длиной существующей строки
  // printf("accuracy: %d hash_flag: %d\n", accuracy, hash_flag);
  // Обработка дробной части
  if (accuracy > 0 || hash_flag) {
    s[i++] = '.';

    for (int j = 0; j < accuracy; j++) {
      fpart *= 10;
      int digit = (int)fpart;
      s[i++] = digit + '0';
      fpart -= digit;
    }

    // Округление последней цифры
    fpart *= 10;
    if ((int)fpart >= 5) {
      for (int k = i - 1; k >= 0; k--) {
        if (s[k] == '.') continue;
        if (s[k] < '9') {
          s[k]++;
          break;
        } else {
          s[k] = '0';
        }
      }
    }
  }
  s[i] = '\0';  // Добавляем завершающий нулевой символ
}

char *s21_ftoa(double n, char *s, int accuracy, char *flag) {
  // printf("FTOA accuracy: %d\n", accuracy);
  bool left_align = false;
  bool force_sign = false;
  bool zero_padding = false;
  bool hash_flag = false;

  if (flag[0] == 'o') left_align = true;
  if (flag[1] == 'o') force_sign = true;
  if (flag[3] == 'o') zero_padding = true;
  if (flag[4] == 'o') hash_flag = true;

  bool is_negative = (n < 0);
  if (is_negative) {
    n = -n;
  }

  int ipart = (int)n;
  double fpart = n - (double)ipart;

  // Round fractional part
  fpart = s21_round(fpart, accuracy);
  // printf("FTOA fpart %lf\n", fpart);

  // If rounding caused overflow, adjust integer part
  if (fpart >= 1.0) {
    ipart += 1;
    fpart -= 1.0;
  }

  // Integer part conversion
  char int_part_str[100];
  s21_itoa(ipart, int_part_str, "     ", 0);
  s21_strcpy(s, int_part_str);

  format_fractional_part(s, fpart, accuracy, hash_flag);

  int i = s21_strlen(s);
  s[i] = '\0';

  // Sign handling
  if (is_negative) {
    s21_memmove(s + 1, s, s21_strlen(s) + 1);
    s[0] = '-';
  } else if (force_sign) {
    if (s[0] != '+') {
      s21_memmove(s + 1, s, s21_strlen(s) + 1);
      s[0] = '+';
    }
  }
  // else if (space_sign) {
  //     s21_memmove(s + 1, s, s21_strlen(s) + 1);
  //     s[0] = ' ';
  // }
  //  Zero padding handling
  if (zero_padding && !left_align) {
    for (int j = 0; j < i; j++) {
      if (s[j] == '.') break;
      if (s[j] == ' ') s[j] = '0';
    }
  }
  // Left alignment handling
  if (left_align) {
    int len = s21_strlen(s);
    while (len < accuracy) {
      s[len++] = ' ';
    }
    s[len] = '\0';
  }
  return s;
}

char *s21_ftoa_long(long double n, char *s, int accuracy, char *flag) {
  bool left_align = false;
  bool force_sign = false;
  bool space_sign = false;
  bool zero_padding = false;
  bool hash_flag = false;

  if (flag[0] == 'o') left_align = true;
  if (flag[1] == 'o') force_sign = true;
  if (flag[2] == 'o') space_sign = true;
  if (flag[3] == 'o') zero_padding = true;
  if (flag[4] == 'o') hash_flag = true;

  bool is_negative = (n < 0);
  int ipart = (int)n;
  if (is_negative) {
    n = -n;
    ipart = -ipart;
  }

  s = s21_itoa(ipart, s, flag, 0);

  long double fpart = n - (long double)ipart;
  int i = s21_strlen(s);

  if (hash_flag || accuracy > 0) {
    s[i++] = '.';
  }

  for (int j = 0; j < accuracy; j++) {
    fpart *= 10;
    int digit = (int)fpart;
    s[i++] = digit + '0';
    fpart -= digit;
  }

  s[i] = '\0';

  if (is_negative) {
    s21_memmove(s + 1, s, s21_strlen(s) + 1);
    s[0] = '-';
  } else if (force_sign) {
    s21_memmove(s + 1, s, s21_strlen(s) + 1);
    s[0] = '+';
  } else if (space_sign) {
    s21_memmove(s + 1, s, s21_strlen(s) + 1);
    s[0] = ' ';
  }

  if (zero_padding && !left_align) {
    for (int j = 0; j < i; j++) {
      if (s[j] == '.') break;
      if (s[j] == ' ') s[j] = '0';
    }
  }

  if (left_align) {
    int len = s21_strlen(s);
    for (int j = len; j < accuracy + len; j++) {
      s[j] = ' ';
    }
    s[accuracy + len] = '\0';
  }

  return s;
}
char *s21_gtoa(char *str, double number, int accuracy, char *flag,
               int poshli_vse_v_pizdu) {
  // Ensure accuracy is at least 1
  // printf("GTOA: %lf\n", number);
  // 134323.32400;
  if (accuracy == 0) {
    accuracy = 1;
  }

  // Handle the zero case
  if (number == 0) {
    s21_ftoa(number, str, accuracy - 1, flag);
    return str;
  }

  // Determine the length of the number
  int lenNum = 0;
  if (fabs(number) < 1) {
    lenNum = 1;
  } else if (fabs(number) < 10) {
    lenNum = 0;
  } else {
    for (lenNum = 0;; lenNum--) {
      double scaled = fabs(number) * pow(10, lenNum);
      if (scaled >= 1 && scaled < 10) {
        break;
      }
    }
  }

  // Format the number based on its length
  if (lenNum <= 0) {
    if (accuracy + lenNum <= 0) {
      s21_ntoa(str, number, accuracy - 1, flag, poshli_vse_v_pizdu - 2, 1);
    } else {
      s21_ftoa(number, str, (accuracy - 1) + lenNum, flag);
    }
  } else {
    if (lenNum > 4) {
      s21_ntoa(str, number, accuracy - 1, flag, poshli_vse_v_pizdu - 2, 1);
    } else {
      s21_ftoa(number, str, lenNum + (accuracy - 1), flag);
    }
  }

  return str;
}

char *s21_gtoa_long(long double num, char *s, char *flag, int accuracy) {
  int i = 0, sign = (num < 0) ? -1 : 1;
  if (sign == -1) num = -num;

  int exponent = 0;
  long double temp_num = num;
  while (temp_num >= 10.0) {
    temp_num /= 10.0;
    exponent++;
  }
  while (temp_num > 0 && temp_num < 1.0) {
    temp_num *= 10.0;
    exponent--;
  }

  if (exponent >= -4 && exponent < accuracy)
    s21_ftoa_long(num, s, accuracy, flag);
  else
    s21_ntoa_long(num, s, accuracy, flag);

  trim_trailing_zeros(s);
  s[i] = '\0';
  return s;
}

int s21_ctos(char *str, char param, char *flag, int width) {
  int length = 0;

  if (param != '\0') {
    char ch = param;
    bool left_align = false;
    bool zero_padding = false;

    if (flag[0] == 'o') left_align = true;
    if (flag[3] == 'o') left_align = true;
    if (flag[4] == 'o') zero_padding = true;

    if (width > 0) {
      if (left_align) {
        str[length++] = ch;
        for (int i = 1; i < width; i++) {
          str[length++] = ' ';
        }
      } else {
        char pad_char = zero_padding ? '0' : ' ';
        for (int i = 1; i < width; i++) {
          str[length++] = pad_char;
        }
        str[length++] = ch;
      }
    } else {
      str[length++] = ch;
    }
  }

  str[length] = '\0';
  return length;
}

// char* s21_ntoa( float number, char* str,  int accuracy, char* flag, int
// poshli_vse_nahui){

//     if (flag){ }
//     if (!str ||!number) return NULL;

//     float mantissa = fabs(number);

//     int count = 0;

//     if ( mantissa < 1){
//         while((1 - mantissa) > 0){
//             mantissa *= 10.0;
//             count --;
//         }
//     } else  if ( 1 < mantissa){
//         while((int) mantissa > 10){
//             mantissa /= 10.0;
//             count ++;
//         }
//     }

//     if (accuracy > 6){
//         accuracy = 6;
//     }

//     if (number < 0){
//         s21_ftoa(mantissa*-1, str, accuracy, "     ");
//     }else{
//         s21_ftoa(mantissa, str, accuracy, "     ");
//     }
//     trim_trailing_zeros(str);

//     int i = s21_strlen(str);
//     if (poshli_vse_nahui == 0){
//         str[i++] = 'e';
//     }else{
//         str[i++] = 'E';
//     }

//     if (count > 0){
//         str[i++] = '+';
//         str[i++] = '0';
//         str[i++] = abs(count) % 10 + '0';

//     }else{
//         str[i++] = '-';
//         str[i++] = '0';
//         str[i++] = abs(count) % 10 + '0';
//     }

//     str[i] = '\0';

//     return str;
// }

char *s21_ntoa(char *str, double number, int accuracy, char *flag, int symbol,
               int kostyl_2) {
  char flagX[10] = "xxxxx";
  char flag1[10] = "xoxxx";
  int lenStr = 0, lenNum = 0, result = 0, kostyl = accuracy;
  if (number != 0) {
    for (int aux = lenNum = fabs(number) < 1    ? 1
                            : fabs(number) < 10 ? 0
                                                : (-1);
         aux != 0; lenNum += aux)
      aux = ((fabs(number) * pow(10, lenNum)) < 1 ||
             10 < fabs(number) * pow(10, lenNum))
                ? aux
                : 0;
  }
  s21_itoa((kostyl == 0 ? (round(number * pow(10, lenNum)))
                        : (number * pow(10, lenNum))),
           str, flag, 1);
  (kostyl != 0 || flag[3] == 'o')
      ? s21_strcat(str, (localeconv()->decimal_point))
      : 0;
  for (lenStr = s21_strlen(str); number < 0; number *= (-1)) continue;
  for (result = lenNum; (accuracy != 0 && (lenNum + 1) <= 0); accuracy -= 1) {
    if (accuracy == 1)
      s21_itoa(fmod((round(number) * pow(10, lenNum += 1)), 10),
               str + (lenStr++), flagX, 1);
    else
      s21_itoa(fmod((number * pow(10, lenNum += 1)), 10), str + (lenStr++),
               flagX, 1);
  }
  for (int aux = lenNum + 1; accuracy != 0; accuracy -= 1)
    accuracy == 1 ? s21_itoa(round(fmod((number * pow(10, (aux++))), 10)),
                             str + (lenStr++), flagX, 1)
                  : s21_itoa(fmod((number * pow(10, (aux++))), 10),
                             str + (lenStr++), flagX, 1);
  if (kostyl_2 == 1 && flag[3] != 'o') {
    for (int x = s21_strlen(str) - 1; s21_strchr("0", str[x]); str[x--] = '\0')
      continue;
    for (int x = s21_strlen(str) - 1;
         s21_strchr((localeconv()->decimal_point), str[x]);)
      str[x--] = '\0';
  }
  lenStr = s21_strlen(str);
  str[lenStr++] = symbol;
  str[lenStr] = '\0';
  s21_itoa(-result, str + (lenStr), flag1, 2);
  return str;
}

char *s21_stos(char *str, va_list *params, int accuracy, char type) {
  if (type == 'l') {
    wcstombs(str, va_arg(*params, wchar_t *), 512);
  } else {
    s21_strcat(str, va_arg(*params, char *));
  }
  accuracy < 0 ? accuracy = s21_strlen(str) : 0;
  str[accuracy] = '\0';
  return str;
}

char *s21_ptos(char *str, void *ptr) {
  int length = 0;
  str[length++] = '0';
  str[length++] = 'x';

  // Получаем значение указателя в виде целого числа
  unsigned long address = (unsigned long)ptr;

  char hex_digits[] = "0123456789abcdef";

  // Строка для временного хранения шестнадцатеричного представления
  char temp[20];
  int temp_length = 0;

  // Конвертируем адрес в шестнадцатеричную систему
  if (address == 0) {
    temp[temp_length++] = '0';
  } else {
    while (address > 0) {
      temp[temp_length++] = hex_digits[address % 16];
      address /= 16;
    }
  }

  // Записываем шестнадцатеричные символы в строку в обратном порядке
  for (int i = temp_length - 1; i >= 0; i--) {
    str[length++] = temp[i];
  }

  // Завершаем строку нулевым символом
  str[length] = '\0';

  return str;
}

char *s21_utoa(char *str, unsigned int number, int base, int accuracy,
               const char *flag, char *fuck_society) {
  int length = 0;
  int prepend_zero = 0;
  int left_align = 0;
  int min_width = 0;

  if (flag[0] == 'o') left_align = 1;
  if (flag[3] == 'o') prepend_zero = 1;

  // Обрабатываем флаг
  if (flag != NULL) {
    for (int i = 0; flag[i] != '\0'; i++) {
      if (flag[i] == '#') {
        prepend_zero = 1;
      } else if (flag[i] == '-') {
        left_align = 1;
      } else if (flag[i] >= '0' && flag[i] <= '9') {
        min_width = flag[i] - '0';
      }
    }
  }

  // Строка для временного хранения представления числа в указанной системе
  // счисления
  char temp[50];
  int temp_length = 0;

  // Конвертируем число в указанную систему счисления
  if (number == 0) {
    temp[temp_length++] = '0';
  } else {
    while (number > 0) {
      temp[temp_length++] = fuck_society[number % base];
      number /= base;
    }
  }

  // Добавляем ведущий ноль для восьмеричной системы при флаге `#`
  if (prepend_zero == 1 && base == 8 && temp[0] != '0') {
    temp[temp_length++] = '0';
  }
  if (prepend_zero == 1 && base == 16) {
    // printf("%c\n", flag[0]);
    if (fuck_society[10] == 'A') {
      temp[temp_length++] = 'X';
    } else {
      temp[temp_length++] = 'x';
    }
    temp[temp_length++] = '0';
  }

  // Обработка точности
  while (temp_length < accuracy) {
    temp[temp_length++] = '0';
  }

  // Если длина меньше минимальной ширины, добавляем пробелы или нули
  while (temp_length < min_width) {
    temp[temp_length++] = left_align ? ' ' : '0';
  }

  // Записываем символы в строку в обратном порядке
  for (int i = temp_length - 1; i >= 0; i--) {
    str[length++] = temp[i];
  }

  // Завершаем строку нулевым символом
  str[length] = '\0';

  return str;
}

char *s21_ntoa_long(long double number, char *str, int accuracy, char *flag) {
  if (!str) return NULL;

  long double mantissa = fabsl(number);
  int count = 0;

  if (mantissa > 0 && mantissa < 1) {
    while (mantissa < 1) {
      mantissa *= 10.0;
      count--;
    }
  } else if (mantissa >= 10) {
    while (mantissa >= 10) {
      mantissa /= 10.0;
      count++;
    }
  }

  if (accuracy > 6) {
    accuracy = 6;
  }

  if (number < 0) {
    s21_ftoa(mantissa * -1, str, accuracy, flag);
  } else {
    s21_ftoa(mantissa, str, accuracy, flag);
  }

  trim_trailing_zeros(str);

  int i = s21_strlen(str);
  str[i++] = 'e';
  if (count >= 0)
    str[i++] = '+';
  else {
    str[i++] = '-';
    count = -count;
  }
  if (count < 10) {
    str[i++] = '0';
  }
  int temp_count = count;
  int j = i;
  while (temp_count > 0) {
    str[j++] = (temp_count % 10) + '0';
    temp_count /= 10;
  }

  reverse_exp(str, j, i);
  str[j] = '\0';
  return str;
}

void trim_trailing_zeros(char *str) {  // Удаляем нули с конца строки
  char *decimal_point = s21_strchr(str, '.');  // Находим десятичную точку
  if (decimal_point != NULL) {
    char *end_ptr = str + s21_strlen(str) - 1;
    while (end_ptr > decimal_point && *end_ptr == '0') {
      *end_ptr-- = '\0';  // Удаляем нули с конца строки
    }
    if (end_ptr == decimal_point) {
      *end_ptr = '\0';  // Если после точки не осталось цифр, удаляем и точку
    }
  }
}

void reverse(char *s, int *length) {
  for (int j = 0, k = *length - 1; j < k; j++, k--) {
    char temp = s[j];
    s[j] = s[k];
    s[k] = temp;
  }
}

void reverse_exp(char *s, int j, int i) {
  for (int k = 0; k < (j - i) / 2; k++) {
    char tmp = s[i + k];
    s[i + k] = s[j - k - 1];
    s[j - k - 1] = tmp;
  }
}

char *s21_ntoa_short(float number, char *str, int accuracy, char *flag) {
  if (!str || number == 0.0f) return NULL;

  float mantissa = fabsf(number);

  int count = 0;

  if (mantissa < 1) {
    while (mantissa < 1) {
      mantissa *= 10.0f;
      count--;
    }
  } else if (mantissa >= 10) {
    while (mantissa >= 10) {
      mantissa /= 10.0f;
      count++;
    }
  }

  if (accuracy > 6) {
    accuracy = 6;
  }

  if (number < 0) {
    s21_ftoa(mantissa * -1, str, accuracy, flag);
  } else {
    s21_ftoa(mantissa, str, accuracy, flag);
  }
  trim_trailing_zeros(str);

  int i = s21_strlen(str);
  str[i++] = 'e';
  if (count >= 0) {
    str[i++] = '+';
  } else {
    str[i++] = '-';
    count = -count;
  }

  // Convert the count to string manually
  char count_str[10];
  int j = 0;
  do {
    count_str[j++] = (count % 10) + '0';
    count /= 10;
  } while (count > 0);
  count_str[j] = '\0';

  // Reverse the count_str
  for (int k = 0; k < j / 2; ++k) {
    char temp = count_str[k];
    count_str[k] = count_str[j - k - 1];
    count_str[j - k - 1] = temp;
  }

  // Append the count_str to the result
  for (int k = 0; k < j; ++k) {
    str[i++] = count_str[k];
  }
  str[i] = '\0';

  return str;
}