#include "main.h"

/**
 * print_stringUpcase - Prints a string, when out of range print \x
 * @spec_list: The list
 * Return: Num
 */
int print_stringUpcase(va_list spec_list)
{
	char *str;
	int i, count = 0;

	str = va_arg(spec_list, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar('A');
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_revStr - Prints a reversed string
 * @spec_list: The list
 * Return: Num
 */
int print_revStr(va_list spec_list)
{
	int i, j = 0, count = 0;
	char *str;

	str = va_arg(spec_list, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (count);
}
