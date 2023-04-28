#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	ptr2->n = n;
	ptr2->next = NULL;
	int pos = idx + 1;

	pos--;
	while (pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}

	ptr2->next = ptr->next;
	ptr->link = ptr2;

	return (NULL);
}
