#include "main.h"

/**
 * _islower - prints out one
 * @c: - the alpha
 * Return: 0 if succesful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
