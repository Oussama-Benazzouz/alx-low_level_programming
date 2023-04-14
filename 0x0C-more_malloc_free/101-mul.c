#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_number - checks if a string is a number
 * @s: the string to check
 *
 * Return: 1 if the string is a number, otherwise 0
 */
int is_number(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    unsigned long int num1, num2, product;
    
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_number(argv[1]) || !is_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    num1 = atol(argv[1]);
    num2 = atol(argv[2]);
    product = num1 * num2;

    printf("%lu\n", product);
    return (0);
}
