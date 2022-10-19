#include "main.h"

/**
 * bin_oct_hex_converter - Converts a num to binary, octal or hexa
 * @num: The given num
 * @base: The base the num will divide with
 * @flag: a checker
 * Return: The
 */
int bin_oct_hex_converter(unsigned int num, int base, int flag)
{
	char hexUpcase[] = "0123456789ABCDEF";
	char hexLowcase[] = "0123456789abcdef";
	char arr[2021];
	char *p;
	int i = 2020, j = 0;

	p = &arr[2020];
	*p = '\0';

	do {
		if (flag != 0)
			*--p = hexUpcase[num % base];
		else
			*--p = hexLowcase[num % base];
		num = num / base;
		i--;
	} while (num != 0);

	for (j = i; arr[j] != 0; j++)
	{
		_putchar(arr[j]);
	}
	return (2020 - i);
}
