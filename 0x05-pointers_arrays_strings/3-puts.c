#include "main.h"

/**
 * _puts - prints strings
 * @str: function parameter
 * Return: 0
 */

void _puts(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
