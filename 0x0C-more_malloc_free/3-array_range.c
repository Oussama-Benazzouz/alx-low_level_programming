#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The minimum value to include in the array
 * @max: The maximum value to include in the array
 *
 * Return: Pointer to the newly created array
 *         NULL if min > max or if memory allocation fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min + i;

    return (arr);
}
