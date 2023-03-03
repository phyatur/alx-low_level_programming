#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: string argument
 *
 * Return: str
 *
 */

char *cap_string(char *str)
{

	int i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
