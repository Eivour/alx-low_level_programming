#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 * Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}
