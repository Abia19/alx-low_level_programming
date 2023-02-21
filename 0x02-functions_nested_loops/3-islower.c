#include "main.h"

/**
 * _islower - checks lowercase character
 * Return: 1 for lowercase charcater or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	return (0);
}
