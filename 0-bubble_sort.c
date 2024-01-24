/* this file contains burble sorting function. */

#include "sort.h"

/**
 * swap-swaps two integers in an array
 * @ptr1: pointer to the first index of array to swap
 * @ptr2: pointer to the second index of array to swap
 * Return: void
 */

void swap(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/**
 * bubble_sort-sorts numbers using bubble sorting alogrithm
 * @array: array of numbers to sort
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int sorted;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		sorted = 0;
		for (j = 0; j < size; j++)
		{
			if ((array[j] > array[j + 1]) && !(j + 1 >= size))
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				sorted++;
			}
		}
		if (sorted == 0)
		{
			break;
		}
	}
}
