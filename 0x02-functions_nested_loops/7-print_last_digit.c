#include "main.h"

/**
 * print_last_digit -  print the last digit of the number
 *
 * @n: parameter of function
 *
 * Return: always m
 */

int print_last_digit(int n)
{
	int m;

	m = (n % 10);
	if (m < 0)
		m = -(m);
	_putchar(m);
	return (m);
}
