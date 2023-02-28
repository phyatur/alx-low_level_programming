#include "main.h"

/**
 * swap_int - waps the values of two integers
 *
 * @a: argument
 * @b: argument
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
