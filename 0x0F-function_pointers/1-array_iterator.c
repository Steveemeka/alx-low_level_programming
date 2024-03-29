#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exceute a function given as a parameter
 * on each element of the array
 * @array: array to iterate over
 * @size: size of the array
 * @function: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
