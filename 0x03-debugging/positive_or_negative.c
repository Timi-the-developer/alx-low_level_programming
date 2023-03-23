#include "main.h"

/**
 * positive_or_negative - checks for positive and negative integer
 *
 * @i: parameter of integer
 *
 * Return: always  0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is nrgative", i);
	else
		printf("%d is positive", i);
}
