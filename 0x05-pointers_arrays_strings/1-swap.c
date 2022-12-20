#include "main.h"

/**
 *swap_int - Swaps the values of 2 integers.
 *@a: int a
 *@b: int b
 *Return:void.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
