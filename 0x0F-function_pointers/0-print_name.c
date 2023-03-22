#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 *
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Return: nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || *name != '\0' || f != NULL)
		f(name);
}
