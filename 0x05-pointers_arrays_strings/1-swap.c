#include "main.h"

/**
 * swap_int - Entry point, a function that swaps values of two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = *new;
}
