#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes that compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
