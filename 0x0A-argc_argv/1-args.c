#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int count;
	(void) argv;

	if (argc >= 0)
	{
	for (count = 0; count < argc; count++)
	{
		printf("%d\n", count);
	}
	}
	return (0);
}
