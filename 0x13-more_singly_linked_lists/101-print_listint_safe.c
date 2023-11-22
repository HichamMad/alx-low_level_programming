#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer head of a list.
 * Return: Nothing
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to the first node
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *nptr, *new, *add;

	nptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = nptr;
		nptr = new;

		add = nptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&nptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&nptr);
	return (node);
}
