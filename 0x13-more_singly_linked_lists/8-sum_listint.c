#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: pointer to the first node
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
