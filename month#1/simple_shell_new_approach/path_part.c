#include "header.h"

char *starts_with(char *haystack, char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL);
		}
	}
	return (haystack);
}

char *path_finder(void)
{
	char *path = "PATH=";
	int c = 0;
	char *str = NULL;
	char *piece;

	while (environ[c])
	{
		if (starts_with(environ[c], path))
		{
			str = strdup(environ[c]);
		}
		c++;
	}
	piece = strtok(str, "=");
	piece = strtok(NULL, "=");
	return (piece);
}

char *search_in_paths(char *command, char *pathlist[])
{
	int z = 0, q = 0;
	char *temoo[1024];
	char *str_holder = NULL;

	string_splitter(temoo, command, "/");
	while (temoo[q])
	{
		q++;
	}
	while (pathlist[z])
	{
		str_holder = pathlist[z];
		str_holder = strcat(str_holder, "/");
		str_holder = strcat(str_holder, temoo[q - 1]);
		if (access(str_holder, F_OK) == 0)
		{
			return (str_holder);
		}
		z++;
	}
	return (NULL);
}
