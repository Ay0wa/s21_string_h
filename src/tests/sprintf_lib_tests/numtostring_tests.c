#include "../../C_lib/shit_happens/sprintf_lib/numtostring.h"

char *numtostring_accuracy_test();
char *numtostring_plus_test();
char *numtostring_minus_test();
char *numtostring_minus_accuracy_test();
char *numtostring_plus_accuracy_test();
char *numtostring_space_test();
char *ftoa_test();
char *exp_test();
char *char_test();
char *char_ptos();
char *char_utoa();
char *ntoa_test();
char *long_ntoa_test();
char *gtoa_test();

int main() {
  printf("%s\n", numtostring_accuracy_test());
  printf("%s\n", numtostring_plus_test());
  printf("%s\n", numtostring_minus_test());
  printf("%s\n", numtostring_minus_accuracy_test());
  printf("%s\n", numtostring_plus_accuracy_test());
  printf("%s\n", numtostring_space_test());
  printf("%s\n", ftoa_test());
  printf("%s\n", exp_test());
  printf("%s\n", char_test());
  printf("%s\n", char_ptos());
  printf("%s\n", char_utoa());
  printf("%s\n", ntoa_test());
  printf("%s\n", long_ntoa_test());
  printf("%s\n", gtoa_test());
}

char *numtostring_accuracy_test() {
  int test1_num = -400;

  char flag[6] = {'o', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 10;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "-0000000400") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *numtostring_plus_test() {
  int test1_num = +42;
  char flag[6] = {'o', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 0;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "+42") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *numtostring_minus_test() {
  int test1_num = -42;
  char flag[6] = {' ', 'o', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 0;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "-42") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *numtostring_minus_accuracy_test() {
  int test1_num = 400;
  char flag[6] = {'o', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 10;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "+0000000400") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *numtostring_plus_accuracy_test() {
  int test1_num = -300;
  char flag[6] = {' ', 'o', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 10;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "-0000000300") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *numtostring_space_test() {
  int test1_num = 300;
  char flag[6] = {' ', ' ', 'o', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 0;
  char *result_str = s21_itoa(test1_num, test1_str, flag, accuracy);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, " 300") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *ftoa_test() {
  float test1_num = 30.36;
  char flag[6] = {' ', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 1;
  char *result_str = s21_ftoa(test1_num, test1_str, accuracy, flag);
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "30.2") == 0) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST FAILED\n\n";
  }
}

char *exp_test() {
  int test1_num = 150000;
  char flag[6] = {' ', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 0;
  char *result_str = s21_ntoa(test1_str, test1_num, accuracy, flag, 'e', 0);

  printf("%s\n", result_str);
  return "TEST PASSED\n\n";
}

char *char_test() {
  // char test1_num = 'A';
  char flag[6] = {'o', ' ', ' ', ' ', ' ', ' '};
  char test1_str[1024];
  int accuracy = 5;
  s21_ctos(test1_str, 'A', flag, accuracy);
  printf("%s\n", test1_str);
  return "TEST PASSED\n\n";
}

char *char_ptos() {
  char buffer[50];
  int x = 42;
  int *p = &x;

  s21_ptos(buffer, (void *)p);
  printf("%s\n", buffer);
  return "TEST PASSED\n\n";
}

char *char_utoa() {
  char buffer[50];
  unsigned int number = 42;
  int base = 8;  // восьмеричная система счисления
  int accuracy = 5;
  char flag[] = "-xxxx";

  s21_utoa(buffer, number, base, accuracy, flag, "01234567");
  printf("%s\n", buffer);  // Ожидаемый вывод: '00052'

  return "TEST PASSED\n\n";
}

char *ntoa_test() {
  char buffer[100];
  // char n_buffer[100];
  long double number = 12345.6789;
  int accuracy = 3;
  char flag[6] = {' ', ' ', ' ', ' ', ' ', ' '};

  s21_ntoa_long(number, buffer, accuracy, flag);
  printf("%s\n", buffer);  // Ожидаемый вывод: '1.235e+04'

  return "TEST PASSED\n\n";
}

char *long_ntoa_test() {
  char buffer[100];
  // char n_buffer[100];
  long double number = 12345.6789L;
  int accuracy = 3;
  char flag[6] = {' ', ' ', ' ', ' ', ' ', ' '};

  s21_ntoa_long(number, buffer, accuracy, flag);
  printf("%s\n", buffer);  // Ожидаемый вывод: '1.235e+04'

  return "TEST PASSED\n\n";
}

char *gtoa_test() {
  double num = 15.32;
  char flag[6] = {' ', ' ', ' ', ' ', ' ', ' '};
  char buff[1024];
  int accuracy = 0;
  char *result_str = s21_gtoa(buff, num, accuracy, flag, 'g');
  printf("%s\n", result_str);
  if (s21_strcmp(result_str, "15.32")) {
    return "TEST PASSED\n\n";
  } else {
    return "TEST ERROR\n\n";
  }
}