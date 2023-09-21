#include "lists.h"

/**
 * list_len - a function which returns
 * the number of the elements in a list
 * @h: the list
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
