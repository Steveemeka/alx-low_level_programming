#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in upper case
 * and the in upper case, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;}

	c = 'A';

	while (C <= 'Z')
	{ 
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
