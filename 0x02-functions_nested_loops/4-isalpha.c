#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * Return: 1 for aphalbetic charcter or 0 for otherwise
 */
int _isalpha(int c)
{
       int c;

       if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
