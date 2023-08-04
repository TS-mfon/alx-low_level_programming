#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 * Return: dest an value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
