#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
