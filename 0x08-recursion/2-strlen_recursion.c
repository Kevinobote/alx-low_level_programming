#include "main.h"

/**
 * _strlen_recursion - The length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
