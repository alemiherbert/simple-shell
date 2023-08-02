/**
 * Summary:	This file contains the entry point into the shell program
 *
 * Author:	Alemi Herbert Asiki <alemiherbert@gmail.com>
 * Created:	August 2023
 *
 * Copyright of Alemi Herbert Asiki
 */

#include "shell.h"


/**
 * main - the entry point into the program
 * @ac: the argument count
 * @av: the argument vector
 * @env: the environment variables
 *
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	unsigned int status = 1;
	char *line;

	do {
		display_prompt("$ ");
		line = read_line();
		if (line == NULL)
		{
			putchar('\n');
			break;
		}
	} while (status);
	return (0);
}
