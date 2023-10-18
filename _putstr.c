#include "main.h"
/**
 * _putstr - a function that prints string to the stdout
 *
 * @arg: the string to check
 *
 * Return: nothing
 */
int _putstr(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i;
	int count;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
