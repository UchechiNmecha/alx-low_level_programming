#include "main.h"

/**
* print_alphabet_x10 - Entry point, prints ten times the alphabet
*/

void print_alphabet_x10(void)
{
	int times;

	times = '0';
	while (times <= '10')
	{
		int alphabet;

		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		times++;
		_putchar('\n');
	}
}
