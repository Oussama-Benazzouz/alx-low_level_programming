#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, terminates the process with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);

    if (p == NULL)
    {
        exit(98);
    }

    return p;
}
