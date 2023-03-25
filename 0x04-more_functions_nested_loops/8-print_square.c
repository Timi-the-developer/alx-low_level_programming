#include "main.h"

/**
 * print_square - print in square
 * @size: number of sqaures
 * Return: always 0
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
