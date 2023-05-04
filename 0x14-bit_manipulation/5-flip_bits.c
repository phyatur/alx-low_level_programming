#include "main.h"

/**
 * flip_bits - a function that return the number of bits you would need to flip
 *
 * @n: start number
 *
 * @m: end number
 *
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, result;

	result = 0;
	for (j = 8 * sizeof(n) - 1; j >= 0; j--)
		if (((n ^ m) >> j) & 1)
			result++;
	return (result);
}

