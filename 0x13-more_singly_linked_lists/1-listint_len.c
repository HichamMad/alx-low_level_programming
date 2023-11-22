#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns the the length of a linked lists
 * @h: element to get length of
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == 0)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}


