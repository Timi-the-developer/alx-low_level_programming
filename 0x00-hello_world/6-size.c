#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 (when successul)
 */

int main(void)
{
	int i;

	char c;

	float f;

	double w;

	long int x;

	long long int y;

	printf("size of int is: %zu\n", sizeof(i));
	printf("size of char is: %zu\n", sizeof(c));
	printf("size of float is: %zu\n", sizeof(f));
	printf("size of double is: %zu\n", sizeof(w));
	printf("size of long int is: %zu\n", sizeof(x));
	printf("size of long long int is: %zu\n", sizeof(y));
	return (0);
}
