#include "main.h"

/**
 * _puts - Prints the string
 * @str: the string to print
 * Return: void
 */

void _put(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}