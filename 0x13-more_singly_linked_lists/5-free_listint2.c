#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a listint list
  * @head: pointer to the listint_t list to be freed
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		ptr = current;
		current = current->next;
		free(ptr);
	}
	*head = NULL;
}
