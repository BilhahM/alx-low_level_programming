#include "main.h"
/**
 * print_rev  - print in reverse 
 * @str: string to print
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		print_rev(s[c]);
	}
       return (0);
}
