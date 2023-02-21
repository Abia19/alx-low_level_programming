#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: charcter
 * Return: 1 for lowercase charcater or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
