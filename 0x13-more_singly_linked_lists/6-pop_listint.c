#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int res;

	if (!(*head) || !head)
	return (0);
	current = *head;
	res = current->n;
	*head = (*head)->next;
	free(current);
	return (res);
}
