#include<main.h>
/**
 * write the number from 0 to 9.
 * @c: print int
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
        int c;


        for (c = 0; c <= 9; c++)
        {
                putchar (c + '0');
                putchar ('\n');
        }
        return (0);
}
