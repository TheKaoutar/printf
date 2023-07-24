#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);

/* Funtions to print chars and strings */
void p(char c) /* p - write to the console */
{
char *pc = &c;
write(STDOUT_FILENO, pc, sizeof(c));
}
void ps(char *s) /* ps - write to the console */
{
write(STDOUT_FILENO, s, strlen(s));
}

#endif
