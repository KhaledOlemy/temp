#include "header.h"
/* function to execute command */
void my_execute(char *cmd, char *envv[])
{
	pid_t c_p;
	char *temp[1024], *venv[1024];
	char *honda, *foundit;
	int z = 0;

	while (environ[z])
	{
		venv[z] = strdup(environ[z]);
		z++;
	}
	venv[z] = NULL;
	string_splitter(temp, cmd, "\n ");

	honda = _strdup(temp[0]);
	foundit = search_in_paths(temp[0], envv);
	if (!foundit)
	{
		free(foundit);
		printf("Command '%s' not found\n", temp[0]);
		return;
	}
	c_p = fork();
	if (c_p == -1)
	{
		simple_print("Error forking\n");
		exit(1);
	}
	if (c_p == 0)
	{
		execve(honda, temp, venv);
		if (execve(foundit, temp, venv) == -1) /*string type []*/
		{
			printf("Command '%s' not found\n", honda);
		}
		free(foundit);

	}
	else
	{
		wait(NULL);
	}
}
