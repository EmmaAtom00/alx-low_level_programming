#include "main.h"

/**
 * read_textfile - function that reads and prints a file
 * @filename: the name of the file to be printed
 * @letters: the number of letters to ne printed
 *
 * Return: return 0 for NULL and failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *fd;
	ssize_t re, wr;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");

	if (fd == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	re = fread(buffer, sizeof(char), letters, fd);
	if (re == -1)
	{
		free(buffer);
		fclose(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, letters);
	if (wr == -1)
	{
		free(buffer);
		fclose(fd);
		return (0);
	}
	fclose(fd);
	return (re);
}
