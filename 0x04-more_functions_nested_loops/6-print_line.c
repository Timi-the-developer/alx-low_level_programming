#include "main.h"

/**
 * print_line - function to print line
 * @n: the number of lines to be printed
 * Retur: always 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
