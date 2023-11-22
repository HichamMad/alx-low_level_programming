#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at some index
 * @head: pointer to the first node
 * @index: index till where to be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *last;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (temp = *head; index && temp->next != NULL; index--, temp = temp->next)
		last = temp;
	if (index)
		return (-1);

	last->next = last->next->next;
	free(temp);
	return (1);
}
