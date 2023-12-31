#include "main.h"

/**
 * print_diagsums-  prints the sum of the two diagonals
 * @a: array 2d
 * @size: size of the array 2d
 */
void print_diagsums(int *a, int size)
{
	int i = 0, add = 0, j = size - 1;

	for (i = 0; i < size; i++)
	{
		add += a[i];
		j = j - 2;
		a = a + size;
	}
	printf("%d, ", add);
}
