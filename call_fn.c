#include "main.h"

/**
 *   * call_fn - caller function to print specix
 *     * @test: list value
 *       * Return: 0 success
 *         */
int (*call_fn(char test))(va_list)
{
		int count = 0;
		
		fs spec[] =
		{
			{'c', _putchar},
			{'s', _putstr},
			{'i', _putchar},
			{'d', _putchar},
			{'\0', NULL}
		};
		
		while (spec[count].specifier != '\0')
		{
			if (test == spec[count].specifier)
				return (spec[count].hnd);
				count++;
		}
		return (NULL);
}