#ifndef PRINT_H
#define PRINT_H

/* Std libraries */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct converter - Takes members that point to specifiers
 * and their functions.
 * @spec: The function to the specifier
 * @func_spec: The specifier function
 */
struct converter
{
	char *spec;
	int (*func_spec)(va_list);
};

/**
 * conver_t - Typedef for the converter struct
 */
typedef struct converter conver_t;

/* Main functions */
int _printf(const char *format, ...);
int _putchar(char c);
int parser(const char *format, va_list spec_list, conver_t fmt[]);

/* Specifier functions */
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);

#endif
