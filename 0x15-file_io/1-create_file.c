#include "main.h"

/**
* create_file - program creates a file
* @filename: filename
* @text_content: content written in the file
*
* Return: 1 if it success, -1 if it fails
*/

int create_file(const char *filename, char *text_content)
{
	int fdir;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	fdir = open(filename, 0_CREATE | O_WRONGLY | O_TRUNC, 0600);

	if (fdir == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	rwr = write(fdir, text_content, n_letters);

	if (rwr == -1)
		return (-1);

	close(fdir);

	return (1);
}
