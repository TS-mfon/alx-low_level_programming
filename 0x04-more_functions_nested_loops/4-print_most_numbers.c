#include "main.h"
/**
 * print_most_numbers - print all numbers 0 through 9 but no 2&4 and then
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
