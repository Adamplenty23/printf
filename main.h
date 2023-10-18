#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct formatSpecifier - a struct for format specifier
 * @specifier: the character to determine the format spec
 * @hnd: the pointer to function
 */
typedef struct formatSpecifier
{
	char specifier;
	void (*hnd)(va_list);
} fs;

int _putstr(va_list);
int _printf(const char *format, ...);
int _putchar(va_list);
int (call_fn(char test)(va_list));
#endif



