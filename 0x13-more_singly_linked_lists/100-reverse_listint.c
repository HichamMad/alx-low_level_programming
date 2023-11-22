#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: node to be reverse
 * Return: void
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = last;
	last = *head;
	*head = next;
	}

	*head = last;

	return (*head);
}

