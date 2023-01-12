#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * _strlen - calculater and return string lenght
 * @string - string
 * return:string lenght
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		return (i);
}
/**
 * string_nconcat - concatenates s1 ans n bytes of s2; return ptr to string
 * @s1: string1
 * @s2: string2
 * @n: n bytes to concates fron string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* accounts for null strings*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nun < 0) /* accounts for negative bytes*/
		return (NULL);
	if (num >= _strlen(s2)) /* accounts for n too big */
		num = _strlen(s2);
	len = _strlen(s1) = num + 1; /* +1to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (prt == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
