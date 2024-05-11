#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked
 * dlistint_t list.
 * @h: the head node
 * Return: returnsthe number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}