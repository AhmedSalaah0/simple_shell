#include "hsh.h"
/**
 *
 *
 *
 */

void (char *command, char **argv)
{
child_pid = fork();
        if (child_pid == -1)
        {
            perror("Error forking");
            exit(-1);
        }
        else if (child_pid == 0)
        {
            if (execvp(cmd, argv) == -1)
            {
                perror("Error");
                exit(-1);
            }
        }
        else
        {
            waitpid(child_pid, &s, 0);
        }
}
