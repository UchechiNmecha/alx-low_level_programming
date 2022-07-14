#include "main.h"

/**
 * _strcat - Entry point, joins two strings,
 * @dest: destination.
 * @src: source.
 * Return: the destination.
 */


char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (a >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
