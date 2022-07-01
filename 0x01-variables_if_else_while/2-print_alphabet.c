#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Alphabets in lowercase plus new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
