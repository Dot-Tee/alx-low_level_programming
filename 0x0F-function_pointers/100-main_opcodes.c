#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main fun
 * @agrc: number of arguments passed to the program
 * @agrv: array of arguments
 *
 * Return: if true 1 otherwise 2
 */

int main(int agrc, char *agrv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (agrc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(agrv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;

		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
