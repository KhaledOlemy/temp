#include "header.h"
/* main function */
int main(void)
{
	char *cmd;
	char *envv[1024];

	while (1)
	{
		pre_line();
		cmd = get_user_input();
		char *path = path_finder();
		string_splitter(envv, path, ":");
		my_execute(cmd, envv);
		free(cmd);
	}
	int i = 0;
	while (envv[i])
	{
		free(envv[i]);
	}
	return (0);
}
