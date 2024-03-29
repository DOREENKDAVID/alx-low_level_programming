#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - a func that finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len = 0;

	if (filename == NULL)
	return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
	return (-1);
	if (text_content != NULL)
	len = write(fp, text_content, _strlen(text_content));
	close(fp);
	if (len == -1)
	return (-1);
	return (1);
}
