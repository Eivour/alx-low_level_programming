#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns pointer to newly allocated memory space
 * @str: pointer to string
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
