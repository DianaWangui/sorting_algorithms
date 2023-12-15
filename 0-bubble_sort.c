#include "sort.h"
/**
 * bubble_sort - a funtion that sort an array using
 * bubble sort algorith
 * @array: the pointer to the array being sorted
 * @size: the size of the array
 * Return: the sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
