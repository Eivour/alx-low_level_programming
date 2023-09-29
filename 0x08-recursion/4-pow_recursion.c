#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: original value
 * @y: raised to power value
 * Return: error if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
