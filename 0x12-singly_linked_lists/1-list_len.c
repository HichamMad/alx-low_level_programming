#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Finds the number of elements in a linked list
 * @h: Poiter linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
