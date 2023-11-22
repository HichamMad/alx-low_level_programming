#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a head pointer that points to the first node.
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
