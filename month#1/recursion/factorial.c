#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}

int main(void)
{
	int x, n;
	
	for (n = 0; n < 10; n++)
	{
		x = factorial(n);
		printf("%d!= %d\n", n, x);
	}
	return (0);
}