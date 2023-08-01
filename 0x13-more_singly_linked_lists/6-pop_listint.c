#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int xnode;
	listint_t *h;
	listint_t *i;

	if (*head == NULL)
		return (0);

	i  = *head;

	xnode = i->n;

	h = i->next;

	free(i);

	*head = h;

	return (xnode);
}
