#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the entry point for main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (lastDigit = 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	if (lastDigit > 6 && !(lastDigit == 0))
	{
		printf("Last digit of n is %d and is not 0\n", n);
	}
	return (0);
}
