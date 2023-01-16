#include <stdio.h>

/**
 * main - prints the name if the file program was compilled from
 * Return: always 0
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
