#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: take the value of the single list
 * Return: The number of nodes taken.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		count = count + 1;
		h = h->next;
	}
	return (count);
}

