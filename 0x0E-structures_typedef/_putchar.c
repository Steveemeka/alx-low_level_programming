#include <unistd.h>

/**
 * _putchar - write the program c to stdout
 * @c: the charactr to print
 * 
 * Return: on success 1
 * On error: -1 is returned, and error is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
