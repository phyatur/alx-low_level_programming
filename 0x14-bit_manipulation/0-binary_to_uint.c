#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0
 * or 1b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		number <<= 1;
		number += b[i] - '0';
		i++;
	}

	return (number);
}
