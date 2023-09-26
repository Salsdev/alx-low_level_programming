#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_loop = head;
	listint_t *second_loop = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (first_loop)
	{
		first_loop = first_loop->next;
		second_loop = head;
		while (first_loop && second_loop != first_loop)
		{
			second_loop = second_loop->next;
		}

		if (second_loop == first_loop)
		{
			return (second_loop);
		}
	}
	return (first_loop);
}
