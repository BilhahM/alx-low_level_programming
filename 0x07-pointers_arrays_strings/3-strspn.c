#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: bytes of match
 * Return: number of bytes match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	unsigned int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
				res++;
		}
	}
	return (res);
}
