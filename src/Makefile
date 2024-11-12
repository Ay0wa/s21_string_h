CC = gcc
CFLAGS = -Werror -Wall -Wextra -std=c11
GCOVFLAGS = -fprofile-arcs -ftest-coverage

HEADERS = s21_string.h headers/s21_sprintf.h C_lib/shit_happens/sprintf_lib/config.h C_lib/shit_happens/sprintf_lib/numtostring.h

SOURCES_C_LIB = $(wildcard ./C_lib/*.c)
SOURCES_Csharp_LIB = $(wildcard ./Csharp_lib/*.c)
SOURCES_SPRINTF_LIB = $(wildcard ./C_lib/shit_happens/sprintf_lib/*.c)
SOURCES_SPRINTF = $(wildcard ./C_lib/shit_happens/s21_sprintf.c)

SOURCES_ALL = $(wildcard ./C_lib/*.c) $(wildcard ./Csharp_lib/*.c) $(wildcard ./C_lib/shit_happens/sprintf_lib/*.c) $(wildcard ./C_lib/shit_happens/s21_sprintf.c)

OBJ_LIBRARY := $(patsubst %.c, %.o, $(SOURCES_C_LIB)) $(patsubst %.c, %.o, $(SOURCES_Csharp_LIB)) $(patsubst %.c, %.o, $(SOURCES_SPRINTF_LIB)) $(patsubst %.c, %.o, $(SOURCES_SPRINTF))

C_TESTS = tests/C_lib_tests/LIB_TESTS.c
Csharp_TESTS = tests/Csharp_lib_tests/LIB_TESTS.c
SPRINTF_TESTS = tests/C_lib_tests/SPRINTF_TESTS.c
MAIN_TESTS = tests/MAIN_TESTS.c

CONFIG_LOCAL_TESTS = tests/sprintf_lib_tests/config_tests.c
MODIFIERS_LOCAL_TESTS = tests/sprintf_lib_tests/modifiers_tests.c
NUMTOSTRING_LOCAL_TESTS = tests/sprintf_lib_tests/numtostring_tests.c

%.o: %.c $(HEADERS)
	gcc $(CFLAGS) -c $< -o $@

all: s21_string.a gcov_report test

s21_string.a: $(OBJ_LIBRARY) $(HEADERS)
	ar rcs s21_string.a $(OBJ_LIBRARY) 
	ranlib s21_string.a
	
test: $(MAIN_TESTS) s21_string.a
	$(CC) $(CFLAGS) $(MAIN_TESTS) s21_string.a -o test.out -lcheck -pthread -lsubunit -lm

sprintf_test: $(SPRINTF_TESTS) s21_string.a
	$(CC) $(CFLAGS) $(SPRINTF_TESTS) s21_string.a -o test.out -lcheck -pthread -lsubunit -lm

csharp_test: $(Csharp_TESTS) s21_string.a
	$(CC) $(CFLAGS) $(Csharp_TESTS) s21_string.a -o test.out -lcheck -pthread -lsubunit -lm

numtostring_localtest: $(NUMTOSTRING_LOCAL_TESTS) s21_string.a
	$(CC) $(CFLAGS) $(NUMTOSTRING_LOCAL_TESTS) s21_string.a -o numtostring_localtest -lm
	./numtostring_localtest

config_localtest: $(CONFIG_LOCAL_TESTS) s21_string.a
	$(CC) $(CFLAGS) $(CONFIG_LOCAL_TESTS) s21_string.a -o config_localtest -lm
	./config_localtest

gcov_report: s21_string.a $(MAIN_TESTS)
	$(CC) $(GCOVFLAGS) $(MAIN_TESTS) $(SOURCES_ALL) -o report.out -lcheck -pthread -lsubunit -lm
	./report.out
	gcov -f $(SOURCES_ALL)
	lcov -t "gcov_report" -o Coverage_Report.info -c -d .
	genhtml -o ./report Coverage_Report.info
	rm -f *.gcno *.gcda *.info report.out *.gcov
	open ./report/index-sort-f.html

check:
	clang-format -n *.h */*.* */*/*/*.* */*/*.*

clean:
	rm -rf *.o ./*/*.o ./*/*/*.o ./*/*/*/*.o report* *.info ./report s21_string.a s21_sprintf numtostring_localtest config_localtest modifiers_localtest test.out