#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all the arguments the program recieves
 *
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always (0) success.
 */
int main(int argc, char *argv[])
{
	int n;
	
	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
