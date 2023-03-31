#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}

	return (e);
}
