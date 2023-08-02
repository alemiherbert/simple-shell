/**
 * Summary: This file contains all the prototypes for the shell project
 *
 * Author:	Alemi Herbert Asiki <alemiherbert@gmail.com>
 * Created:	August 2023
 *
 * Copyright of Alemi Herbert Asiki
 */

#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void display_prompt(const char *prompt);
char *read_line(void);


#endif /* SHELL_H */
