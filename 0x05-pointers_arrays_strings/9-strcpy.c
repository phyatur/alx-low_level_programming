#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: argument
 * @src: argument
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}

	return (dest);
}
