#include "function_pointers.h"

/**
 * int_index - searches for the integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which the
 * cmp function does not return 0, or -1 if no match is found
 * or size id negative.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = 1;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
