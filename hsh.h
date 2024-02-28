#ifndef HSH_H
#define HSH_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
extern char **environ;
int strlength(char *s);
int StringToInt(char *str);
char *strdublicate(char *s);
#endif
