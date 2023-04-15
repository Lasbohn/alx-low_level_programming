#include "main.h"
#include <stdlib.h>


/**
 * Read_testfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: Numbers of letters to be read
 * Return: W- actual number of bytes read and printed
 *   0 when function fail or function is NULL
 *   **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t W;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
