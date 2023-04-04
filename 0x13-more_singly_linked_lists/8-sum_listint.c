#include "lists.h"

/**
 * sum_listint -  a fxn that returns the sum of all the data of a linked list
 *
 * @head: head of the list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
}
