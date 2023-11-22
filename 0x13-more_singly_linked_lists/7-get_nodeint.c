#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: head of list
 * @index: index of node to return
 * Return: pointer to the node we're looking for in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	return (head);
}
