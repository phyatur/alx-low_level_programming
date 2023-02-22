#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 * print_alphabet - prints alpphabets in lowercase followed by a new line
 */

void print_alphabet(void)

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
}
