#include <stdio.h>

/**
 * main - Entry point, a program that prints number of arguments
 * @argc: Argument count
 * @argv: Array of arg strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
