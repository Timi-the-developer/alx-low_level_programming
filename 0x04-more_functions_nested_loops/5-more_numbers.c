#include "main.h"

/**
 * more_numbers - function that prints 10times the numbers
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar ('\n');
	}
}
