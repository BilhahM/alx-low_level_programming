#include "main.h"
/**
 * puts2 - print even positions
 * @str: string to print
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;
	int j =0;

	while (str[j] != '\0')
	{
		j++;
	}

		for (i = 0; i < j; i += 2)
		{
		puts2(str[i]);
		}
	puts2('\n');
}
