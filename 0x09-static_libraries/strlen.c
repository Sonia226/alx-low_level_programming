#include "main.h"
/**
 * _strlen - lenght of string
 * @s:input
 * Return:0
 */
int _strlen(char *s)
{int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
