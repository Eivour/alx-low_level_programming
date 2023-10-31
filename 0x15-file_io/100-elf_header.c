#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error_message() {
    dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header) {
    int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header->e_type);
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
        return 98;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error_message();
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error_message();
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

