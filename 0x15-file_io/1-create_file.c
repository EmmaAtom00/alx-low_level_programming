#include "main.h"

/**
 * create_file - function to create a new file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: return 0 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, no_strings = 0;
	ssize_t wr;
	
	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fp == -1)
		return (-1);

	while (*text_content != '\0')
		no_strings++;

	if (text_content)
		wr = write(fp, text_content, no_strings);
	if (wr == -1)
		return (-1);

	close(fp);
	return (1);
}
