#include "main.h"

/**
 *print_most_numbers - function to print most numbers
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int a = 0;

	for (a = 0 ; a < 10 ; ++a)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			putchar (a + '0');
		}
	}
	putchar ('\n');
}
