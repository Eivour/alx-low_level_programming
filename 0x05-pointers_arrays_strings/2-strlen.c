#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}