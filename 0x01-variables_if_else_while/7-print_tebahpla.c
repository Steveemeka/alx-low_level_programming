#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description:print all single number digits of base 10
 *starting from 0; followed by a new line
 */

int main(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
