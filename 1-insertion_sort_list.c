#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @list: A pointer to the head of the list.
 * @a: The first node to swap.
 * @b: The second node to swap.
 */

void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;

	if (!b->prev)
		*list = b;

	print_list(*list);
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @list: pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev_node;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		prev_node = current->prev;

		while (prev_node && prev_node->n > current->n)
		{
			swap_nodes(list, prev_node, current);
			prev_node = current->prev;
		}

		current = current->next;
	}
}
