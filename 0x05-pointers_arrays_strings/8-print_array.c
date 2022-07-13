#include "main.h"
#include <stdio.h>


/**
 * print_array - Entry point
 * @a: The array to print
 * @n: The number of items
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
