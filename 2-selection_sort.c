#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t limit = 0, min_pos, i;
	int min, temp;

	while (limit < size)
	{
		i = limit;
		min = array[limit];
		min_pos = limit;
		while (i < size)
		{
			if (array[i] < min)
			{
				min = array[i];
				min_pos = i;
			}
			i++;
		}
		if (min_pos != limit)
		{
			temp = array[limit];
			array[limit] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
		limit++;
	}
}
