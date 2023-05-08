#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: name of the file to create.
 *
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f, len;
	ssize_t rew;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		rew = write(f, text_content, len);
		if (rew == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(f);
	return (1);
}
