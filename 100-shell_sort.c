#include "sort.h"
/**
 * shell_sort - a function that sort an array
 * using shell sort algorithm
 * @array: array to be sorted
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, interval;
	size_t div = 3;
	int temp;

	for (interval = 1 ; interval <= size / div; interval = interval * div + 1)
		;
	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
		interval = (interval - 1) / div;
	}
}
