#include "main.h"

/**
 * puts_half - prints half of string
 * @str: function parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	if (length % 2 == 0)
	{
		foe (i = length / 2 ; str[i] != '\0' ; i++)
			putchar(str[i]);
		putchar('\n');
	}
	else if
		(length % 2 ! = 0)
	{
		for (i = (length - 1) / 2 ; str[i] != '\0' ; i++)
			putchar(str[i]);
		putchar('\n');
	}
}
