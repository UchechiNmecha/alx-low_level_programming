#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	int sum_all = 0;

	for (i = 0; i < n; i++)
		sum_all += va_arg(nums, int);

	va_end(nums);

	return (sum_all);
}
