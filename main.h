#ifndef _MAIN-H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct format - struct to choose the right function depending
 * @sp: format specifier
 * @f: pointer to the corresponding printing function
 */
typedef struct format
{
	char sp;
	int (*f)(va_list args);
} fmt;
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int (*get_print(char s))(va_list);
int print_percent(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_int(va_list args);
void print_number(int n);
int count_digit(int x);

#endif
