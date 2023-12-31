#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int xletters;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (xletters = 0; text_content[xletters]; xletters++)
		;

	rwr = write(f, text_content, xletters);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
