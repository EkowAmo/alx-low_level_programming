#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagnals of a square matrix interger 
 * @a: pointer to pieces to print 
 *@size: size of pointer
 *
 *Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, total1 = 0, total2 = 0;
	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 = total2 + a[n];
	printf("%d, %d\n", total1, total2);
}
