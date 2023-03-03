#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: char argument
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 97 || s[i] == 65)
		{
			s[i] = 52;
		}
		else if (s[i] == 101 || s[i] == 69)
		{
			s[i] = 51;
		}
		else if (s[i] == 111 || s[i] == 79)
		{
			s[i] = 48;
		}				
		else if (s[i] == 116 || s[i] == 84)
		{
			s[i] = 55;
		}
		else if (s[i] == 108 || s[i] == 76)
		{
			s[i] = 49;
		}
		else
		{
			s[i] = s[i];
		}
		i++;
	}
	return (s);
}		
