#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void run(char *cmd);
/**
 * main - run the program
 *
 * @argc: integer arguments
 * @argv: string array
 * Return: Always 0
 */


int main(int argc, char **argv)
{
	char sentence[100], **cmd;

	while (1)
	{
		printf("#");
		scanf("\n%s", sentence);
		run(sentence);
	}
	return (0);
}

/**
 * run - run bash commands
 *
 * @cmd: commands to run
 */

void run(char cmd[])
{
	if (fork() != 0)
	{
		wait(NULL);
	} else
	{
		execlp(cmd, cmd, NULL);
	}

}
