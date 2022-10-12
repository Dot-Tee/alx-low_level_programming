#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: the size of array
 * @cmp: is the function pointer
 * Return: index of first element that compare with "cmp" else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
