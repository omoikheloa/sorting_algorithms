#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * enum kind_e - Enumeration of card suits
 * @SPADE: Spade suit
 * @HEART: Heart suit
 * @CLUB: Club suit
 * @DIAMOND: Diamond suit
 */

typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - playing card
 *
 * @value: value of card - from "Ace" to "King"
 * @kind: kind of the card
 */

typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

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

void sort_deck(listint_t **deck);
int card_value(listint_t *node);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void swap_nodes(listint_t **list, listint_t *a, listint_t *b);
listint_t *create_listint(const int *array, size_t size);

#endif
