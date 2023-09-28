#include "main.h"
/**
 * binary_to_uint - converts binary in a string to unsigned int decimal
 * @b: string containing binary number
 *
 * Return: decimal number, 0 if there's a char other than (0 or 1)
 * or the input string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, l, j = 0;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}
	l = strlen(b);
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num += (b[i] - '0') * _pow_recursion(2, j);
		}
		else
		{
			return (0);
		}
		j += 1;
	}
	return (num);
}

/**
 * _pow_recursion- this function calculates x to the power of y
 * @x: the base number
 * @y: the exponent
 * Return: x to the power of y if y >= 0; else -1 to indicate error.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
