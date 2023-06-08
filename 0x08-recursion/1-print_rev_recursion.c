#include "main.h"
/**
* _print_rev_recursion - function prints a string in reverse
* @s : the string to be printed
* Return : 0
**/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
		_putchar(*s);
}
