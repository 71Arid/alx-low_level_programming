#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
  * append_text_to_file - appends text at end of file
  * @filename: path to file
  * @text_content: content to be appended
  * Return: 1 on success -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t a;
	int *buff;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (-1);
	}
	buff = _strlen(text_content);
	a = write(fd, text_content, buff);

	if (a == -1)
	{
		close(fd);
		return(-1);
	}
	close(fd);
	return (1);
}
