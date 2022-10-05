#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguements passed to the function
 * @argv: arguements vector of pointers to strings
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
