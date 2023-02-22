#include "main.h"

/**
* main - prints _putchar, followed by a new line.
* Return: 0
*/

int main(void)
{
	int i;
	char t[] = "_putchar";

	for (i = 0; i <= 7; i++)
		{
		_putchar(t[i]);
		}
		_putchar('\n');

	return (0);
}
