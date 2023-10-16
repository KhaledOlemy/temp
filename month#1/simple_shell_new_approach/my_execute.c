#include "header.h"
/* function 2 to execute command */
void my_execute(char *cmd)
{
	pid_t c_p;
	int i = 0;

	char **av = string_splitter(cmd, " ");
	char * nv[] = {NULL};

	char *temp[] = **av;

	c_p = fork();
	if (c_p == -1)
	{
		simple_print("error forking");
		exit(1);
	}
	if (c_p == 0)
	{
		if (execve(av[0], av, nv) == -1) /*string type []*/
		{
			printf("ERROR\n");
		}
	}
	else
	{
		wait(NULL);
	}

}

// void my_execute(char *cmd)
// {
// 	pid_t c_p = fork();
// 	char * av[10] = {"ls", "-la", NULL};
// 	char * nv[10] = {NULL};
// 	if (c_p == -1)
// 	{
// 		printf("hi1\n");
// 		simple_print("error forking");
// 		exit(1);
// 	}
// 	if (c_p == 0)
// 	{
// 		printf("hi2\n");
// 		execve("/usr/bin/ls", av, nv);
// 	}
// 	else
// 	{
// 		wait(NULL);
// 	}
//
// }