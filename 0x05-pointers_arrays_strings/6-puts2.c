#include "main.h"

/**
 * put2 - Prints every other character of a string
 * @str: The stringto be treated
 * Return: void
 */

void put2(char *str)

{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
