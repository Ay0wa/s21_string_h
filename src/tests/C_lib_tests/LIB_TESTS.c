#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../s21_string.h"

START_TEST(memchr_1) {
#line 8
  char str1[] = "abc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_2) {
#line 14
  char str1[] = "abc";
  int c = 'b';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_3) {
#line 19
  char str1[] = "abc";
  int c = 'c';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_4) {
#line 25
  char str1[] = "abc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_5) {
#line 31
  char str1[] = "abc";
  int c = 'a';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_6) {
#line 37
  char str1[] = "abc";
  int c = 'b';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_7) {
#line 43
  char str1[] = "abc";
  int c = 'c';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_8) {
#line 49
  char str1[] = "abc";
  int c = 'a';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_9) {
#line 55
  char str1[] = "abc";
  int c = 'b';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_10) {
#line 61
  char str1[] = "abc";
  int c = 'c';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_11) {
#line 67
  char str1[] = "abc";
  int c = 'a';
  size_t n = 4;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_12) {
#line 73
  char str1[] = "abc";
  int c = 'a';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_13) {
#line 79
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_14) {
#line 85
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_15) {
#line 91
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_16) {
#line 97
  char str1[] = "abc";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_17) {
#line 103
  char str1[] = "abc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_18) {
#line 109
  char str1[] = "abc";
  int c = 'd';
  size_t n = 4;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_19) {
#line 115
  char str1[] = "";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_20) {
#line 121
  char str1[] = "";
  int c = '\0';
  size_t n = 4;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_21) {
#line 127
  char str1[] = " ";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_22) {
#line 133
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_23) {
#line 138
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_24) {
#line 144
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_25) {
#line 150
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_26) {
#line 156
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_27) {
#line 162
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_28) {
#line 168
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_29) {
#line 174
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_30) {
#line 180
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_31) {
#line 186
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 9;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_32) {
#line 192
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_33) {
#line 198
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_34) {
#line 204
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_35) {
#line 210
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_36) {
#line 216
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_37) {
#line 222
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_38) {
#line 228
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_39) {
#line 234
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_40) {
#line 240
  char str1[] = "abc\nabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_41) {
#line 246
  char str1[] = "abc\0abc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_42) {
#line 252
  char str1[] = "\0abcabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_43) {
#line 258
  char str1[] = "abcabc\0";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memcmp_1) {
#line 264
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_2) {
#line 270
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_3) {
#line 276
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_4) {
#line 282
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_5) {
#line 288
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_6) {
#line 294
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_7) {
#line 300
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_8) {
#line 306
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_9) {
#line 312
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_10) {
#line 318
  char str1[] = "";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_11) {
#line 324
  char str1[] = "abc";
  char str2[] = "";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_12) {
#line 330
  char str1[] = " ";
  char str2[] = "abc";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_13) {
#line 336
  char str1[] = "abc";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_14) {
#line 342
  char str1[] = "9087";
  char str2[] = "657";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_15) {
#line 348
  char str1[] = "";
  char str2[] = "";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_16) {
#line 354
  char str1[] = " ";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_17) {
#line 360
  char str1[] = "abc ";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_18) {
#line 366
  char str1[] = "abc";
  char str2[] = "abc ";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_19) {
#line 372
  char str1[] = " abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_20) {
#line 378
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_21) {
#line 384
  char str1[] = "123";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_22) {
#line 390
  char str1[] = "123";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_23) {
#line 396
  char str1[] = "321";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_24) {
#line 402
  char str1[] = "321";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_25) {
#line 408
  char str1[] = "1234";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_26) {
#line 414
  char str1[] = "132";
  char str2[] = "1234";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_27) {
#line 420
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_28) {
#line 426
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_29) {
#line 432
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_30) {
#line 438
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_31) {
#line 444
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_32) {
#line 450
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_33) {
#line 456
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_34) {
#line 462
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_35) {
#line 468
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_36) {
#line 474
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_37) {
#line 480
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_38) {
#line 486
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_39) {
#line 492
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_50) {
#line 498
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_51) {
#line 504
  char str1[] = "123";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_52) {
#line 510
  char str1[] = "123";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_53) {
#line 516
  char str1[] = "321";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_54) {
#line 522
  char str1[] = "321";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_55) {
#line 528
  char str1[] = "1234";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_56) {
#line 534
  char str1[] = "132";
  char str2[] = "1234";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_57) {
#line 540
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_58) {
#line 546
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_59) {
#line 552
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_60) {
#line 558
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcpy_1) {
#line 564
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  s21_size_t n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_2) {
#line 571
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_3) {
#line 578
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_4) {
#line 585
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_5) {
#line 592
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_6) {
#line 599
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_7) {
#line 606
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_8) {
#line 613
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 3;
  memcpy(str1, str2, n);
  s21_memcpy(str3, str2, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(memcpy_9) {
#line 622
  char str1[9] = "abc";
  char str2[] = "";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_10) {
#line 629
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_11) {
#line 636
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_12) {
#line 643
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_13) {
#line 650
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_14) {
#line 657
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_15) {
#line 664
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_16) {
#line 671
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_17) {
#line 678
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "ab\0c";
  int n = 3;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_18) {
#line 685
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_19) {
#line 692
  char str1[9] = "";
  char str2[] = "";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_20) {
#line 699
  char str1[9] = " ";
  char str2[] = " ";
  char str3[9] = " ";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memset_1) {
#line 886
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_2) {
#line 893
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_3) {
#line 900
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_4) {
#line 907
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_5) {
#line 914
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_6) {
#line 921
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_7) {
#line 928
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_8) {
#line 935
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_9) {
#line 942
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_10) {
#line 949
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 3;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_11) {
#line 956
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_12) {
#line 963
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_13) {
#line 970
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_14) {
#line 977
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_15) {
#line 984
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_16) {
#line 991
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_17) {
#line 998
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_18) {
#line 1005
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_19) {
#line 1012
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_20) {
#line 1019
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_21) {
#line 1026
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_22) {
#line 1033
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_23) {
#line 1040
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_24) {
#line 1047
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_25) {
#line 1054
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_26) {
#line 1061
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_27) {
#line 1068
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_28) {
#line 1075
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_29) {
#line 1082
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_30) {
#line 1089
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_31) {
#line 1096
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_32) {
#line 1103
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_33) {
#line 1110
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_34) {
#line 1117
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_35) {
#line 1124
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_36) {
#line 1131
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_37) {
#line 1138
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_38) {
#line 1145
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_39) {
#line 1152
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_40) {
#line 1159
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_41) {
#line 1166
  char str1[] = "";
  char str2[] = "";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_42) {
#line 1173
  char str1[] = " ";
  char str2[] = " ";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_43) {
#line 1180
  char str1[] = ")(*&^UTYfgh\0jkliuy7oi6";
  char str2[] = ")(*&^UTYfgh\0jkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_44) {
#line 1187
  char str1[] = ")(*&^UTYfgh\njkliuy7oi6";
  char str2[] = ")(*&^UTYfgh\njkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_45) {
#line 1194
  char str1[] = ")(*&^UTYfghjkliuy7oi6\0";
  char str2[] = ")(*&^UTYfghjkliuy7oi6\0";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_46) {
#line 1201
  char str1[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
  char str2[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(strncat_1) {
#line 1328
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_2) {
#line 1335
  char str1[9] = "ab\nc";
  char str2[9] = "ab\nc";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_3) {
#line 1342
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_4) {
#line 1349
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_5) {
#line 1356
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\nf";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_6) {
#line 1363
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_7) {
#line 1370
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_8) {
#line 1377
  char str1[9] = "";
  char str2[9] = "";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_9) {
#line 1384
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_10) {
#line 1391
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_11) {
#line 1398
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_12) {
#line 1405
  char str1[9] = "ab\nc";
  char str2[9] = "ab\nc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_13) {
#line 1412
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_14) {
#line 1419
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_16) {
#line 1426
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = -4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_17) {
#line 1433
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = -4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_18) {
#line 1440
  char str1[9] = "";
  char str2[9] = "";
  char str3[] = "def";
  int n = -1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_19) {
#line 1447
  char str1[9] = "";
  char str2[9] = "";
  char str3[] = "";
  int n = -1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_20) {
#line 1454
  char str1[9] = " ";
  char str2[9] = " ";
  char str3[] = " ";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strchr_1) {
#line 1461
  char str1[] = "abc";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_2) {
#line 1466
  char str1[] = "abc";
  int n = 'd';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_3) {
#line 1471
  char str1[] = "abc";
  int n = '1';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_4) {
#line 1476
  char str1[] = "abc";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_5) {
#line 1481
  char str1[] = "";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_6) {
#line 1486
  char str1[] = " ";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_7) {
#line 1491
  char str1[] = " ";
  int n = ' ';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_8) {
#line 1496
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_9) {
#line 1501
  char str1[] = "021";
  int n = '0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_10) {
#line 1506
  char str1[] = "ab\nc";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_11) {
#line 1511
  char str1[] = "ab\nc";
  int n = '\n';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_12) {
#line 1516
  char str1[] = "abc";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_13) {
#line 1521
  char str1[] = "ab\0c";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_14) {
#line 1526
  char str1[] = "ab\0c";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_15) {
#line 1531
  char str1[] = "";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_16) {
#line 1536
  char str1[] = "\0\0\0";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_17) {
#line 1541
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_18) {
#line 1546
  char str1[] = "";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_19) {
#line 1551
  char str1[] = "ab,c";
  int n = ',';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_20) {
#line 1556
  char str1[] = "abcdefghijklmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_21) {
#line 1561
  char str1[] = "abcdtefghijktlmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strncmp_1) {
#line 1716
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_2) {
#line 1722
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_3) {
#line 1728
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_4) {
#line 1734
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_5) {
#line 1740
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_6) {
#line 1746
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_7) {
#line 1752
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_8) {
#line 1758
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_9) {
#line 1764
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_10) {
#line 1770
  char str1[] = "";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_11) {
#line 1776
  char str1[] = "abc";
  char str2[] = "";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_12) {
#line 1782
  char str1[] = " ";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_13) {
#line 1788
  char str1[] = "abc";
  char str2[] = " ";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_14) {
#line 1794
  char str1[] = "9087";
  char str2[] = "657";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_15) {
#line 1800
  char str1[] = "";
  char str2[] = "";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_16) {
#line 1806
  char str1[] = " ";
  char str2[] = " ";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_17) {
#line 1812
  char str1[] = "abc ";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_18) {
#line 1818
  char str1[] = "abc";
  char str2[] = "abc ";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_19) {
#line 1824
  char str1[] = " abc";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_20) {
#line 1830
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_21) {
#line 1836
  char str1[] = "123";
  char str2[] = "123";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_22) {
#line 1842
  char str1[] = "123";
  char str2[] = "321";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_23) {
#line 1848
  char str1[] = "321";
  char str2[] = "321";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_24) {
#line 1854
  char str1[] = "321";
  char str2[] = "123";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_25) {
#line 1860
  char str1[] = "1234";
  char str2[] = "123";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_26) {
#line 1866
  char str1[] = "132";
  char str2[] = "1234";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_27) {
#line 1872
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_28) {
#line 1878
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_29) {
#line 1884
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_30) {
#line 1890
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_31) {
#line 1896
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_32) {
#line 1902
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_33) {
#line 1908
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_34) {
#line 1914
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_35) {
#line 1920
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_36) {
#line 1926
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_37) {
#line 1932
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_38) {
#line 1938
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_39) {
#line 1944
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_40) {
#line 1950
  char str1[] = "";
  char str2[] = "abc";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_41) {
#line 1956
  char str1[] = "abc";
  char str2[] = "";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_42) {
#line 1962
  char str1[] = " ";
  char str2[] = "abc";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_43) {
#line 1968
  char str1[] = "abc";
  char str2[] = " ";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_44) {
#line 1974
  char str1[] = "9087";
  char str2[] = "657";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_45) {
#line 1980
  char str1[] = "";
  char str2[] = "";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_46) {
#line 1986
  char str1[] = " ";
  char str2[] = " ";
  int n = -10;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_47) {
#line 1992
  char str1[] = "abc ";
  char str2[] = "abc";
  int n = -1;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_48) {
#line 1998
  char str1[] = "abc";
  char str2[] = "abc ";
  int n = -1;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_49) {
#line 2004
  char str1[] = " abc";
  char str2[] = "abc";
  int n = -1;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_50) {
#line 2010
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_51) {
#line 2016
  char str1[] = "123";
  char str2[] = "123";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_52) {
#line 2022
  char str1[] = "123";
  char str2[] = "321";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_53) {
#line 2028
  char str1[] = "321";
  char str2[] = "321";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_54) {
#line 2034
  char str1[] = "321";
  char str2[] = "123";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_55) {
#line 2040
  char str1[] = "1234";
  char str2[] = "123";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_56) {
#line 2046
  char str1[] = "132";
  char str2[] = "1234";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_57) {
#line 2052
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_58) {
#line 2058
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_59) {
#line 2064
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncmp_60) {
#line 2070
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 0;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  if (s21 > 1) {
    s21 = 1;
  }
  if (s21 < -1) {
    s21 = -1;
  }
  if (s00 > 1) {
    s00 = 1;
  }
  if (s00 < -1) {
    s00 = -1;
  }
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncpy_1) {
#line 2176
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  s21_size_t n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_2) {
#line 2183
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_3) {
#line 2190
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_4) {
#line 2197
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_5) {
#line 2204
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_6) {
#line 2211
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_7) {
#line 2218
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_8) {
#line 2225
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 3;
  strncpy(str1, str2, n);
  s21_strncpy(str3, str2, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncpy_9) {
#line 2234
  char str1[9] = "abc";
  char str2[] = "";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_10) {
#line 2241
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_11) {
#line 2248
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_12) {
#line 2255
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 9;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_13) {
#line 2262
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_14) {
#line 2269
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_15) {
#line 2276
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 7;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_16) {
#line 2283
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_17) {
#line 2290
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 8;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_18) {
#line 2297
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_19) {
#line 2304
  char str1[9] = "";
  char str2[] = "";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_20) {
#line 2311
  char str1[9] = " ";
  char str2[] = " ";
  char str3[9] = " ";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strcspn_1) {
#line 2318
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_2) {
#line 2323
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_3) {
#line 2328
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_4) {
#line 2333
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_5) {
#line 2338
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_6) {
#line 2343
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_7) {
#line 2348
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_8) {
#line 2353
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_9) {
#line 2358
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_10) {
#line 2363
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_11) {
#line 2368
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_12) {
#line 2373
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_13) {
#line 2378
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_14) {
#line 2383
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_15) {
#line 2388
  char str1[] = "";
  char str2[] = "";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_16) {
#line 2393
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_17) {
#line 2398
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_18) {
#line 2403
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_19) {
#line 2408
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_20) {
#line 2413
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_21) {
#line 2418
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_22) {
#line 2423
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_23) {
#line 2428
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_24) {
#line 2433
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_25) {
#line 2438
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_26) {
#line 2443
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_27) {
#line 2448
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_28) {
#line 2453
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_29) {
#line 2458
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_30) {
#line 2463
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strlen_1) {
#line 2469
  char str1[] = "abcde";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_2) {
#line 2473
  char str1[] = "12345";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_3) {
#line 2477
  char str1[] = "00000";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_4) {
#line 2481
  char str1[] = ".....";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_5) {
#line 2485
  char str1[] = "   ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_6) {
#line 2489
  char str1[] = "+_@$)@)(%*";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_7) {
#line 2493
  char str1[] = "\n";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_8) {
#line 2497
  char str1[] = " 0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_9) {
#line 2501
  char str1[] = "0 ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_10) {
#line 2505
  char str1[] = "j ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_11) {
#line 2509
  char str1[] = " k";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_12) {
#line 2513
  char str1[] = "";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_13) {
#line 2517
  char str1[] = "!";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_14) {
#line 2521
  char str1[] = "\'";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_15) {
#line 2525
  char str1[] = "\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_16) {
#line 2529
  char str1[] = "k\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_17) {
#line 2533
  char str1[] = " \0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_18) {
#line 2537
  char str1[] = "\0 0n";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_19) {
#line 2541
  char str1[] = "\n klj";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_20) {
#line 2545
  char str1[] = "\n\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strpbrk_1) {
#line 2549
  char str1[] = "this is a test";
  char str2[] = "this";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_2) {
#line 2554
  char str1[] = "this is a test";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_3) {
#line 2559
  char str1[] = "abc";
  char str2[] = "ccc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_4) {
#line 2564
  char str1[] = "abc123";
  char str2[] = "123";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_5) {
#line 2569
  char str1[] = "abglk1erw233c";
  char str2[] = "321";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_6) {
#line 2574
  char str1[] = "ab\nc";
  char str2[] = "\n";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_7) {
#line 2579
  char str1[] = "a8yuoiytu5u6rtyfkguhubc";
  char str2[] = "123i6t5";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_8) {
#line 2584
  char str1[] = "a77777bc";
  char str2[] = "177723";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_9) {
#line 2589
  char str1[] = "ab7itgkhm.,c";
  char str2[] = "12hjv3";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_10) {
#line 2594
  char str1[] = "ab.,c";
  char str2[] = "127863";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_11) {
#line 2599
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_12) {
#line 2604
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_13) {
#line 2609
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_14) {
#line 2614
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_15) {
#line 2619
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_16) {
#line 2624
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_17) {
#line 2629
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_18) {
#line 2634
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_19) {
#line 2639
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_20) {
#line 2644
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_21) {
#line 2649
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_22) {
#line 2654
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_23) {
#line 2659
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_24) {
#line 2664
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_25) {
#line 2669
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_26) {
#line 2674
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_27) {
#line 2679
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_28) {
#line 2684
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_29) {
#line 2689
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_30) {
#line 2694
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_31) {
#line 2699
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_32) {
#line 2704
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_33) {
#line 2709
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_34) {
#line 2714
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_35) {
#line 2719
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_36) {
#line 2724
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_37) {
#line 2729
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_38) {
#line 2734
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_39) {
#line 2739
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_40) {
#line 2744
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strrchr_1) {
#line 2749
  char str1[] = "abc";
  int n = 'a';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_2) {
#line 2754
  char str1[] = "abc";
  int n = 'd';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_3) {
#line 2759
  char str1[] = "abc";
  int n = '1';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_4) {
#line 2764
  char str1[] = "abc";
  int n = '\\';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_5) {
#line 2769
  char str1[] = "";
  int n = 'a';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_6) {
#line 2774
  char str1[] = " ";
  int n = 'a';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_7) {
#line 2779
  char str1[] = " ";
  int n = ' ';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_8) {
#line 2784
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_9) {
#line 2789
  char str1[] = "021";
  int n = '0';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_10) {
#line 2794
  char str1[] = "ab\nc";
  int n = 'a';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_11) {
#line 2799
  char str1[] = "ab\nc";
  int n = '\n';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_12) {
#line 2804
  char str1[] = "abc";
  int n = '\0';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_13) {
#line 2809
  char str1[] = "ab\0c";
  int n = 'a';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_14) {
#line 2814
  char str1[] = "ab\0c";
  int n = '\0';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_15) {
#line 2819
  char str1[] = "";
  int n = '\0';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_16) {
#line 2824
  char str1[] = "\0\0\0";
  int n = '\0';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_17) {
#line 2829
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_18) {
#line 2834
  char str1[] = "";
  int n = '\\';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_19) {
#line 2839
  char str1[] = "ab,c";
  int n = ',';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_20) {
#line 2844
  char str1[] = "abcdefghijklmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
}
END_TEST

START_TEST(strspn_1) {
#line 2849
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_2) {
#line 2854
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_3) {
#line 2859
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_4) {
#line 2864
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_5) {
#line 2869
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_6) {
#line 2874
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_7) {
#line 2879
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_8) {
#line 2884
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_9) {
#line 2889
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_10) {
#line 2894
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_11) {
#line 2899
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_12) {
#line 2904
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_13) {
#line 2909
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_14) {
#line 2914
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_15) {
#line 2919
  char str1[] = "";
  char str2[] = "";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_16) {
#line 2924
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_17) {
#line 2929
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_18) {
#line 2934
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_19) {
#line 2939
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_20) {
#line 2944
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_21) {
#line 2949
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_22) {
#line 2954
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_23) {
#line 2959
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_24) {
#line 2964
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_25) {
#line 2969
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_26) {
#line 2974
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_27) {
#line 2979
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_28) {
#line 2984
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_29) {
#line 2989
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_30) {
#line 2994
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_31) {
#line 2999
  char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
  char str2[] = "12333333333333333333333333333333333ab";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strstr_1) {
#line 3004
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_2) {
#line 3009
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_3) {
#line 3014
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_4) {
#line 3019
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_5) {
#line 3024
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_6) {
#line 3029
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_7) {
#line 3034
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_8) {
#line 3039
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_9) {
#line 3044
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_10) {
#line 3049
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_11) {
#line 3054
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_12) {
#line 3059
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_13) {
#line 3064
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_14) {
#line 3069
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_15) {
#line 3074
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_16) {
#line 3079
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_17) {
#line 3084
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_18) {
#line 3089
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_19) {
#line 3094
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_20) {
#line 3099
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_21) {
#line 3104
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_22) {
#line 3109
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_23) {
#line 3114
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_24) {
#line 3119
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_25) {
#line 3124
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_26) {
#line 3129
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_27) {
#line 3134
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_28) {
#line 3139
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_29) {
#line 3144
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_30) {
#line 3149
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_31) {
#line 3154
  char str1[] = "a\0b12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_32) {
#line 3159
  char str1[] = "ab12";
  char str2[] = "12\0ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_33) {
#line 3164
  char str1[] = "ab\012";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_34) {
#line 3169
  char str1[] = "\0";
  char str2[] = "\0";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_35) {
#line 3174
  char str1[] = "\0";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_36) {
#line 3179
  char str1[] = "";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strtok_1) {
#line 3184
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "c";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_2) {
#line 3190
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_3) {
#line 3196
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "a";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_4) {
#line 3202
  char str1[] = "abb";
  char str3[] = "abb";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_5) {
#line 3208
  char str1[] = "bbc";
  char str3[] = "bbc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_6) {
#line 3214
  char str1[] = "aaabbcc";
  char str3[] = "aaabbcc";
  char str2[] = "c";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_7) {
#line 3220
  char str1[] = "aaabbcc";
  char str3[] = "aaabbcc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_8) {
#line 3226
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "d";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_9) {
#line 3232
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "3";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_10) {
#line 3238
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_11) {
#line 3244
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "1";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_12) {
#line 3250
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "4";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_13) {
#line 3256
  char str1[] = "1123";
  char str3[] = "1123";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_14) {
#line 3262
  char str1[] = "1223";
  char str3[] = "1223";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_15) {
#line 3268
  char str1[] = "1\023";
  char str3[] = "1\023";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_16) {
#line 3274
  char str1[] = "1\023";
  char str3[] = "1\023";
  char str2[] = "2";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_17) {
#line 3284
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "b";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_18) {
#line 3294
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_19) {
#line 3304
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_20) {
#line 3316
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_21) {
#line 3326
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_22) {
#line 3338
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_23) {
#line 3350
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "b";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_24) {
#line 3362
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "c";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_ptr_eq(str4, str5);
}
END_TEST

START_TEST(strtok_25) {
#line 3374
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_26) {
#line 3386
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "n";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_27) {
#line 3398
  char str1[] = "0987654546789";
  char str3[] = "0987654546789";
  char str2[] = "5";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_28) {
#line 3410
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "n";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_29) {
#line 3422
  char str1[] = "aaaaaabnnabaaaaa";
  char str3[] = "aaaaaabnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_30) {
#line 3434
  char str1[] = "bnnabaaaaa";
  char str3[] = "bnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, memchr_1);
  tcase_add_test(tc1_1, memchr_2);
  tcase_add_test(tc1_1, memchr_3);
  tcase_add_test(tc1_1, memchr_4);
  tcase_add_test(tc1_1, memchr_5);
  tcase_add_test(tc1_1, memchr_6);
  tcase_add_test(tc1_1, memchr_7);
  tcase_add_test(tc1_1, memchr_8);
  tcase_add_test(tc1_1, memchr_9);
  tcase_add_test(tc1_1, memchr_10);
  tcase_add_test(tc1_1, memchr_11);
  tcase_add_test(tc1_1, memchr_12);
  tcase_add_test(tc1_1, memchr_13);
  tcase_add_test(tc1_1, memchr_14);
  tcase_add_test(tc1_1, memchr_15);
  tcase_add_test(tc1_1, memchr_16);
  tcase_add_test(tc1_1, memchr_17);
  tcase_add_test(tc1_1, memchr_18);
  tcase_add_test(tc1_1, memchr_19);
  tcase_add_test(tc1_1, memchr_20);
  tcase_add_test(tc1_1, memchr_21);
  tcase_add_test(tc1_1, memchr_22);
  tcase_add_test(tc1_1, memchr_23);
  tcase_add_test(tc1_1, memchr_24);
  tcase_add_test(tc1_1, memchr_25);
  tcase_add_test(tc1_1, memchr_26);
  tcase_add_test(tc1_1, memchr_27);
  tcase_add_test(tc1_1, memchr_28);
  tcase_add_test(tc1_1, memchr_29);
  tcase_add_test(tc1_1, memchr_30);
  tcase_add_test(tc1_1, memchr_31);
  tcase_add_test(tc1_1, memchr_32);
  tcase_add_test(tc1_1, memchr_33);
  tcase_add_test(tc1_1, memchr_34);
  tcase_add_test(tc1_1, memchr_35);
  tcase_add_test(tc1_1, memchr_36);
  tcase_add_test(tc1_1, memchr_37);
  tcase_add_test(tc1_1, memchr_38);
  tcase_add_test(tc1_1, memchr_39);
  tcase_add_test(tc1_1, memchr_40);
  tcase_add_test(tc1_1, memchr_41);
  tcase_add_test(tc1_1, memchr_42);
  tcase_add_test(tc1_1, memchr_43);
  tcase_add_test(tc1_1, memcmp_1);
  tcase_add_test(tc1_1, memcmp_2);
  tcase_add_test(tc1_1, memcmp_3);
  tcase_add_test(tc1_1, memcmp_4);
  tcase_add_test(tc1_1, memcmp_5);
  tcase_add_test(tc1_1, memcmp_6);
  tcase_add_test(tc1_1, memcmp_7);
  tcase_add_test(tc1_1, memcmp_8);
  tcase_add_test(tc1_1, memcmp_9);
  tcase_add_test(tc1_1, memcmp_10);
  tcase_add_test(tc1_1, memcmp_11);
  tcase_add_test(tc1_1, memcmp_12);
  tcase_add_test(tc1_1, memcmp_13);
  tcase_add_test(tc1_1, memcmp_14);
  tcase_add_test(tc1_1, memcmp_15);
  tcase_add_test(tc1_1, memcmp_16);
  tcase_add_test(tc1_1, memcmp_17);
  tcase_add_test(tc1_1, memcmp_18);
  tcase_add_test(tc1_1, memcmp_19);
  tcase_add_test(tc1_1, memcmp_20);
  tcase_add_test(tc1_1, memcmp_21);
  tcase_add_test(tc1_1, memcmp_22);
  tcase_add_test(tc1_1, memcmp_23);
  tcase_add_test(tc1_1, memcmp_24);
  tcase_add_test(tc1_1, memcmp_25);
  tcase_add_test(tc1_1, memcmp_26);
  tcase_add_test(tc1_1, memcmp_27);
  tcase_add_test(tc1_1, memcmp_28);
  tcase_add_test(tc1_1, memcmp_29);
  tcase_add_test(tc1_1, memcmp_30);
  tcase_add_test(tc1_1, memcmp_31);
  tcase_add_test(tc1_1, memcmp_32);
  tcase_add_test(tc1_1, memcmp_33);
  tcase_add_test(tc1_1, memcmp_34);
  tcase_add_test(tc1_1, memcmp_35);
  tcase_add_test(tc1_1, memcmp_36);
  tcase_add_test(tc1_1, memcmp_37);
  tcase_add_test(tc1_1, memcmp_38);
  tcase_add_test(tc1_1, memcmp_39);
  tcase_add_test(tc1_1, memcmp_50);
  tcase_add_test(tc1_1, memcmp_51);
  tcase_add_test(tc1_1, memcmp_52);
  tcase_add_test(tc1_1, memcmp_53);
  tcase_add_test(tc1_1, memcmp_54);
  tcase_add_test(tc1_1, memcmp_55);
  tcase_add_test(tc1_1, memcmp_56);
  tcase_add_test(tc1_1, memcmp_57);
  tcase_add_test(tc1_1, memcmp_58);
  tcase_add_test(tc1_1, memcmp_59);
  tcase_add_test(tc1_1, memcmp_60);
  tcase_add_test(tc1_1, memcpy_1);
  tcase_add_test(tc1_1, memcpy_2);
  tcase_add_test(tc1_1, memcpy_3);
  tcase_add_test(tc1_1, memcpy_4);
  tcase_add_test(tc1_1, memcpy_5);
  tcase_add_test(tc1_1, memcpy_6);
  tcase_add_test(tc1_1, memcpy_7);
  tcase_add_test(tc1_1, memcpy_8);
  tcase_add_test(tc1_1, memcpy_9);
  tcase_add_test(tc1_1, memcpy_10);
  tcase_add_test(tc1_1, memcpy_11);
  tcase_add_test(tc1_1, memcpy_12);
  tcase_add_test(tc1_1, memcpy_13);
  tcase_add_test(tc1_1, memcpy_14);
  tcase_add_test(tc1_1, memcpy_15);
  tcase_add_test(tc1_1, memcpy_16);
  tcase_add_test(tc1_1, memcpy_17);
  tcase_add_test(tc1_1, memcpy_18);
  tcase_add_test(tc1_1, memcpy_19);
  tcase_add_test(tc1_1, memcpy_20);
  tcase_add_test(tc1_1, memset_1);
  tcase_add_test(tc1_1, memset_2);
  tcase_add_test(tc1_1, memset_3);
  tcase_add_test(tc1_1, memset_4);
  tcase_add_test(tc1_1, memset_5);
  tcase_add_test(tc1_1, memset_6);
  tcase_add_test(tc1_1, memset_7);
  tcase_add_test(tc1_1, memset_8);
  tcase_add_test(tc1_1, memset_9);
  tcase_add_test(tc1_1, memset_10);
  tcase_add_test(tc1_1, memset_11);
  tcase_add_test(tc1_1, memset_12);
  tcase_add_test(tc1_1, memset_13);
  tcase_add_test(tc1_1, memset_14);
  tcase_add_test(tc1_1, memset_15);
  tcase_add_test(tc1_1, memset_16);
  tcase_add_test(tc1_1, memset_17);
  tcase_add_test(tc1_1, memset_18);
  tcase_add_test(tc1_1, memset_19);
  tcase_add_test(tc1_1, memset_20);
  tcase_add_test(tc1_1, memset_21);
  tcase_add_test(tc1_1, memset_22);
  tcase_add_test(tc1_1, memset_23);
  tcase_add_test(tc1_1, memset_24);
  tcase_add_test(tc1_1, memset_25);
  tcase_add_test(tc1_1, memset_26);
  tcase_add_test(tc1_1, memset_27);
  tcase_add_test(tc1_1, memset_28);
  tcase_add_test(tc1_1, memset_29);
  tcase_add_test(tc1_1, memset_30);
  tcase_add_test(tc1_1, memset_31);
  tcase_add_test(tc1_1, memset_32);
  tcase_add_test(tc1_1, memset_33);
  tcase_add_test(tc1_1, memset_34);
  tcase_add_test(tc1_1, memset_35);
  tcase_add_test(tc1_1, memset_36);
  tcase_add_test(tc1_1, memset_37);
  tcase_add_test(tc1_1, memset_38);
  tcase_add_test(tc1_1, memset_39);
  tcase_add_test(tc1_1, memset_40);
  tcase_add_test(tc1_1, memset_41);
  tcase_add_test(tc1_1, memset_42);
  tcase_add_test(tc1_1, memset_43);
  tcase_add_test(tc1_1, memset_44);
  tcase_add_test(tc1_1, memset_45);
  tcase_add_test(tc1_1, memset_46);
  tcase_add_test(tc1_1, strncat_1);
  tcase_add_test(tc1_1, strncat_2);
  tcase_add_test(tc1_1, strncat_3);
  tcase_add_test(tc1_1, strncat_4);
  tcase_add_test(tc1_1, strncat_5);
  tcase_add_test(tc1_1, strncat_6);
  tcase_add_test(tc1_1, strncat_7);
  tcase_add_test(tc1_1, strncat_8);
  tcase_add_test(tc1_1, strncat_9);
  tcase_add_test(tc1_1, strncat_10);
  tcase_add_test(tc1_1, strncat_11);
  tcase_add_test(tc1_1, strncat_12);
  tcase_add_test(tc1_1, strncat_13);
  tcase_add_test(tc1_1, strncat_14);
  tcase_add_test(tc1_1, strncat_16);
  tcase_add_test(tc1_1, strncat_17);
  tcase_add_test(tc1_1, strncat_18);
  tcase_add_test(tc1_1, strncat_19);
  tcase_add_test(tc1_1, strncat_20);
  tcase_add_test(tc1_1, strchr_1);
  tcase_add_test(tc1_1, strchr_2);
  tcase_add_test(tc1_1, strchr_3);
  tcase_add_test(tc1_1, strchr_4);
  tcase_add_test(tc1_1, strchr_5);
  tcase_add_test(tc1_1, strchr_6);
  tcase_add_test(tc1_1, strchr_7);
  tcase_add_test(tc1_1, strchr_8);
  tcase_add_test(tc1_1, strchr_9);
  tcase_add_test(tc1_1, strchr_10);
  tcase_add_test(tc1_1, strchr_11);
  tcase_add_test(tc1_1, strchr_12);
  tcase_add_test(tc1_1, strchr_13);
  tcase_add_test(tc1_1, strchr_14);
  tcase_add_test(tc1_1, strchr_15);
  tcase_add_test(tc1_1, strchr_16);
  tcase_add_test(tc1_1, strchr_17);
  tcase_add_test(tc1_1, strchr_18);
  tcase_add_test(tc1_1, strchr_19);
  tcase_add_test(tc1_1, strchr_20);
  tcase_add_test(tc1_1, strchr_21);
  tcase_add_test(tc1_1, strncmp_1);
  tcase_add_test(tc1_1, strncmp_2);
  tcase_add_test(tc1_1, strncmp_3);
  tcase_add_test(tc1_1, strncmp_4);
  tcase_add_test(tc1_1, strncmp_5);
  tcase_add_test(tc1_1, strncmp_6);
  tcase_add_test(tc1_1, strncmp_7);
  tcase_add_test(tc1_1, strncmp_8);
  tcase_add_test(tc1_1, strncmp_9);
  tcase_add_test(tc1_1, strncmp_10);
  tcase_add_test(tc1_1, strncmp_11);
  tcase_add_test(tc1_1, strncmp_12);
  tcase_add_test(tc1_1, strncmp_13);
  tcase_add_test(tc1_1, strncmp_14);
  tcase_add_test(tc1_1, strncmp_15);
  tcase_add_test(tc1_1, strncmp_16);
  tcase_add_test(tc1_1, strncmp_17);
  tcase_add_test(tc1_1, strncmp_18);
  tcase_add_test(tc1_1, strncmp_19);
  tcase_add_test(tc1_1, strncmp_20);
  tcase_add_test(tc1_1, strncmp_21);
  tcase_add_test(tc1_1, strncmp_22);
  tcase_add_test(tc1_1, strncmp_23);
  tcase_add_test(tc1_1, strncmp_24);
  tcase_add_test(tc1_1, strncmp_25);
  tcase_add_test(tc1_1, strncmp_26);
  tcase_add_test(tc1_1, strncmp_27);
  tcase_add_test(tc1_1, strncmp_28);
  tcase_add_test(tc1_1, strncmp_29);
  tcase_add_test(tc1_1, strncmp_30);
  tcase_add_test(tc1_1, strncmp_31);
  tcase_add_test(tc1_1, strncmp_32);
  tcase_add_test(tc1_1, strncmp_33);
  tcase_add_test(tc1_1, strncmp_34);
  tcase_add_test(tc1_1, strncmp_35);
  tcase_add_test(tc1_1, strncmp_36);
  tcase_add_test(tc1_1, strncmp_37);
  tcase_add_test(tc1_1, strncmp_38);
  tcase_add_test(tc1_1, strncmp_39);
  tcase_add_test(tc1_1, strncmp_40);
  tcase_add_test(tc1_1, strncmp_41);
  tcase_add_test(tc1_1, strncmp_42);
  tcase_add_test(tc1_1, strncmp_43);
  tcase_add_test(tc1_1, strncmp_44);
  tcase_add_test(tc1_1, strncmp_45);
  tcase_add_test(tc1_1, strncmp_46);
  tcase_add_test(tc1_1, strncmp_47);
  tcase_add_test(tc1_1, strncmp_48);
  tcase_add_test(tc1_1, strncmp_49);
  tcase_add_test(tc1_1, strncmp_50);
  tcase_add_test(tc1_1, strncmp_51);
  tcase_add_test(tc1_1, strncmp_52);
  tcase_add_test(tc1_1, strncmp_53);
  tcase_add_test(tc1_1, strncmp_54);
  tcase_add_test(tc1_1, strncmp_55);
  tcase_add_test(tc1_1, strncmp_56);
  tcase_add_test(tc1_1, strncmp_57);
  tcase_add_test(tc1_1, strncmp_58);
  tcase_add_test(tc1_1, strncmp_59);
  tcase_add_test(tc1_1, strncmp_60);
  tcase_add_test(tc1_1, strncpy_1);
  tcase_add_test(tc1_1, strncpy_2);
  tcase_add_test(tc1_1, strncpy_3);
  tcase_add_test(tc1_1, strncpy_4);
  tcase_add_test(tc1_1, strncpy_5);
  tcase_add_test(tc1_1, strncpy_6);
  tcase_add_test(tc1_1, strncpy_7);
  tcase_add_test(tc1_1, strncpy_8);
  tcase_add_test(tc1_1, strncpy_9);
  tcase_add_test(tc1_1, strncpy_10);
  tcase_add_test(tc1_1, strncpy_11);
  tcase_add_test(tc1_1, strncpy_12);
  tcase_add_test(tc1_1, strncpy_13);
  tcase_add_test(tc1_1, strncpy_14);
  tcase_add_test(tc1_1, strncpy_15);
  tcase_add_test(tc1_1, strncpy_16);
  tcase_add_test(tc1_1, strncpy_17);
  tcase_add_test(tc1_1, strncpy_18);
  tcase_add_test(tc1_1, strncpy_19);
  tcase_add_test(tc1_1, strncpy_20);
  tcase_add_test(tc1_1, strcspn_1);
  tcase_add_test(tc1_1, strcspn_2);
  tcase_add_test(tc1_1, strcspn_3);
  tcase_add_test(tc1_1, strcspn_4);
  tcase_add_test(tc1_1, strcspn_5);
  tcase_add_test(tc1_1, strcspn_6);
  tcase_add_test(tc1_1, strcspn_7);
  tcase_add_test(tc1_1, strcspn_8);
  tcase_add_test(tc1_1, strcspn_9);
  tcase_add_test(tc1_1, strcspn_10);
  tcase_add_test(tc1_1, strcspn_11);
  tcase_add_test(tc1_1, strcspn_12);
  tcase_add_test(tc1_1, strcspn_13);
  tcase_add_test(tc1_1, strcspn_14);
  tcase_add_test(tc1_1, strcspn_15);
  tcase_add_test(tc1_1, strcspn_16);
  tcase_add_test(tc1_1, strcspn_17);
  tcase_add_test(tc1_1, strcspn_18);
  tcase_add_test(tc1_1, strcspn_19);
  tcase_add_test(tc1_1, strcspn_20);
  tcase_add_test(tc1_1, strcspn_21);
  tcase_add_test(tc1_1, strcspn_22);
  tcase_add_test(tc1_1, strcspn_23);
  tcase_add_test(tc1_1, strcspn_24);
  tcase_add_test(tc1_1, strcspn_25);
  tcase_add_test(tc1_1, strcspn_26);
  tcase_add_test(tc1_1, strcspn_27);
  tcase_add_test(tc1_1, strcspn_28);
  tcase_add_test(tc1_1, strcspn_29);
  tcase_add_test(tc1_1, strcspn_30);
  tcase_add_test(tc1_1, strlen_1);
  tcase_add_test(tc1_1, strlen_2);
  tcase_add_test(tc1_1, strlen_3);
  tcase_add_test(tc1_1, strlen_4);
  tcase_add_test(tc1_1, strlen_5);
  tcase_add_test(tc1_1, strlen_6);
  tcase_add_test(tc1_1, strlen_7);
  tcase_add_test(tc1_1, strlen_8);
  tcase_add_test(tc1_1, strlen_9);
  tcase_add_test(tc1_1, strlen_10);
  tcase_add_test(tc1_1, strlen_11);
  tcase_add_test(tc1_1, strlen_12);
  tcase_add_test(tc1_1, strlen_13);
  tcase_add_test(tc1_1, strlen_14);
  tcase_add_test(tc1_1, strlen_15);
  tcase_add_test(tc1_1, strlen_16);
  tcase_add_test(tc1_1, strlen_17);
  tcase_add_test(tc1_1, strlen_18);
  tcase_add_test(tc1_1, strlen_19);
  tcase_add_test(tc1_1, strlen_20);
  tcase_add_test(tc1_1, strpbrk_1);
  tcase_add_test(tc1_1, strpbrk_2);
  tcase_add_test(tc1_1, strpbrk_3);
  tcase_add_test(tc1_1, strpbrk_4);
  tcase_add_test(tc1_1, strpbrk_5);
  tcase_add_test(tc1_1, strpbrk_6);
  tcase_add_test(tc1_1, strpbrk_7);
  tcase_add_test(tc1_1, strpbrk_8);
  tcase_add_test(tc1_1, strpbrk_9);
  tcase_add_test(tc1_1, strpbrk_10);
  tcase_add_test(tc1_1, strpbrk_11);
  tcase_add_test(tc1_1, strpbrk_12);
  tcase_add_test(tc1_1, strpbrk_13);
  tcase_add_test(tc1_1, strpbrk_14);
  tcase_add_test(tc1_1, strpbrk_15);
  tcase_add_test(tc1_1, strpbrk_16);
  tcase_add_test(tc1_1, strpbrk_17);
  tcase_add_test(tc1_1, strpbrk_18);
  tcase_add_test(tc1_1, strpbrk_19);
  tcase_add_test(tc1_1, strpbrk_20);
  tcase_add_test(tc1_1, strpbrk_21);
  tcase_add_test(tc1_1, strpbrk_22);
  tcase_add_test(tc1_1, strpbrk_23);
  tcase_add_test(tc1_1, strpbrk_24);
  tcase_add_test(tc1_1, strpbrk_25);
  tcase_add_test(tc1_1, strpbrk_26);
  tcase_add_test(tc1_1, strpbrk_27);
  tcase_add_test(tc1_1, strpbrk_28);
  tcase_add_test(tc1_1, strpbrk_29);
  tcase_add_test(tc1_1, strpbrk_30);
  tcase_add_test(tc1_1, strpbrk_31);
  tcase_add_test(tc1_1, strpbrk_32);
  tcase_add_test(tc1_1, strpbrk_33);
  tcase_add_test(tc1_1, strpbrk_34);
  tcase_add_test(tc1_1, strpbrk_35);
  tcase_add_test(tc1_1, strpbrk_36);
  tcase_add_test(tc1_1, strpbrk_37);
  tcase_add_test(tc1_1, strpbrk_38);
  tcase_add_test(tc1_1, strpbrk_39);
  tcase_add_test(tc1_1, strpbrk_40);
  tcase_add_test(tc1_1, strrchr_1);
  tcase_add_test(tc1_1, strrchr_2);
  tcase_add_test(tc1_1, strrchr_3);
  tcase_add_test(tc1_1, strrchr_4);
  tcase_add_test(tc1_1, strrchr_5);
  tcase_add_test(tc1_1, strrchr_6);
  tcase_add_test(tc1_1, strrchr_7);
  tcase_add_test(tc1_1, strrchr_8);
  tcase_add_test(tc1_1, strrchr_9);
  tcase_add_test(tc1_1, strrchr_10);
  tcase_add_test(tc1_1, strrchr_11);
  tcase_add_test(tc1_1, strrchr_12);
  tcase_add_test(tc1_1, strrchr_13);
  tcase_add_test(tc1_1, strrchr_14);
  tcase_add_test(tc1_1, strrchr_15);
  tcase_add_test(tc1_1, strrchr_16);
  tcase_add_test(tc1_1, strrchr_17);
  tcase_add_test(tc1_1, strrchr_18);
  tcase_add_test(tc1_1, strrchr_19);
  tcase_add_test(tc1_1, strrchr_20);
  tcase_add_test(tc1_1, strspn_1);
  tcase_add_test(tc1_1, strspn_2);
  tcase_add_test(tc1_1, strspn_3);
  tcase_add_test(tc1_1, strspn_4);
  tcase_add_test(tc1_1, strspn_5);
  tcase_add_test(tc1_1, strspn_6);
  tcase_add_test(tc1_1, strspn_7);
  tcase_add_test(tc1_1, strspn_8);
  tcase_add_test(tc1_1, strspn_9);
  tcase_add_test(tc1_1, strspn_10);
  tcase_add_test(tc1_1, strspn_11);
  tcase_add_test(tc1_1, strspn_12);
  tcase_add_test(tc1_1, strspn_13);
  tcase_add_test(tc1_1, strspn_14);
  tcase_add_test(tc1_1, strspn_15);
  tcase_add_test(tc1_1, strspn_16);
  tcase_add_test(tc1_1, strspn_17);
  tcase_add_test(tc1_1, strspn_18);
  tcase_add_test(tc1_1, strspn_19);
  tcase_add_test(tc1_1, strspn_20);
  tcase_add_test(tc1_1, strspn_21);
  tcase_add_test(tc1_1, strspn_22);
  tcase_add_test(tc1_1, strspn_23);
  tcase_add_test(tc1_1, strspn_24);
  tcase_add_test(tc1_1, strspn_25);
  tcase_add_test(tc1_1, strspn_26);
  tcase_add_test(tc1_1, strspn_27);
  tcase_add_test(tc1_1, strspn_28);
  tcase_add_test(tc1_1, strspn_29);
  tcase_add_test(tc1_1, strspn_30);
  tcase_add_test(tc1_1, strspn_31);
  tcase_add_test(tc1_1, strstr_1);
  tcase_add_test(tc1_1, strstr_2);
  tcase_add_test(tc1_1, strstr_3);
  tcase_add_test(tc1_1, strstr_4);
  tcase_add_test(tc1_1, strstr_5);
  tcase_add_test(tc1_1, strstr_6);
  tcase_add_test(tc1_1, strstr_7);
  tcase_add_test(tc1_1, strstr_8);
  tcase_add_test(tc1_1, strstr_9);
  tcase_add_test(tc1_1, strstr_10);
  tcase_add_test(tc1_1, strstr_11);
  tcase_add_test(tc1_1, strstr_12);
  tcase_add_test(tc1_1, strstr_13);
  tcase_add_test(tc1_1, strstr_14);
  tcase_add_test(tc1_1, strstr_15);
  tcase_add_test(tc1_1, strstr_16);
  tcase_add_test(tc1_1, strstr_17);
  tcase_add_test(tc1_1, strstr_18);
  tcase_add_test(tc1_1, strstr_19);
  tcase_add_test(tc1_1, strstr_20);
  tcase_add_test(tc1_1, strstr_21);
  tcase_add_test(tc1_1, strstr_22);
  tcase_add_test(tc1_1, strstr_23);
  tcase_add_test(tc1_1, strstr_24);
  tcase_add_test(tc1_1, strstr_25);
  tcase_add_test(tc1_1, strstr_26);
  tcase_add_test(tc1_1, strstr_27);
  tcase_add_test(tc1_1, strstr_28);
  tcase_add_test(tc1_1, strstr_29);
  tcase_add_test(tc1_1, strstr_30);
  tcase_add_test(tc1_1, strstr_31);
  tcase_add_test(tc1_1, strstr_32);
  tcase_add_test(tc1_1, strstr_33);
  tcase_add_test(tc1_1, strstr_34);
  tcase_add_test(tc1_1, strstr_35);
  tcase_add_test(tc1_1, strstr_36);
  tcase_add_test(tc1_1, strtok_1);
  tcase_add_test(tc1_1, strtok_2);
  tcase_add_test(tc1_1, strtok_3);
  tcase_add_test(tc1_1, strtok_4);
  tcase_add_test(tc1_1, strtok_5);
  tcase_add_test(tc1_1, strtok_6);
  tcase_add_test(tc1_1, strtok_7);
  tcase_add_test(tc1_1, strtok_8);
  tcase_add_test(tc1_1, strtok_9);
  tcase_add_test(tc1_1, strtok_10);
  tcase_add_test(tc1_1, strtok_11);
  tcase_add_test(tc1_1, strtok_12);
  tcase_add_test(tc1_1, strtok_13);
  tcase_add_test(tc1_1, strtok_14);
  tcase_add_test(tc1_1, strtok_15);
  tcase_add_test(tc1_1, strtok_16);
  tcase_add_test(tc1_1, strtok_17);
  tcase_add_test(tc1_1, strtok_18);
  tcase_add_test(tc1_1, strtok_19);
  tcase_add_test(tc1_1, strtok_20);
  tcase_add_test(tc1_1, strtok_21);
  tcase_add_test(tc1_1, strtok_22);
  tcase_add_test(tc1_1, strtok_23);
  tcase_add_test(tc1_1, strtok_24);
  tcase_add_test(tc1_1, strtok_25);
  tcase_add_test(tc1_1, strtok_26);
  tcase_add_test(tc1_1, strtok_27);
  tcase_add_test(tc1_1, strtok_28);
  tcase_add_test(tc1_1, strtok_29);
  tcase_add_test(tc1_1, strtok_30);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}