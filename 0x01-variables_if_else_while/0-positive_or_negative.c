#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and print the number
 * and if it is positive, negetive or Zero
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negetive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
