#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: function parameter
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = count ; x >= 0 ; x--)
		putchar(s[x]);
	putchar('\n');
}
