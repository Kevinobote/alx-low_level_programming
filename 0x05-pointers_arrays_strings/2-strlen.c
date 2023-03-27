#include <stdio.h>

/**
 * _strlen - Returns the length of a str
 * @str: The string to get the lnght
 * Return: Always 0 (The length of @str.)
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
