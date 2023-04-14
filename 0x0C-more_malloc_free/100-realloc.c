#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the reallocated memory block
 *         NULL if the memory allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new size is equal to old size, return ptr */
    if (new_size == old_size)
        return (ptr);

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return (NULL);

        return (new_ptr);
    }

    /* If new size is 0, equivalent to free(ptr) */
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    /* Allocate new memory block */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    /* Copy contents from old memory block to new memory block */
    if (new_size > old_size)
        new_size = old_size;
    for (unsigned int i = 0; i < new_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    /* Free old memory block */
    free(ptr);

    return (new_ptr);
}
