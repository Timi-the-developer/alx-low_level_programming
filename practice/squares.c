#include <stdio.h>

int main()
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		printf("%d\t%d\n", i , i * i);
		i++;
	}
}
