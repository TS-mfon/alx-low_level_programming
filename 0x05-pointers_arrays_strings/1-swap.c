#include "main.h"

/**
 * swap_int - two var int and swap it
 * @a: swaps and stores the address of b
 * @b: swaps and store b's address
 * @author mfon
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int change;

change = *b;
*b = *a;
*a = change;
}
