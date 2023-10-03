#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignore this line */

	printf("%d\n", argc - 1);

	return (0);
}
