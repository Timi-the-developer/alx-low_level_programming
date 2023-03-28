#include "main.h"

/**
 * puts2 - print strings
 *
 * @str: function parameter
 * Return: 0
 */
void puts2(char *str)
{
	int x;

	for  (x = 0 ; str[x] != '\0' ; x++)
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');
}


