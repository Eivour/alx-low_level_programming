#include <stdio.h>
/**
 * main - This program prints all alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

		while (letter <= 'z')
		{
			if (letter != 'q' && letter != 'e')
			{
				putchar(letter);
			}
			letter++;
		}

		putchar('\n');
		return (0);
}
