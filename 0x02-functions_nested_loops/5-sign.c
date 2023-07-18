#include "main.h"

/**
 * print_sign - prints out the sign
 * main - uses built in function
 * Return: 0 if succesful
 * @n: - the number
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	else
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
