#include "main.h"

/**
 * swap_int - swap the integers
 * @a: number to swap
 * @b: number to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
