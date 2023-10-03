#include "main.h"
/**
 * _memset - This function fills the first n bytes of the memory area
 * @s: pointer
 * @b: constant byte value that you want to fill the memory with.
 * @n: number of bytes you want to fill with the constant value.
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
