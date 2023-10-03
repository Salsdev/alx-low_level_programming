#include "main.h"

/**
 * _strlen - returns length of string
 * @s: strinf
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++
	}
	return (len);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdk;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fdk = open(filename, O_WRONLY | O_APPEND);
	if (fdk == -1)
		return (-1);
	length = _strlen(text_content);

	bytes_written = write(fdk, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fdk);
	return (1);
}
