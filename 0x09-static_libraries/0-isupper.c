#include "main.h"
/**
 * _isupper - check for uppercase characters
 *
 * @c: character needing checks
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
