#include "main.h"

/**
 * _islower - check if a chaacter is in lowercase
 * @c: the character
 * Return: 1 is letter is in lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
