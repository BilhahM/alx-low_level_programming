#include "main.h"
#include <stdio.h>
/**
 * _strlen - the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
