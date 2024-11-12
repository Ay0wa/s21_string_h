#include <check.h>
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"

#define BUFF_SIZE 512

START_TEST(s21_insert_test) {
  char *str1 = (char *)s21_insert("Sloniki", "iki", 2);
  char *str2 = "Slikioniki";
  ck_assert_str_eq(str1, str2);
  free(str1);
  char *str3 = (char *)s21_insert("salo", "ska", 3);
  char *str4 = "salskao";
  ck_assert_str_eq(str3, str4);
  free(str3);
  char *str5 = (char *)s21_insert("", "help", 5);
  char *str6 = s21_NULL;
  fail_unless(str5 == str6);
  free(str5);
  char *str7 = (char *)s21_insert("help!", "111", 5);
  char *str8 = "help!111";
  ck_assert_str_eq(str7, str8);
  free(str7);
}
END_TEST

START_TEST(s21_to_upper_test) {
  char *str1 = (char *)s21_to_upper("slish! a nu vstal!");
  char *str2 = "SLISH! A NU VSTAL!";
  ck_assert_str_eq(str1, str2);
  free(str1);
  char *str3 = (char *)s21_to_upper("AAAAA14353423AA!!!");
  char *str4 = "AAAAA14353423AA!!!";
  ck_assert_str_eq(str3, str4);
  free(str3);
  char *str7 = (char *)s21_to_upper("KomM hieR! scHneLl!");
  char *str8 = "KOMM HIER! SCHNELL!";
  ck_assert_str_eq(str7, str8);
  free(str7);
}
END_TEST

START_TEST(s21_to_lower_test) {
  char *str1 = (char *)s21_to_lower("SLISH! A NU VSTAL!");
  char *str2 = "slish! a nu vstal!";
  ck_assert_str_eq(str1, str2);
  free(str1);

  char *str3 = (char *)s21_to_lower("aaa14353423aa!!!");
  char *str4 = "aaa14353423aa!!!";
  ck_assert_str_eq(str3, str4);
  free(str3);

  char *str7 = (char *)s21_to_lower("KomM hieR! scHneLl!");
  char *str8 = "komm hier! schnell!";
  ck_assert_str_eq(str7, str8);
  free(str7);
}
END_TEST

START_TEST(s21_trim_test) {
  char *str = (char *)s21_trim("****skat-riba*****", "*");
  char *str2 = "skat-riba";
  ck_assert_str_eq(str, str2);
  free(str);
  char *str3 = (char *)s21_trim("Sloniki", "iki");
  char *str4 = "Slon";
  ck_assert_str_eq(str3, str4);
  free(str3);

  char *str5 = (char *)s21_trim("", "999");
  char *str6 = "";
  ck_assert_str_eq(str5, str6);
  free(str5);

  char *str7 = (char *)s21_trim("1", "huli*5682");
  char *str8 = "1";
  ck_assert_str_eq(str7, str8);
  free(str7);

  char *str9 = (char *)s21_trim("66236934599", "69");
  char *str10 = "2369345";
  ck_assert_str_eq(str9, str10);
  free(str9);
}
END_TEST

void part1_tests(TCase *tc1_1) {
  tcase_add_test(tc1_1, s21_insert_test);
  tcase_add_test(tc1_1, s21_to_upper_test);
  tcase_add_test(tc1_1, s21_to_lower_test);
  tcase_add_test(tc1_1, s21_trim_test);
}

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  part1_tests(tc1_1);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}