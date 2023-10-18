#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct fs - a struct for format specifier
 * @specifier: the character to determine the format spec
 * @hnd: the pointer to function
 */
struct fs
{
	char specifier;
	int (*hnd)(va_list);
};

int _putstr(va_list);
int _printf(const char *format, ...);
int _putchar(va_list);
int (*call_fn(char test))(va_list);
#endif



