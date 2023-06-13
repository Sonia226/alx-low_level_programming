#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new_str[r] = str[r];

	return (new_str);

}
