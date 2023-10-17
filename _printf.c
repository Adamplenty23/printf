#include "main.h"

int _putchar(char a);
/**
 * _printf - A custom printf function
 *
 * format: THis is a character strings
 *
 * Return: lenght of string
 */

int _printf(const char *format, ...)
{
	int count;
	int i;
	va_list arg;
	va_start(arg, format);
 int chars_printed = 0;

    while (*format) {
        if (*format != '%') {
            putchar(*format);
            chars_printed++;
        } else {
            format++; // Move past '%'
            if (*format == 'c') {
                char character = va_arg(args, int);
                putchar(character);
                chars_printed++;
            } else if (*format == 's') {
                const char *str = va_arg(args, const char *);
                if (str) {
                    while (*str) {
                        putchar(*str);
                        str++;
                        chars_printed++;
                    }
                }
            } else if (*format == '%') {
                putchar('%');
                chars_printed++;
            }
        }
        format++;
    }

    va_end(args);
	return (count);
}

int main(void)
{
	 int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
}
