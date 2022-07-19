#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: Search through string
 * @needle: String to search
 * Return: Pointer to beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0
		       && *search != 0)
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (start);
		haystack = start + 1;
	}
	return (0);
}
