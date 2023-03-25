#include "main.h"

/**
 * _isupper - checks if integer is uppercase
 * or lowercase
 *
 * @c: integer to be checked
 *
 * Return: 1 if c is uppercase
 * and 0 if c is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return ('c');
}
