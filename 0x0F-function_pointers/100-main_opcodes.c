#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: arguments   counts
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arrary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arrary = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arrary[i]);
			break;
		}
		printf("%02hhx ", arrary[i]);
	}
	return (0);
}
