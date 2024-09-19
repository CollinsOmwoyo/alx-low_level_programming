#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define ELF_MAGIC_SIZE 16
#define BUFFER_SIZE 64

/**
 * print_error - prints an error message.
 * @message: The error message to print.
 * @exit_code: The exit status code.
 *
 * Description: prints an error message to stderr and exits
 * with the specified exit code.
 */
void print_error(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * print_elf_header_info - prints the ELF header information.
 * @e_ident: The ELF identification array.
 *
 * Description: parses and prints the ELF header information
 * based on the provided ELF identification array.
 */
void print_elf_header_info(const unsigned char *e_ident)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < ELF_MAGIC_SIZE; i++)
{
printf("%02x ", e_ident[i]);
}
printf("\n");

printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %02x>\n", e_ident[EI_CLASS]);
}

printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %02x>\n", e_ident[EI_DATA]);
}

printf("  Version:%d (current)\n", e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
default:
printf("<unknown: %02x>\n", e_ident[EI_OSABI]);
}

printf("  ABI Version:%d\n", e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (*(unsigned short *)(e_ident + EI_TYPE))
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %02x>\n", *(unsigned short *)(e_ident + EI_TYPE));
}

printf("  Entry point address:               0x%lx\n", *(unsigned long *)(e_ident + EI_ENTRY));
}

/**
 * main - entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int argc, char *argv[])
{
int fd;
unsigned char e_ident[BUFFER_SIZE];

if (argc != 2)
{
print_error("Usage: elf_header elf_filename", 97);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Error: Can't open file", 98);
}

if (read(fd, e_ident, sizeof(e_ident)) < 0)
{
close(fd);
print_error("Error: Can't read file", 98);
}

if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
{
close(fd);
print_error("Error: Not an ELF file", 98);
}

print_elf_header_info(e_ident);

close(fd);
return (0);
}
