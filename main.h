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

typedef struct formatSpecifier
{
        char specifier;
        void (*handler)(va_list args);
} fs;

void _char(va_list args);
void _string(va_list args);
void _percent(va_list args);


















#endif



