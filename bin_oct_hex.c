#include "main.h"

/**
 * print_unsig_int - Converts a num to an unsigned integer
 * @spec_list: The list of arguments received
 * Return: The num og chars (or digits) to be printed
 */
int print_unsig_int(va_list spec_list)
{
	unsigned int k, num;
	int i, j, count = 0;

	num = va_arg(spec_list, unsigned int);
	if (num == 0)
	{
		_putchar(num + '0');
		count++;
	}
	else if (num > UINT_MAX)
	{
		k = num - UINT_MAX - 1;
		_putchar(k + '0');
		count++;
	}
	else if (num <= UINT_MAX)
	{
		k = num;
		for (j = 0; (k / 10) > 0; j++)
			k /= 10;

		k = num;
		while (j != 0)
		{
			for (i = 0; i < j; i++)
				k /= 10;
			k %= 10;
			_putchar(k + '0');
			count++;
			j--;
			k = num;
		}
		_putchar(k % 10 + '0'), count++;
	}
	else
	{
		k = (UINT_MAX + 1) - num;
		_putchar(k + '0'), count++;
	}
	return (count);
}
/**
 * print_binary - Converts a number to binary
 * @spec_list: The list of args received
 * Return: The num of chars (digits) printed
 */
int print_binary(va_list spec_list)
{
	int num_size = 0, num = 0, base = 2, flag = 0;

	num = va_arg(spec_list, unsigned int);
	num_size = bin_oct_hex_converter(num, base, flag);
	return (num_size);
}
/**
 * print_octal - Converts a number to an octal num
 * @spec_list: The list of args received
 * Return: The num of chars (digits) printed
 */
int print_octal(va_list spec_list)
{
	int num_size = 0, num = 0, base = 8, flag = 0;

	num = va_arg(spec_list, unsigned int);
	num_size = bin_oct_hex_converter(num, base, flag);
	return (num_size);
}
/**
 * print_hex_Lowcase - Convert a num to hexadecimal
 * @spec_list: is
 * Return: Num
 */
int print_hex_Lowcase(va_list spec_list)
{
	int num_size = 0, num = 0, base = 16, flag = 0;

	num = va_arg(spec_list, unsigned int);
	num_size = bin_oct_hex_converter(num, base, flag);
	return (num_size);
}
/**
 * print_hex_Upcase - Convert a num to uppercase hexadecimal
 * @spec_list: is
 * Return: Num
 */
int print_hex_Upcase(va_list spec_list)
{
	int num_size = 0, num = 0, base = 16, flag = 1;

	num = va_arg(spec_list, unsigned int);
	num_size = bin_oct_hex_converter(num, base, flag);
	return (num_size);
}
