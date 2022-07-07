#include "main.h"

/**
 * print_numbers - Entry point
 * Return: empty
 */

void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
