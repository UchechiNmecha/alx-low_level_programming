#include "main.h"

/**
 * print_rev - Entry point, prints the reverse of a string
 * @s: string input
 * Return: void
 */

void print_rev(char *s)
{
	int num;

	num = 0;
	while (s[num] != '\0')
	{
		num++;
	}
	num--;
	while (num >= 0)
	{
		_putchar(s[num]);
		num--;
	}
	_putchar('\n');
}
