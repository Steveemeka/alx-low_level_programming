#include  "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to a string being duplicated
 *
 * Return: NULL if str is NULL
 * pointer to duplicate string on success
 * NULL if memory was insufficient.
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc is successful */
	if (nstr == NULL)
	{
		return (NULL);
	}
	nstr[len] = '\0';
	return (nstr);
}
