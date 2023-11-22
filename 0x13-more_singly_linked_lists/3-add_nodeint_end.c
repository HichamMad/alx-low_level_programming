#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node to the last of a list
  * @head: pointer to the first node
  * @n: data to add at the linked list
  * Return: pointer to current position in the linked list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
	return (newnode);
}
