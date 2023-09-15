#include "main.h"
/**
 * main - Entry point for code
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
