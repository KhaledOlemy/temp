#include "header.h"

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
void simple_print(char *str)
{
	write(1, str, my_strlen(str));
}