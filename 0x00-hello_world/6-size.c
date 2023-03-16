#include <stdio.h>
/**
 * main - Program that prints the size of various types
 * Return: 0 (Pass)
 */
int main(void)
{
char k;
int e;
long int v;
long long int i;
float n;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(n));
return (0);
}
