#include "header.h"
/* gets user input using getline */
char *get_user_input()
{
	size_t n = 1024;
	char *buf = NULL, *str;
	int nchar_read;

	buf = malloc(sizeof(char) * n);
	nchar_read = getline(&buf, &n, stdin);
	if (nchar_read == -1)
	{
		_printf("Exiting shell");
		return (NULL);
	}
	str = _strdup(buf);
	free(buf);
	return (str);
}
