#include "main.h"
/**
 * _putstr - a function that prints string to the stdout
 *
 * @str: the string to check
 *
 * Return: nothing
 */
int _putstr(char *str)
{
	int i;
	int count;

	for(i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
