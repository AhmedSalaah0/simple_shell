#include "hsh.h"
/**
 * main - shell program
 * @argc: arguments counter
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char **argv)
{
    char *cmd = NULL;
    size_t len = 0;
    ssize_t checker;
    int s;
    pid_t child_pid;
	
    (void)argc; /* unused */
    while (1)
    {
        write(STDOUT_FILENO, "$ ", 2);
        checker = getline(&cmd, &len, stdin);

        if (checker == -1)
        {
            perror("Error");
            return -1;
        }

        if (cmd[checker - 1] == '\n')
            cmd[checker - 1] = '\0';

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

    free(cmd);
    return 0;
}
