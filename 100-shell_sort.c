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
	size_t div = 2;
	size_t small = 0;
	int temp;

	for (interval = size / div; interval > small; interval /= div)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
				print_array(array, size);
			}
		}
		array[j] = temp;
	}
}
