#include "main.h"

/**
 * _putchar - Prints a char
 * @c: The char to be printed
 *
 * Return: The printed char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
