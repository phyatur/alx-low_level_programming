#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int to = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (to / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (to % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
