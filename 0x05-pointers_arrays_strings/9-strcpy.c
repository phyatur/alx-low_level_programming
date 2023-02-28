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
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
