#include "sort.h"
/**
 * selection_sort - a function that sort elements
 * usinf selection sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * return: elements in sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, small, temp;

	for (i = 0; i < size - 1; i++)
	{
		small = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}
		temp = array[small];
		array[small] = array[i];
		array[i] = temp;
	}

}
