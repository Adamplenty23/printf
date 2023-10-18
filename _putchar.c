#include "main.h"
/**
 * _putchar - a function that print one character
 *
 * @arg: the variable to check
 *
 * Return: the char value
 */

int _putchar(va_list arg)
{
	char a;

	a = va_arg(arg, int);

	return (write(1, &a, 1));
}
