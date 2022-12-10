#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numberof base 10
 * Starting from 0, followed by a new line.
 * return: 0
 */
int main(void)
{
	int c = 0;
	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
