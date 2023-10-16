#include "header.h"

int pre_line(void)
{
	if (isatty(STDIN_FILENO))
	{
		/*
		char cwd[1024];
		char *user;
		char host[1024];

		user = getlogin();
		getcwd(cwd, sizeof(cwd));
		gethostname(host, sizeof(host));
		printf("%s@%s:%s$ ", user, host, cwd);
		*/
		printf("$ ");
	}
	else
	{
		printf("IMPLEMENT HERE ::PRE_LINE.C::");
	}
	return (0);
}
