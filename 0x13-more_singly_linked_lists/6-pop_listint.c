#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	temp = *head;
	k = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	k = temp->n;
	free(temp);
	return (k);
}
