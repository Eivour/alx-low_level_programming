#include "main.h"
/**
 * _sqrt_recursion - returns square root of number
 * @n: Input
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
