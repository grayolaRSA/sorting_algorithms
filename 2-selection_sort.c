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
	unsigned int i, temp = 0;
	unsigned int j = 0;
	bool swapped = false;

	do {
		swapped = false;
		for (i = 0; i < (size - 1 - j); i++)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		j++;
	} while (swapped);
}
