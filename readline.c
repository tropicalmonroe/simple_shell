#include "main.h"

/**
 * read_line - reads the input str
 * @i_eof: value of getline funct
 * Return: input str
 */

char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
