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
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
