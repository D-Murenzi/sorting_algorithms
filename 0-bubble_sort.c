/* this file contains burble sorting function. */

#include "sort.h"

/**
 * bubble_sort-sorts numbers using bubble sorting alogrithm
 * @array: array of numbers to sort
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((array[j] > array[j + 1]) && !(j + 1 >= size))
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
