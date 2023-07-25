#include "main.h"

/**
 * print_rev -print string in reverse
 * @s: string pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int start = 0;

		while (s[start])
			start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
