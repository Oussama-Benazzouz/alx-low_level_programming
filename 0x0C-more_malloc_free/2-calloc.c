#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and sets memory to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size is 0 or if memory allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        *((char *)ptr + i) = 0;

    return (ptr);
}
