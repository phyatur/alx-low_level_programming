#include "lists.h"

/**
 * pop_listint - a fxn that deletes the head node of a listint_t linked list
 *
 * @head: head of the list
 *
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
