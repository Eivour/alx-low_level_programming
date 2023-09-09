#include <stdio.h>
/**
 * main -  This function is the entry point
 *
 * Description: This program prints all numbers in base16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (char h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}

	for (char h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}

	putchar('\n');

	return (0);
}
