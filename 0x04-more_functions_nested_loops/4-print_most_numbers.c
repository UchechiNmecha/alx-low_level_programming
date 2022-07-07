#include "main.h"

/**
 * print_most_numbers - Entry point
 * Return: empty
 */

void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}
