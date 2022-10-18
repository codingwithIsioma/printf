#include "main.h"

/**
 * print_number - Prints an integer
 * @spec_list: The arguments passed
 * Return: The length of the integer
 */
int print_number(va_list spec_list)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(spec_list, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
		num = i;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_integer - Prints an integer to stdout
 * @spec_list: The arguments passed
 * Return: The length of the integer
 */
int print_integer(va_list spec_list)
{
	int int_length;

	int_length = print_number(spec_list);

	return (int_length);
}
