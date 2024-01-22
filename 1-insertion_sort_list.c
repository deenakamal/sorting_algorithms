#include "sort.h"
/**
 * swap_ - a function that swaps two nodes in double linked list.
 * @list: pointer to head.
 * @n1: first node to be swaped.
 * @n2: second node to be swaped.
 */
void swap_(listint_t **list, listint_t *n1, listint_t *n2)
{

	if (!list || !(*list) || !n1 || !n2)
		return;
	n2->next = n1->next;
	if (n1->next)
		n1->next->prev = n2;

	n1->next = n2;
	n1->prev = n2->prev;
	n2->prev = n1;
	if (n1->prev)
		n1->prev->next = n1;
	else
		*list = n1;
}

/**
 * insertion_sort_list - a function uses insertion sorting algorithm.
 * @list: pointer to pointer to head of double linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key, *prev_node;

	if (!list || !(*list) || !(*list)->next)
		return;

	key = *list;
	key = key->next;
	while (key != NULL)
	{
		prev_node = key->prev;

		while (prev_node && prev_node->n > key->n)
		{
			swap_(list, key, prev_node);
			print_list(*list);
			prev_node = key->prev;
		}
		key = key->next;
	}
}
