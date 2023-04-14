#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of the array
 * @size: size in bytes of each element of the array
 *
 * Return: pointer to allocated memory, or NULL if nmemb or size is 0, or if
 * malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *ptr;
  unsigned int i, bytes;

  if (nmemb == 0 || size == 0)
    return (NULL);

  bytes = nmemb * size;
  ptr = malloc(bytes);

  if (ptr == NULL)
    return (NULL);

  for (i = 0; i < bytes; i++)
    ptr[i] = 0;

  return ((void *)ptr);
}
