#include "main.h"
/**
 * set_string - sets the value of the pointer to the char
 * @s: pointer to pointer
 * @to: pointer to char
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
