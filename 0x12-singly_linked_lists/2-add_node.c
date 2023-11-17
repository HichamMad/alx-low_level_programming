#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node at the beginning of a linked list.
 * @head: pointer to a pointer to the linked list.
 * @str: string to add to the node.
 * Return: pointer of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strlen - Calculate the length of a string.
 * @str: string.
 * Return: lenght of the string.
 */

int _strlen(const char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;

	return (count);
}
