#include "search_algos.h"

/**
 * linear_search - A function that searches for a value
 *                 in an array of integers.
 * @array: Type pointer of given array
 * @size: Size of elements in the array
 * @value: Int  to be searched
 * Return: Value, or -1 if value not present
 */

int linear_search(int *array, size_t size, int value)
{
	int intValue;

	if (array == NULL)
		return (-1);
	for (intValue = 0; intValue < (int)size; intValue++)
	{
		printf("Value checked array[%d] = [%d]\n", intValue, array[intValue]);
		if (array[integer] == value)
			return (intValue);
	}
	return (-1);
}
