#ifndef _SIMPLE_SHELL_HEADER_
#define _SIMPLE_SHELL_HEADER_
/* type here */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>
extern char **environ;
int my_strlen(char *str);
void simple_print(char *str);
void my_execute(char *cmd, char *envv[]);
int pre_line(void);
char *_strdup(char *str);
char *get_user_input();
void string_splitter(char *arr[], char *str, char *dlm);
char *path_finder(void);
char *starts_with(char *haystack, char *needle);
char *search_in_paths(char *command, char *pathlist[]);
/* type here */
#endif