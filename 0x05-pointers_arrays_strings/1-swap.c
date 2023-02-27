#include <stdio.h>

/**
 * swap_int - swaps the integers value
 * @a: the first integer
 * @b: the second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
