#include "sort.h"

void swap(int *a, int *b);
void lomuto_quick_sort(int *array, size_t size, int start, int end);
int partition(int *array, size_t size, int start, int end);

/**
* swap - Swaps two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
*/
void swap(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
* real_quick_sort - Sorts an array of integers in 
* ascending order using the quicksort algorithm.
* @array: The array to be sorted.
* @start: The starting index of the subarray.
* @end: The ending index of the subarray.
*
*/

void lomuto_quick_sort(int *array, size_t size, int start, int end)
{
if (start < end)
{
int pivotIndex;

pivotIndex = partition(array, size, start, end);

/* Use recursion to sort subarrays on the right and left side of the pivot */
lomuto_quick_sort(array, size, start, pivotIndex - 1);
lomuto_quick_sort(array, size, pivotIndex + 1, end);
}
}

/**
* quick_sort - Sorts an array of integers in ascending 
* order using the quicksort algorithm.
* @array: The array to be sorted.
* @size: The size of the array.
*
*/

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
lomuto_quick_sort(array, size, 0, size - 1);
}

/**
* partition - Partitions the array and places the pivot in 
* its correct position.
* @array: The array to be partitioned.
* @start: The starting index of the subarray.
* @end: The ending index of the subarray.
*
* Return: The index of the pivot.
*/

int partition(int *array, size_t size, int start, int end)
{
int pivot = array[end];
int i = start - 1;
int j;

for (j = start; j < end; j++) /* Iterate from the first element to the second-to-last element */
{
if (array[j] <= pivot)
{
i++;
swap(&array[i], &array[j]);
}
}
swap(&array[i + 1], &array[end]);
print_array(array, size);
/*print_array(array, size);*/
return (i + 1);
}
