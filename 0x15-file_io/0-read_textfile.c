#include "main.h"
/**
* read_textfile - function
* @filename: file to read
* @letters: letters
* Description: func to read and print to stdout
* Return: letters read/print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fol, wir;
	ssize_t size;

	if (filename == NULL)
		return (0);
	fol = open(filename, O_RDWR);
	if (fol == -1)
		return (0);

	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	size = read(fol, buff, letters);
	if (size == -1)
		return (0);

	buff[size] = '\0';
	wir = write(STDOUT_FILENO, buff, size);
	if (wir == -1)
		return (0);

	free(buff);
	close(fol);
	return (size);
}
