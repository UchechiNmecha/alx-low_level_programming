#include "main.h"

/**
 * _strlen - Entry point, a function that returns the length of a string
 * @s: string input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}
	return (num);
}
