#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 *
 * @b: arguments
 *
 * @size: arguments
 */

void print_buffer(char *b, int size)
{
	int space, i;

	for (space = 0; space < size; space += 10)
	{
		printf("%08x: ", space);

		for (i = 0; i < 10; i++)
		{
			if ((i + space) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + space));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + space) >= size)
				break;
			else if (*(b + i + space) >= 31 &&
				 *(b + i + space) <= 126)
				printf("%c", *(b + i + space));
			else
				printf(".");
		}
		if (space >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
