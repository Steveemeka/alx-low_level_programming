#include <main.h>

/**
 * _issuper - checkes if parameter is an uppercase character
 * @c: input character
 * Return: 1 if an upper case character, 0 in other case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
