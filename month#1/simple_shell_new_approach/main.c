#include "header.h"
/* main function */
int main(void)
{
	char *cmd, *path, *envv[1024];
	int i = 0, controller = 0;
	
	while (controller != 1)
	{
		pre_line();
		cmd = get_user_input();
		path = path_finder();
		string_splitter(envv, path, ":");
		my_execute(cmd, envv);
		free(cmd);
		if (!isatty(STDIN_FILENO))
		{
			return (0);
		}
	}
	while (envv[i])
	{
		free(envv[i]);
	}
	return (0);
}
