#include "main.h"
/**
 * _printf - A custom printf function
 * @format: THis is a character strings
 * Return: lenght of string
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	va_list arg;
	char c;
	char *str;

	va_start(arg, format);
	count = 0;
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(arg, int);
				count += _putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(arg, char *);
				count += _putstr(str);
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
