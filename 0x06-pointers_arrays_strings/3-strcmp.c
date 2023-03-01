#include "main.h"

/**
 * _strcmp - compares pointers
 * @s1: First string to be compared
 * @s2: the second string
 * Return: str1 < str2 the negative difference
 * If str1 == str2, 0
 * If strl > str2, the postive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
