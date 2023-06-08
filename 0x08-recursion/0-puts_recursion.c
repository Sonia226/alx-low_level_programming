#include "main.h"
/**
* _puts_recursion - the function prints a string
* @s: input
* Return : 0
**/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
