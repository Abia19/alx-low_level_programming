#include "main.h"

/**
 * _memset - Entry point
 * @s: point destination
 * @b: the constant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
