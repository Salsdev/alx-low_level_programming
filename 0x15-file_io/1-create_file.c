#include "main.h"

/**
 * create_file - This function is such that creates a file
 * @filename: This is the type of char to the
 * @text_content: This is the type char pointer of char
 * Return: -1 if NULL and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int final_exit = 0;
	int h = 0;
	int f = 0;

	if (filename == NULL)
		return (-1);
	h = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (h == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + f) != '\0')
		{
			f++;
		}
		final_exit = write(h, text_content, f);
	}
	if (final_exit == -1 && final_exit != f)
		return (-1);
	return (1);
}
