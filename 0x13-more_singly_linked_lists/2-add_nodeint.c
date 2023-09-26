#include "lists.h"

/**
 * add_nodeint - to add a new node on the start of a listint_t list.
 * @head: Pointer to the pointer of the 1st node.
 * @n: Value to be added
 * Return: New node's address or NULLon failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Memory allocation failed!");
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
