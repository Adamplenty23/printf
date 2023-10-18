#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _putstr(char *str);
int _printf(const char *format, ...);
int _putchar(char a);
int (call_fn(fater)(va_list);

typedef struct formatSpecifier
{
        char specifier;
        void (*hnd)(va_list);
} fs;

void _char(va_list);
void _string(va_list);
void _percent(va_list);


















#endif



