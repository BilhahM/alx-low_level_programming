#include "main.h"

/**
 * int _isalpha: Check for alphabetic cahracters
 *
 * @C: The character in ASCII code
 *
 * Return: 1 if it has alphabets
 *
 * Return: 0 if not
 */

int _isalpha(int c)

{
	 if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	       return (1);
	}
	 else
	{
	       return (0);
	}
	_putchar('\n');
}	
