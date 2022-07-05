#include "main.h"

/**
* print_alphabet - Entry point, prints the alphabets
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

	return (0);
}
