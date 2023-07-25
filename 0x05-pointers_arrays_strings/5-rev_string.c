#include "main.h"

/**
 * rev_string - print in reverse
 * @s: pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int lenght, z, half;
	char temp;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		z = 0;
	half = lenght / z;

	while (half--)
	{
		temp = s[lenght - z - 1];
		s[lenght - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
