#include "main.h"
/**
 * _strchr - print function
 * @s: input
 * @c :input 1
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
