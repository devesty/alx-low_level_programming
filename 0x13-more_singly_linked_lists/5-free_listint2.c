#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (!head)
	return;
	current = *head;
	while (current)
	{
	tmp = current;
	current = tmp->next;
	free(tmp);
	}
	*head = NULL;
	head = NULL;
}
