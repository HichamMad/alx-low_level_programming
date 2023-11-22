#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: pointer to the first node
  * @ind: index where the new node is added
  * @n: data to be inseted in the node
  * Return: pointer to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int ind, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (ind == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (ind > 1)
	{
		current = current->next;
		ind--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
