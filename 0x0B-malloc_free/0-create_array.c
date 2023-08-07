#include "main.h"

/**
 * *create_array - create arry of characters
 * int with a special char
 * @size: size of the array
 * c: char to int
 * Return: pointer to the int or null
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
