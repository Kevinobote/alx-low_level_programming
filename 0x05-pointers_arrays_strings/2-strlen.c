#include <stdio.h>

/**
 * _strlen - Returns the length of a str
 * @str: The string to get the lnght
 * Returns: The length of a str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
