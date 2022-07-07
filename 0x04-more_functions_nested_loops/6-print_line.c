#include "main.h"

/**
 * print_line - Entry point
 * @n: length
 * Return: empty
 */

void print_line(int n)

{

	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
