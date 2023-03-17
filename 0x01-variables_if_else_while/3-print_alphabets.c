#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the alphabet in lowercae, and then in upper
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');


	return (0);
}
