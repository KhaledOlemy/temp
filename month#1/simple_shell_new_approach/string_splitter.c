#include "header.h"

char **string_splitter(char *str, char *dlm)
{
	char *out[1024] = {};
	char *piece;
	int ctr = 0;
	
	piece = strtok(str, dlm);
	while (piece)
	{
		out[ctr] = malloc(strlen(piece) * sizeof(char));
		out[ctr] = _strdup(piece);
		piece = strtok(NULL, dlm);
		ctr += 1;
	}
	char **dox = out;
	return (dox);
}