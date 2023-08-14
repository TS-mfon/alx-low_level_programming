#include "main.h"

/**
 * print_line - print a straight line using _putchar of n
 * @n: size of line
 */

void print_line(int n)
{
for (; n > 0; n--)
_putchar('_');
_putchar('\n');
}
