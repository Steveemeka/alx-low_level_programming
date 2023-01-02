#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurance to the character c in the string s
 */
unsigned int _strspn(char *s, char *accept)
{
	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0); /*values null*/
}
