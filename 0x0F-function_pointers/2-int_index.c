#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @size: the number of elements in the array
 * @array: the array in which operation is to be peerformed
 * @cmp: a pointer to the function to be used to compare values
 * Return: return the index of the first element
 * for which cmp does nit return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int findex;

	if (!array || !size || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			findex = i;
			break;
		}
		else
			findex = -1;
	}

	return (findex);
}
