#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: file
 * @text_content: string to add
 * Return: Always 1(Success), otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fol, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fol = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);

	close(fol);
	return (1);
}
