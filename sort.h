#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct deck_node_s - deck of cards
 *
 * @card: pointer to the card on the node
 * @prev: pointer to the previous node on the list
 * @next: pointer to the next node on the ist
 */

typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void swap_nodes(listint_t **list, listint_t *a, listint_t *b);
void selection_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void swap(int *array, size_t size, int *a, int *b);
size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi);
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi);
void quick_sort(int *array, size_t size);

#endif
