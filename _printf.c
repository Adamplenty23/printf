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
			if (test == 'c' || test == 's' || test == 'd' || test == 'i')
			{
				count += (call_fn(test))(arg);
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
