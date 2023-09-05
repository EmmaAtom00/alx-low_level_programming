#include "main.h"

/**
 * read_textfile - function that reads and prints a file
 * @filename: the name of the file to be printed
 * @letters: the number of letters to ne printed
 *
 * Return: return 0 for NULO and failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (c != EOF)
	{
		putchar(c);
		c = fgetc(fp);
	}

	fclose(fp);
	return (letters);
}
