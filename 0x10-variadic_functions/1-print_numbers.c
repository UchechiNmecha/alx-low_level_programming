#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of integers
 * @separator: string to be printed between numbers
 * Return: printed numbers
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);


	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
			printf("%s%d", separator, va_arg(nums, int));
		va_end(nums);
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(nums, int));
		va_end(nums);
	}
	printf("\n");
}
