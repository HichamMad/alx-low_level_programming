#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: the string to add to the node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */

int _strlen(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}
