#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0'; /* Null-terminate the string */

	bytes_written = printf("%s", buffer);
	if (bytes_written == -1 || (size_t)bytes_written < (size_t)bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytes_read);
}
