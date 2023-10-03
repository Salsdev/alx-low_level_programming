#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int fen = 0;

	while (s[fen] != '\0')
	{
		fen++
	}
	return (fen);
}

/**
 * create_file - creates a file
 * @text_content: text
 * @filename: name of file
 * Returns: 1 - success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int sa;
	unsigned int lenght;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	sa = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (sa == -1)
		return (-1);

	if (text_content == NULL)
	{
		lenght = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(sa);
	return (1);
}
