#include "header.h"
void free_struct(exit_struct_t *d)
{
	if (d != NULL)
	{
		free(d->exit_1);
		free(d);
	}
}
