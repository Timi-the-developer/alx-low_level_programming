#include "main.h"

/**
 * print_diagonal - function to print diagonal line
 *
 * @n: number of lines to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
