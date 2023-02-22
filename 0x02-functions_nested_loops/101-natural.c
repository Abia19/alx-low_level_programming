#include <stdio.h>

/**
 * main - Prints the sum of ltiples of 3 or 5 up to 1024
 * Return: Always (SUCCESS)
 */
int main(void)
{
	int b, y = 0;

	while (b < 1024)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			y += b;
		}
		b++;
	}
		printf("%d\n", y);
		return (0);
}

