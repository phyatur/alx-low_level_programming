#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 *
 * @ac: number of arguments
 *
 * @av: arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *duplicate;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}
	l++;

	duplicate = malloc(sizeof(char) * l);
	if (duplicate == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			duplicate[k++] = av[i][j];
		}
		duplicate[k++] = '\n';
	}
	duplicate[k] = '\0';
	return (duplicate);
}
