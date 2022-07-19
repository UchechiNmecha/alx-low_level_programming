#include "main.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: destination area to copy to
 * @src: source area to copy from
 * @n: Amount to copy
 * Return: Pointer to area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
