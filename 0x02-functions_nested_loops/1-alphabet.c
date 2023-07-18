#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
