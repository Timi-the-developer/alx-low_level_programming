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

	long long int;

	printf("size of int is: %zu\n", sizeof(int));
	printf("size of char is: %zu\n", sizeof(char));
	printf("size of float is: %zu\n", sizeof(float));
	printf("size of double is: %zu\n", sizeof(double));
	printf("size of long int is: %zu\n", sizeof(long int));
	printf("size of long long int is: %zu\n", sizeof(long long int));
	return (0);
}
