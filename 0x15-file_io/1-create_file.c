#include "main.h"

/**
 *create_file - a program that creates a file
 *@text_content: a NULL terminated str
 *@filename: filename
 *Return: 1; else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int alphabets;
	int news;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (alphabets = 0; text_content[alphabets]; alphabets++)
		;

	news = write(fd, text_content, alphabets);
	if (news == -1)
		return (-1);
	close(fd);
	return (1);
}
