#include <stdio.h>

/**
 * main - Entry point
 * Description - a program that prints alphabets dxcept e and q
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
