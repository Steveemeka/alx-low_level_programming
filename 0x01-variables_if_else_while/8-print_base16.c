#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all single digits number of base 10
 * starting from 0, followed by a new line.
 * return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch = '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
