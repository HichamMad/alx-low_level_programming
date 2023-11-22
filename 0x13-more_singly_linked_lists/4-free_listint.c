#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of list to free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}


