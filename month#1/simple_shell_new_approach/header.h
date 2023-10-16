#ifndef _SIMPLE_SHELL_HEADER_
#define _SIMPLE_SHELL_HEADER_
/* type here */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>

int my_strlen(char *str);
void simple_print(char *str);
void my_execute(char *cmd);
int pre_line(void);
char *_strdup(char *str);
char *get_user_input();
char **string_splitter(char *str, char *dlm);
/* type here */
#endif