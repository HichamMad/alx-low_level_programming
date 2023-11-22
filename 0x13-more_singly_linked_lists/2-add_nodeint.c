#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add new nodesat the beginning
  * @head: a pointer to the first node
  * @n: data to insert in the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
