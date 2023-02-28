#include "main.h"

/**
 * rev_string - update value.
 *
 * @s: input argument.
 *
 */
void rev_string(char *s)
{
	int length = 0, l = 0, f = 0, x;
	char n;
	char *y = s;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for ( ; f < ((l / 2) + 1) ; f++)
	{
		x = (l - f);
		n = s[f];
		s[f] = s[x];
		s[x] = n;
	}
}
