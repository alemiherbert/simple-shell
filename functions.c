/**
 * Summary:	This file contains the implementations of the basic functions
 * defined in shell.h
 *
 * Author:	Alemi Herbert Asiki <alemiherbert@gmail.com>
 * Created: August 2023
 *
 * Copyright Alemi Herbert Asiki 2023
 */

#include "shell.h"

/**
 * display_prompt - print a prompt string on stdout
 * @prompt: the prompt string
 */
void display_prompt(const char *prompt)
{
	write(STDOUT_FILENO, prompt, strlen(prompt));
}

/**
 * read_line - read a line of text from stdin
 * Return: pointer to the string
 */
char *read_line(void)
{
	ssize_t nread, len = 0;
	char *line;

	nread = getline(&line, &len, stdin);

	if (nread == -1)
		return (NULL);

	line[nread - 1] = '\0';
	return (line);
}
