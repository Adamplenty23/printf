#include "main.h"

int main(void)
{
	int len;
	char a = 'a';
	char name[] = "Adam";

	_printf("hi %s, how %cre you, i give you 100%%\n", name, a);
	/*len = printf("abc");*/
	len = _printf("abc");
	printf("%d\n",len);
	return (0);
}
