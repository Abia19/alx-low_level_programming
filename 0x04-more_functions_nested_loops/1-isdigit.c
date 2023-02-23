#include "main.h"

/**
 * _isdigit - check for digit
 * @a: check this number
 * Return: 1 for digit or 0 for anything else
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
