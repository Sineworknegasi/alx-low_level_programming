#include"head.h"
/**
 * print-diagonal - prints diagonal line
 * @n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
        int i;
        int b;
        if (n > 0)
        {
                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < n; j++)
                        {
                                if (j == i)
                                {
                                        _putchar(92);
                                }
                                else
                                {
                                        _putchar(' ');
                                }
                                _putchar('\n');
                        }
                }
        }
        else
        {
                _putchar ('\n');
        }
}
