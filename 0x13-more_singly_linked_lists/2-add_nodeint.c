#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - a function that adds a new node.
  * @head: pointer to the first node of thr linked list.
  * @n: int to add in the new node
  * Return: pointer to the added node.
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
