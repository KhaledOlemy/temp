#include "header.h"
char *get_user_input()
{
	size_t n = 1024;
	char *buf = NULL, *str;
	
	buf = malloc(sizeof(char) * n);
	getline(&buf, &n, stdin);
	str = _strdup(buf);
	free(buf);
	return (str);
}
