#include <check.h>
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../s21_string.h"

#define BUFF_SIZE 512

START_TEST(SPRINTFTestLaslhyn22) {
  char data[100];
  char data1[100];
  sprintf(data, "|%32s|\n", "111");
  s21_sprintf(data1, "|%32s|\n", "111");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn23) {
  char data[100];
  char data1[100];
  sprintf(data, "|%32s|\n", "abc");
  s21_sprintf(data1, "|%32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn24) {
  char data[100];
  char data1[100];
  sprintf(data, "|%-32s|\n", "abc");
  s21_sprintf(data1, "|%-32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn25) {
  char data[100];
  char data1[100];
  sprintf(data, "|%5s|\n", "nark nark");
  s21_sprintf(data1, "|%5s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn26) {
  char data[100];
  char data1[100];
  sprintf(data, "|%16s|\n", "nark nark");
  s21_sprintf(data1, "|%16s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn27) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%.03s|\n", "hello");
  int d = sprintf(data1, "|%.03s|\n", "hello");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn28) {
  char data[100];
  char data1[100];
  int c =
      s21_sprintf(data, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  int d =
      sprintf(data1, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn30) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%3.7d|\n", -2375);
  int d = sprintf(data1, "|%3.7d|\n", -2375);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn31) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%-20.18u|\n", -345);
  int d = sprintf(data1, "|%-20.18u|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn32) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%-20.18d|\n", -345);
  int d = sprintf(data1, "|%-20.18d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn33) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%20.2d|\n", -345);
  int d = sprintf(data1, "|%20.2d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn34) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%20d|\n", -345);
  int d = sprintf(data1, "|%20d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn37) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|test %-12i et %24s !|\n", 0, "coco");
  int d = sprintf(data1, "|test %-12i et %24s !|\n", 0, "coco");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn39) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%c|\n", 'a');
  sprintf(data1, "01)SPRINTF : |%c|\n", 'a');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn40) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-c|\n", 'z');
  sprintf(data1, "01)SPRINTF : |%-c|\n", 'z');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn42) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn43) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%-5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn44) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1c|\n", '3');
  sprintf(data1, "01)SPRINTF : |%1c|\n", '3');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn49) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "salut");
  sprintf(data1, "01)SPRINTF : |%s|\n", "salut");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn50) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-s|\n", "test");
  sprintf(data1, "01)SPRINTF : |%-s|\n", "test");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn52) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "42");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "42");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn53) {
  char data[100];
  char data1[100];
  char test[5] = "42";
  s21_sprintf(data, "01)SPRINTF : |%-10s|\n", test);
  sprintf(data1, "01)SPRINTF : |%-10s|\n", test);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn54) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn55) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%-2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn56) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.15s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.15s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn57) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.4s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.4s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn58) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.0s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.0s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn59) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn60) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn61) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "");
  sprintf(data1, "01)SPRINTF : |%s|\n", "");
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn62) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-.2s|\n", "boom");
  sprintf(data1, "01)SPRINTF : |%-.2s|\n", "boom");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn63) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.8s|\n", "google");
  sprintf(data1, "01)SPRINTF : |%10.8s|\n", "google");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn64) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "twitter");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "twitter");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn65) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.10s|\n", "samsung");
  sprintf(data1, "01)SPRINTF : |%2.10s|\n", "samsung");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn66) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "sprintf");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "sprintf");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn67) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn68) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn69) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%-1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn70) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.1s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%.1s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn71) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn72) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn73) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn74) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
              "12345", "hu");
  sprintf(data1, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
          "12345", "hu");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn88) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", -20);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn89) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", -50);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", -50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn90) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn91) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%.2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn92) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn93) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%i|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%i|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn94) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%-d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn95) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn96) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn97) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn98) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn99) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", 64);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", 64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn100) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", 16);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", 16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn101) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn102) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn103) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn104) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn105) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn106) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.2d|\n", -1);
  sprintf(data1, "02) standart PRINTF : |%.2d|\n", -1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn107) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn108) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-.10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-.10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn109) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", 35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", 35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn110) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", -35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", -35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn111) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn112) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn113) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn114) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn116) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 100);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn155) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", 34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", 34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn156) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", -34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", -34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn157) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-u|\n", 50);
  sprintf(data1, "02) standart PRINTF : |%-u|\n", 50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn158) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", 90);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", 90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn159) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.10u|\n", 90);
  sprintf(data1, "02) standart PRINTF : |%.10u|\n", 90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn160) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%15u|\n", -100);
  sprintf(data1, "02) standart PRINTF : |%15u|\n", -100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn161) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10.5u|\n", 52);
  sprintf(data1, "02) standart PRINTF : |%10.5u|\n", 52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn162) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.10u|\n", 52);
  sprintf(data1, "02) standart PRINTF : |%5.10u|\n", 52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn163) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%20.15u|\n", -100000);
  sprintf(data1, "02) standart PRINTF : |%20.15u|\n", -100000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn164) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%15.20u|\n", -100000);
  sprintf(data1, "02) standart PRINTF : |%15.20u|\n", -100000);
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn165) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-10u|\n", 144);
  sprintf(data1, "02) standart PRINTF : |%-10u|\n", 144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn166) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-.10u|\n", 144);
  sprintf(data1, "02) standart PRINTF : |%-.10u|\n", 144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn167) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-20u|\n", -20000000);
  sprintf(data1, "02) standart PRINTF : |%-20u|\n", -20000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn168) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%8u|\n", 64);
  sprintf(data1, "02) standart PRINTF : |%8u|\n", 64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn169) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.4u|\n", 10);
  sprintf(data1, "02) standart PRINTF : |%3.4u|\n", 10);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn170) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%u|\n", 0);
  sprintf(data1, "02) standart PRINTF :|%u|\n", 0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn172) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", 0);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", 0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn173) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.u|\n", 88);
  sprintf(data1, "02) standart PRINTF : |%.u|\n", 88);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn174) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.s|\n", "bratok");
  sprintf(data1, "02) standart PRINTF : |%.s|\n", "bratok");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn177) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.3s|\n", "21");
  sprintf(data1, "02) standart PRINTF : |%.3s|\n", "21");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn183) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%u|\n", -1);
  sprintf(data1, "|%u|\n", -1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn184) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%u|\n", -1);
  sprintf(data1, "|%u|\n", -1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn185) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%f|\n", 12.2);
  sprintf(data1, "|%f|\n", 12.2);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn186) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.343);
  sprintf(data1, "|%10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn187) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.3f|\n", 324.343);
  sprintf(data1, "|%10.3f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn189) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-1.10f|\n", 324.343);
  sprintf(data1, "|%-1.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn190) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-1.10f|\n", -324.343);
  sprintf(data1, "|%-1.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn191) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.10f|\n", -324.343);
  sprintf(data1, "|%.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn192) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.10f|\n", 324.343);
  sprintf(data1, "|%.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn195) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.1);
  sprintf(data1, "|%10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn196) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.1123132);
  sprintf(data1, "|%10f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn198) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.0f|\n", 324.1123132);
  sprintf(data1, "|%.0f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn199) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.0f|\n", 3.14);
  sprintf(data1, "|%10.0f|\n", 3.14);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn200) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.10f|\n", 320.3);
  sprintf(data1, "|%10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn201) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn202) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn203) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", -320.3);
  sprintf(data1, "|%-10.10f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn204) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn205) {
  char data[100];
  char data1[100];

  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn206) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", -320.3);
  sprintf(data1, "|%5.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn207) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn208) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn210) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.1f|\n", 324.324);
  sprintf(data1, "|%5.1f|\n", 324.324);
  ck_assert_str_eq(data, data1);
}
END_TEST
START_TEST(SPRINTFTestLaslhyn211) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.3f|\n", 0.0001);
  sprintf(data1, "|%5.3f|\n", 0.0001);
  ck_assert_str_eq(data, data1);
}
END_TEST

void part1_tests(TCase *tc1_1) {
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn22);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn23);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn24);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn25);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn26);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn27);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn28);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn30);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn31);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn32);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn33);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn34);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn37);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn39);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn40);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn42);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn43);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn44);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn49);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn50);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn52);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn53);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn54);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn55);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn56);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn57);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn58);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn59);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn60);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn61);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn62);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn63);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn64);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn65);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn66);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn67);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn68);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn69);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn70);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn71);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn72);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn73);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn74);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn88);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn89);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn90);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn91);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn92);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn93);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn94);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn95);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn96);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn97);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn98);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn99);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn100);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn101);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn102);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn103);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn104);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn105);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn106);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn107);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn108);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn109);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn110);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn111);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn112);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn113);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn114);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn116);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn155);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn156);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn157);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn158);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn159);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn160);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn161);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn162);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn163);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn164);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn165);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn166);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn167);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn168);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn169);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn170);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn172);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn173);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn174);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn177);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn183);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn184);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn185);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn186);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn187);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn189);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn190);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn191);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn192);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn195);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn196);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn198);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn199);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn200);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn201);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn202);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn203);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn204);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn205);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn206);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn207);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn208);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn210);
  tcase_add_test(tc1_1, SPRINTFTestLaslhyn211);
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