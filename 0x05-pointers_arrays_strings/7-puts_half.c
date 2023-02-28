#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input string argument
 */

void puts_half(char *str)
{
	int length = 0, i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}
	for ( ; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
