#include <stdio.h>

int sumdigits(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return ((n % 10) + sumdigits(n/10));
}

int main(void)
{
	int i;

	for (i = 77; i < 99; i++)
	{
		printf("Sum digits of %d: %d\n", i, sumdigits(i));
	}
	printf("Sum digits of %d: %d\n", 179853674, sumdigits(179853674));
	
	return (0);
}
