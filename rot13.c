#include "main.h"

/**
 * print_rot13 - Prints in r0t13 format
 * @spec_list: The liist
 * Return: Num
 */
int print_rot13(va_list spec_list)
{
	int i, j, count = 0;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_alph[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;

	str = va_arg(spec_list, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (str[i] == alph[j])
			{
				_putchar(rot_alph[j]);
				count++;
				break;
			}
			else if (alph[j + 1] == 0)
			{
				_putchar(str[i]);
				count++;
			}
		}
	}
	return (count);
}
