#include "header.h"
/* splits string into array of strings */
void string_splitter(char *arr[], char *str, char *dlm)
{
	char *piece;
	int ctr = 0;

	piece = strtok(str, dlm);
	if (piece)
	{
		while (piece)
		{
			arr[ctr] = _strdup(piece);
			piece = strtok(NULL, dlm);
			ctr += 1;
		}
		arr[ctr] = NULL;
		return;
	}
	else
	{
		return;
	}
}
