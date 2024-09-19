#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments passed to the program
 *
 * Return: 0 on success, or the appropriate error code on failure
 */
#define BUFFER_SIZE 1024

void print_error_and_exit(const char *msg, int exit_code);
int open_file(const char *filename, int flags, mode_t mode);
void copy_file(int file_from, int file_to);

int main(int argc, char *argv[])
{
int file_from, file_to;

if (argc != 3)
{
print_error_and_exit("Usage: cp file_from file_to", 97);
}

file_from = open_file(argv[1], O_RDONLY, 0);
file_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

copy_file(file_from, file_to);

if (close(file_from) == -1)
{
print_error_and_exit("Error: Can't close fd", 100);
}

if (close(file_to) == -1)
{
print_error_and_exit("Error: Can't close fd", 100);
}

return 0;
}

void print_error_and_exit(const char *msg, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(exit_code);
}

int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
if (flags & O_RDONLY)
print_error_and_exit("Error: Can't read from file", 98);
else
print_error_and_exit("Error: Can't write to file", 99);
}
return fd;
}

void copy_file(int file_from, int file_to)
{
char buffer[BUFFER_SIZE];
ssize_t read_count;

while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
if (write(file_to, buffer, read_count) != read_count)
{
print_error_and_exit("Error: Can't write to file", 99);
}
}

if (read_count == -1)
{
print_error_and_exit("Error: Can't read from file", 98);
}
}
