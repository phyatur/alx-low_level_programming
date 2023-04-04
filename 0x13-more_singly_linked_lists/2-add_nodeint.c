#include "lists.h"

/**
 * add_nodeint - a functions that adds a new node at the beginning of a listint_t list
 *
 * @head: head of the list
 *
 * @n: int for the new node
 *
 * Return: pointer current position
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
