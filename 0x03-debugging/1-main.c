#include <stdio.h>

/**
 * main - causes of infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinit loop incoming : \n");

	i = 0;
	/*
	 * while (i < 0)
	 * {
	 * _putchar(i)
	 * }
	 */
	printf("infinit loop avoided! \\o\/\n");

	return (0);
}
