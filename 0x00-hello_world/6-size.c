#include <stdio.h>
/**
 * Main - A program taht prints out the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float g;

	printf("size of an int: %d bytes(s)\n", sizeof(d));
	printf("size of a char: %d bytes(s)\n", sizeof(c));
	printf("size of a long int: %d byte(s)\n", sizeof(e));
	printf("size of a long long int: %d byte(s)\n", sizeof(f));
	printf("size of a float: %d byte(s)\n", sizeof(g));
	return (0);
}
