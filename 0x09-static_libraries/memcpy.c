#include "main.h"
/**
 * _memcpy - function memcpy
 * @dest: input
 * @src: input 1
 * @src: input 2
 * @n: input 3
 * Return:0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
