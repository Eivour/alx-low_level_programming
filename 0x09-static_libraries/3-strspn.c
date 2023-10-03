#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int is_valid;
	char *a;

	while (*s != '\0')
	{
		is_valid = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				is_valid = 1;
				break;
			}
		}

		if (is_valid)
		{
			length++;
		}
		else
		{
			break;
		}

		s++;
	}

	return (length);
}
