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

typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
int card_value(deck_node_t *node);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif
