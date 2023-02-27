#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elemebts of an array
 * @a: Array of integers
 * @n: Number of arrays to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;
	
	for (k = 0; k < n; k++)
	{
		printf("%d\n", a[k]);
		if (k != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
