#include "shell.h"
/**
 * executer_command - tis functionn executes the prompt argument
 * @command: the argument inserted after prompt
 * Return: nothing
 */
void executer_arguments(const char *arguments);

void executer_command(const char *filename, char *const args[])
{
	int status;
	pid_t child_process = fork();
	/*fork system call the child process*/
	if (child_process == -1)/*indicates creation of child fail*/
	{
		perror("fork");
		exit(EXIT_FAILURE);/*exit shell*/
	}
	else if (child_process == 0)/*creation of child success*/
	{
		char *args[] = {"/bin/ls", "-l", NULL};/*NULL u 've reached end*/
		int val = execve(args[0], args, NULL);

		if (val == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else/*this is executed when child was a success and its finished*/
	{
		/*parent process*/
		wait(&status);
	}
}

void executer_arguments(const char *arguments)
{
	int status;
	pid_t child_process = fork();
	if (child_process == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_process == 0)
	{
		/*tokenizing ur command*/
		char *args[100];
		char *token = strtok((char *) arguments, " ");
		int i;

		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;/*null terimanted tyhe argument list*/
		execvp(args[0], args);
		perror("execvp");
		exit(EXIT_FAILURE);
	}
	else
		wait(&status);
}
