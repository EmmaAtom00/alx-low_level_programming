#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on easch element
 * @array: the array in which the action is to be performed
 * @size: the size of the array
 * @action: a pointer to the function needed to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
