#include "main.h"

/**
 * _isupper - checks upper letter
 * @a: check number
 * Return: 1 for upper letters or 0 for others
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
