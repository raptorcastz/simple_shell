#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

/**
 * display_prompt - Displays the shell prompt.
 */
void display_prompt(void);

/**
 * main - Entry point of the simple shell.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes;
	int exit_shell = 0;
	pid_t pid = fork();

	while (!exit_shell)
	{
		display_prompt();

		read_bytes = read(STDIN_FILENO, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			perror("read");
			exit(EXIT_FAILURE);
		}

		/* Handle end of file (Ctrl+D) */
		if (read_bytes == 0)
		{
			putchar('\n');
			exit_shell = 1;
			continue;
		}

		/* Null-terminate the input string */
		buffer[read_bytes - 1] = '\0';

		/* Check if the user entered 'exit' command */
		if (strcmp(buffer, "exit") == 0)
		{
			exit_shell = 1;
			continue;
		}

		/* Fork to create a child process */
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}

		if (pid == 0)
		{
			/* In the child process */
			/* Execute the command using execve */
			if (execlp(buffer, buffer, NULL) == -1)
			{
				perror(buffer);
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			/* In the parent process */
			/* Wait for the child process to complete */
			int status;
			wait(&status);
		}
	}

	return 0;
}

/**
 * display_prompt - Displays the shell prompt.
 */
void display_prompt(void)
{
	printf("#cisfun$ ");
}