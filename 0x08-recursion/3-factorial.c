#include "main.h"
/**
 * factorial - returns factorials
 * @n: given number
 * Return: Error where n < 1, else 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
