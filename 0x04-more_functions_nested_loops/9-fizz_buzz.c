#include <stdio.h>

/**
 * main - Entry point
 * Description - FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	char fz[] = "Fizz";
	char bz[] = "Buzz";
	char fzbz[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s", bz);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fz);
		else if (i % 3 == 0)
			printf("%s ", fzbz);
		else if (i % 5 == 0)
			printf("%s ", bz);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
