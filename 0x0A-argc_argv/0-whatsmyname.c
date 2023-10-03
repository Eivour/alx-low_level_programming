#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * @argc: argument count
 * 
 * Return: Always 0 (success)
 */
int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
