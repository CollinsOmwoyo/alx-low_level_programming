#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL terminated string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
