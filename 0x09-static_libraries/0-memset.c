#include "main.h"
/**
 * _memset - print something
 * @s: input
 * @b: input 1
 * @n: input 2
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
