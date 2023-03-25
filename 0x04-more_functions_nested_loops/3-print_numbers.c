#include "main.h"

/**
 * print_numbers - function to print numbers 0-9
 *
 * Return: always 0
 *
 */

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; ++a)
	{
		putchar (a + '0');
	}
	putchar ('\n');
}
