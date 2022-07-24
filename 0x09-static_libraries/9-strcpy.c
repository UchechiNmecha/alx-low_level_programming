#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: destination
 * @src: source of the string
 * Return: string
 */


char *_strcpy(char *dest, char *src)
{
char *guard = dest;

while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (guard);
}
