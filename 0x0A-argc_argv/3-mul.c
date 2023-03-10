#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		int i;
		int j = 1;

		for (i = 1; i < 3; i++)
		{
			j *= atoi(argv[i]);
		}

		printf("%i\n", j);
	}
	return (0);
}
