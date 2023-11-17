#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: take the value of the single list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
