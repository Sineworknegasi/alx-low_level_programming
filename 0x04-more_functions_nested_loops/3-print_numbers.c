#include<main.h>
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
        int c;

        while (c < 10)
        {
                _putchar(c + '0');
                c++;
        }


        _putchar('\n');
}
