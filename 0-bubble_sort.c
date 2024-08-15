#include "sort.h"

/**
 * bubble_sort - uses the bubble sort algorithm to sort an array
 * @array: the array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, drifter;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < ((size - i) - 1))
		{
			if (array[j] > array[j + 1])
			{
				drifter = array[j];
				array[j] = array[j + 1];
				array[j + 1] = drifter;
			}
		}
	}
}