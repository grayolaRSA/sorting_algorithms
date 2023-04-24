#include "sort.h"
#include <stdio.h>
#include <stdbool.h>

/**
 *selection_sort - function that bubble sorts an array
 *@array: array to be sorted
 *@size: size of array
 *Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_pos, temp = 0;

	for (i = 0; i < size; i++)
	{
		min_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
				min_pos = j;
		}

		if (min_pos != i)
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}

	}
}
