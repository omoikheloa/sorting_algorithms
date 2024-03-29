#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                   using the Selection sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, min_index = i + 1; j > i; j--)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (array[i] > array[min_index])
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
