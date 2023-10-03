#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: specific char array is initialized with
 * Return: NULL if size = 0 and pointer = 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
