#include "sort.h"

/**
 * swap- swaps two values
 * @x: first value to swap
 * @y: second value to swap
 */

void swap(int *x, int *y)
{
	int drifter;

	drifter = *x;
	*x = *y;
	*y = drifter;
}

/** 
 * selection_sort- uses the selection sort algorithm to sort an array
 * @array: the array to sort
 * @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		swap(&array[min], &array[i]);
	}
}