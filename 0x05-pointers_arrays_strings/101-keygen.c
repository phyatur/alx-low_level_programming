#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	char r;

	srand(time(NULL));
	while (x <= 2645)
	{
		r = rand() % 128;
		x += r;
		putchar(r);
	}
	putchar(2772 - x);
	return (0);
}
