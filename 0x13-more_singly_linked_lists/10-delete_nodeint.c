#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	int pos = idx + 1;

	if (*head == NULL)
		return (-1);

	if (pos == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (pos != 1)
		{
			previous = current;
			current = current->next;
			pos--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}

	return (1);
}
