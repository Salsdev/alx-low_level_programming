#include "lists.h"

/**
 * add_node - add new node begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the addres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newMode);
		return (NULL);
	}
	newMode->str = strdup(str);
	while (str[lenght] != '\0')
	{
		length++;
	}
	newNode->len = length;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newMode;
	return (*head);
}
