#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e;
	char low;

	for (e = '0'; e <= '9'; e++)
	putchar(e);

	for (low = 'k'; low <= 'v'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
