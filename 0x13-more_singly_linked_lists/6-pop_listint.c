#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		p = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		p = 0;
	return (p);
}
