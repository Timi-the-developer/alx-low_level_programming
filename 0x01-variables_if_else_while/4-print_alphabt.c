#include <stdio.h>

/**
 * main - entry function
 *
 * Return: 0 (when successful)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	return (0);
}
