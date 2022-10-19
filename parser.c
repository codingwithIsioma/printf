#include "main.h"

/**
 * parser - Passes the given string through a test, to find
 * a matching format specifier
 *
 * @format: The given string
 * @spec_list: The list of parameters given
 * @fmt: An array of specifiers and their functions
 *
 * Return: The length of the string
 */
int parser(const char *format, va_list spec_list, conver_t fmt[])
{
	int i, j, ret_val, count = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		/* Checks for a specifer and if not */
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}
		else
		{
			for (j = 0; fmt[j].spec != NULL; j++)
			{
				if (fmt[j].spec[0] == format[i + 1])
				{
					ret_val = fmt[j].func_spec(spec_list);
					count += ret_val;
					i++;
					break;
				}
			}
			if (fmt[j].spec == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (count);
}
