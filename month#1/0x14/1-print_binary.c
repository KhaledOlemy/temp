#include "main.h"
/**
 * print_binary - just calls other recursive function
 * to conver decimal to binary
 * @n: input decimal number to print in binary
 */
void print_binary(unsigned long int n)
{
	print_item(n, 1073741824, 0);
}


/**
 * print_item - sub function of _printf to print binaries
 * @num: input decimal number to print in binary
 * @iter: highest divisible number to convert decimal to binary
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 */
void print_item(unsigned long int num, unsigned long int iter, int flag)
{

	if (iter != 2)
	{
		iter /= 2;
		if (num / iter == 0 && flag == 0)
		{
			_print_binary(num, iter, 0);
		}
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				_putchar(0 + '0');
			}
			else
			{
				if ((num / iter) > 2)
				{
					_putchar(((num / iter) / 2) + '0');
					_putchar(((num / iter) % 2) + '0');
				}
				else
				{
					_putchar((num / iter) + '0');
				}
			}
			num %= iter;
			_print_binary(num, iter, 1);
		}
	}
	else
	{
		_putchar((num % iter) + '0');
	}
}
