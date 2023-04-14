#include "main.h"

/**
 * error - read file
 *
 * @err: error number
 *
 * @filename: name of file
 */

void error(int err, char *filename)
{

	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * copy - copies the content of a file to another file.
 *
 * @file_s: source file
 *
 * @file_d: destination file
 *
 * Return: 1 on success, -1 on failure.
 */

void copy(char *file_s, char *file_d)
{
	int fd_re, res_re, fd_wr, res_wr;
	char *buffer[1024];

	fd_re = open(file_s, O_RDONLY);
	if (fd_re < 0)
		error(98, file_s);

	fd_wr = open(file_d, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_wr < 0)
	{
		close(fd_re);
		error(99, file_d);
	}
	do {

		res_re = read(fd_re, buffer, 1024);
		if (res_re < 0)
			error(98, file_s);

		res_wr = write(fd_wr, buffer, res_re);
		if (res_wr < res_re)
			error(99, file_d);
	}	while (res_wr == 1024);
	if (close(fd_re) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_re);
		close(fd_wr);
		exit(100);
	}
	if (close(fd_wr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_wr);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 *
 * @c: Argument count
 *
 * @v: argument values
 *
 * Return: 0 on succes, -1 on error.
 */

int main(int c, char *v[])
{
	if (c != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(v[1], v[2]);
	return (0);
}
