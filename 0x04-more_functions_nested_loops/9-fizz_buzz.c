#include <stdio.h>

/**
 * main - Entry point
 * Description - FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	return (0);
}
