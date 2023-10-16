#include "header.h"
int main(void)
{
	char *cmd;
	while (1)
	{
		pre_line();
		cmd = malloc(1024 * sizeof(char));
		cmd = get_user_input();
		my_execute(cmd);
	}
	return (0);
}