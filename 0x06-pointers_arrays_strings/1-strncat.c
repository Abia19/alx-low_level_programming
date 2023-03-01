#include "main.h"

/**
 * _strncat - concatenates two strings
 * an inputted number
 * @dest: appended string
 * @src: appended string to dest
 * @n: the number of bytes from src
 * Return: A pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
