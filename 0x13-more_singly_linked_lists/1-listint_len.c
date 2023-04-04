#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linkedlist
 *
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
