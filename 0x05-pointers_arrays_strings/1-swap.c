#include "main.h"

/**
 * swap_int - swap the values of the integers
 * @a: pointer for integer a
 * @b: pointer for integer b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
