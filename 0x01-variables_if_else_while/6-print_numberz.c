#include <stdio.h>
/**
 * main - This program prints base 10 numbers with the putchar method
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((int)(i + '0'));
		i++;
	}
	putchar((int)('\n'));

	return (0);
}
