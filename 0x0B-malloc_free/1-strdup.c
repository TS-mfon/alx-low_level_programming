#include "main.h"

/**
 * *_strdup - return pointer to a newly allocated space inn memory
 * that cointains a copy of the string as a given parameter
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
