#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: 1 or number of coin
 **/

int main(int argc, char *argv[])
{
	int i, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	coin = 0;
	if (i > 25)
	{
		while (i >= 25)
			i -= 25, coin++;
	}
	if (i > 10 && i < 25)
	{
		while (i >= 10)
			i -= 10, coin++;
	}
	if (i > 5 && i < 10)
	{
		while (i >= 5)
			i -= 5, coin++;
	}
	if (i > 2 && i < 5)
	{
		while (i >= 2)
			i -= 2, coin++;
	}
	if (i == 1 || i == 2 || i == 5 || i == 10 || i == 25)
	{
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
