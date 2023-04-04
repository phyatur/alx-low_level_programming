#include "lists.h"

/**
 * get_nodeint_at_index - a fxn that returns the nth node of linked list.
 *
 * @head: head of the list
 *
 * @index: index of node to locate
 *
 * Return: pointer to the nth node, NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
