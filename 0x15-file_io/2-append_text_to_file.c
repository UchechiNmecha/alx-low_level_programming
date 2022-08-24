#include "main.h"
/**
* append_text_to_file- Entry point
* @filename: file to create
* @text_content: null term
* Return: 1 success, -1 fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fol, siz = 0, wir;

	if (filename == NULL)
		return (-1);
	fol = open(filename, O_RDWR | O_APPEND, S_IRGRP | S_IWGRP | S_IROTH);
	if (fol == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[sz] != '\0')
		siz++;

	wir = write(fol, text_content, siz);

	if (wir == -1)
	return (-1);

	close(fol);
	return (1);

}
