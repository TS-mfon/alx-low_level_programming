#include <stdio.h>

/**
 * main - prints the arguments passed
 * @argc: no of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
