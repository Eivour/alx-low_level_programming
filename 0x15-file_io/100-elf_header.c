#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUFFER_SIZE 128

/**
 * print_error_and_exit - Prints error message to stderr and exits with status 98
 * @message: The error message to print
 */
void print_error_and_exit(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_magic - Prints the magic number in the ELF header
 * @e_ident: The ELF identification bytes
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_header - Prints the information contained in the ELF header
 * @header: A pointer to the ELF header structure
 */
void print_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Class:                             ");
	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);

	printf("  Data:                              ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_DATA]);

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the information contained in the ELF header of an ELF file
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int file_descriptor, read_status;
	Elf64_Ehdr elf_header;
	unsigned char magic[4] = {0x7f, 'E', 'L', 'F'};

	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
		print_error_and_exit("Error: Cannot open file");

	read_status = read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr));
	if (read_status != sizeof(Elf64_Ehdr) || (elf_header.e_ident[0] != magic[0] || elf_header.e_ident[1] != magic[1] || elf_header.e_ident[2] != magic[2] || elf_header.e_ident[3] != magic[3]))
		print_error_and_exit("Error: Not an ELF file");

	print_magic(elf_header.e_ident);
	print_header(&elf_header);

	close(file_descriptor);

	return 0;
}
