#include "main.h"

/**
 * _strchr - A function that finds a char in a string
 * @s: string to search
 * @c: character to search for
 * Return: Pointer to first instance of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
