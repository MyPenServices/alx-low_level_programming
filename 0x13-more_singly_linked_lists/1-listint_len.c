#include "lists.h"

/**
 * listint_len - function to returns elements of listint_t list.
 * @h: 1st node
 * Return: nodes' number
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;

	}
	return (i);
}

