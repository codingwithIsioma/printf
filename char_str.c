#include "main.h"

/**
 * print_char - Prints a single character
 * @spec_list: The arguments passed
 * Return: 1 on success, as length of char
 */
int print_char(va_list spec_list)
{
	char c;

	c = (va_arg(spec_list, int));
	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string of chars
 * @spec_list: The arguments passed
 * Return: The length of the string
 */
int print_string(va_list spec_list)
{
	int i;
	char *str;

	str = (va_arg(spec_list, char*));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - Prints a percent char
 * @spec_list: The arguments passed
 * Return: 1 on success, as length of char
 */
int print_percent(__attribute__((unused)) va_list spec_list)
{
	_putchar('%');
	return (1);
}
