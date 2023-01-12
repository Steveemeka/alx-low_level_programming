#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory of an aeeay using malloc
 * @nmenb: number of elements in array
 * @size: size of elements in array.
 *
 * return: NULL is size or nmenb == 0
 * NULL if malloc fails
 * pointer to memory allocated is successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
