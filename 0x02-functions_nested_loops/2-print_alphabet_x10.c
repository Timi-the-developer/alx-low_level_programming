#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1 ; i < 11 ; ++i)
	{
		for (c = 'a' ; c <= 'z' ; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
