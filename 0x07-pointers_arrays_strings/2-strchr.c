#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
