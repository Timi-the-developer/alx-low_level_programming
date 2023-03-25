#include "main.h"

/**
 * _isdigit - function to check for a digit
 *
 * @c: number to be checked
 *
 * Return: 1 if c is a digit betwen 0-9
 * and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
