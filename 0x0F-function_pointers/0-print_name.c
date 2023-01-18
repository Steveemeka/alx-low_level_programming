#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of print
 * @f: pointer to the pointing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
