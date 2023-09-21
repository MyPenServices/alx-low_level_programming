#include "lists.h"

/**
 * free_list - Frees a list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

