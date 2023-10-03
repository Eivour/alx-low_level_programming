#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 * @dest: returns pointer here
 * @src: copies memory from here
 * @n: number of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
