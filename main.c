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
          exec(cmd, argv);
    }
    free(cmd);
    return 0;
}
