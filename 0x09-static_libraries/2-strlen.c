#include "main.h"

/**
 * _strlen - lenght of the string
 * @s: string
 * Return: String lenght
 */
int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
