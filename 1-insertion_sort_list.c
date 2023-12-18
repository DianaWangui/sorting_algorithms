#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list of integers
 * and swaps the nodes
 *
 * @list: linked list to be sorted
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	node = *list;
	while (node != NULL)
	{
		while (node->prev != NULL && node->prev->n > node->n)
		{
			temp = node;
			if (node->next != NULL)
			{
				(node->next)->prev = temp->prev;
			}
			(node->prev)->next = temp->next;
			node = node->prev;
			temp->prev = node->prev;
			temp->next = node;
			if (node->prev != NULL)
			{
				(node->prev)->next = temp;
			}
			node->prev = temp;
			if (temp->prev == NULL)
			{
				*list = temp;
			}
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}
