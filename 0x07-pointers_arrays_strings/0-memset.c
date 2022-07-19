#include "main.h"

/*
 * _memset - a function that fills memory with a constant byte.
 * @n: number of bytes
 * @b: value to fill
 * @s: the pointer
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
