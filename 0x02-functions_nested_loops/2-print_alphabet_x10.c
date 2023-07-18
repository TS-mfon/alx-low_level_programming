#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
