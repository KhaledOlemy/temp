
#include <stdio.h>

int get_sqrt(int i, int j)
{
	if (i == 0)
	{
		return (j + 1);
	}
	if (i < 0)
	{
		return (-1);
	}
	return get_sqrt(i - (1 + (2 * (j + 1))), j + 1);
}

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return get_sqrt(n, -1);
}

int main(void)
{
	printf("%d\n", _sqrt_recursion(49));
}