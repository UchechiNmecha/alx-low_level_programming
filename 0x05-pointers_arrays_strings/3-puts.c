#include "main.h"

/**
 * _puts - Entry point, a function that pronts a string
 * @str: string
 * Return: string
 */

void _puts(char *str)
{
	int num;

	num = 0;
	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	}
	_putchar('\n);
}
