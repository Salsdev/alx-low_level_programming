#include "lists.h"
/**
 * list_len - number of elements list
 * @h: pointer to structure
 * Return: lenght.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
