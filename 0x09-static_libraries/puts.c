#include "main.h"
/**
 * _puts - prints a string
 * @s: inpu
 * t
 * Return:0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
