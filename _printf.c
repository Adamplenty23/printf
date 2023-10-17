#include "main.h"
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
	
	count = 0;

	if (format == NULL)
		return (-1);

       	for (i = 0; format[i] != '\0'; i++) 
	{
        	if (format[i] != '%') 
		{
			_putchar(format[i]);
			count++;
	       	}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				char character = va_arg(arg, int);
				_putchar(character);
				count++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(arg, char *);
				_putstr(str);
				count++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			i++;
		}
	}
	va_end(arg);
	return (count);
}
