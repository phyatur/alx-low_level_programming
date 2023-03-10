#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num - checks if it's a number
 *
 * @u: argument
 *
 * Return: n if a number
 * -1 if not
 */

int num(char *u)
{
	int i = 0;
	int n = 0;
	int len;

	len = strlen(u);
	while (i < len)
	{
		if (u[i] < '0' || u[i] > '9')
		{
			return (-1);
		}
		else
			n = n * 10 + (u[i] - '0');
		i++;
	}
	return (n);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 * 1 if Error
 */

int main(int argc, char *argv[])
{
	int i, check;
	int j = 0;

	for (i = 1; i < argc; i++)
	{
		check = num(argv[i]);
		if (check == -1)
		{
			printf("Error\n");
			return (1);
		}

		j += check;
	}
	printf("%d\n", j);
	return (0);
}
