#include "lists.h"

/**
 * print_listint - function to print elements of a listint_t list.
 * @h: the first node.
 * Return: nodes' number
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{	n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}

