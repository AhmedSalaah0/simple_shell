#include "hsh.h"
/**
 * exec - excute func
 * @command: execute command
 * @argv: arguments value
 */

void exec(char *command, char **argv)
{
int s;
pid_t ch;
ch = fork();
if (ch == -1)
{
perror("Error forking");
exit(-1);
}
else if (ch == 0)
{
if (execvp(command, argv) == -1)
{
perror("Error");
exit(-1);
}
}
else
{
waitpid(ch, &s, 0);
}
}
