#include "main.h"

/**
 * _puts - print string
 * @str: point string
 * Return: String and New Line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[1])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
