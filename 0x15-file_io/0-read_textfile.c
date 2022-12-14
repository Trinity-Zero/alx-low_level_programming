#include "main.h"

/**
* read_textfile - program reads a text file and prints the letter
* @filename: filename
* @letters: numbers of letters printed
*
* Return: numbers of letter printed, if fails, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdir;
	ssize_t nr, nw;
	char *buff;

	if (!filename)
		return (0);

	fdir = open(filename, O_RDONLY);

	if (fdir == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nr = read(fdir, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fdir);

	free(buff);

	return (nw);
}
