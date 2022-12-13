#include "main.h"

/**
 * isalpha - check for alphabet
 * @c: character to be checked
 *
 * return: 1 is character is alphabet; 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
