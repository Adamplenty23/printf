#include "main.h"

int _putchar(va_list arg)
{
	char a;

	a = va_arg(arg,int);

	return(write(1, &a, 1));
}
