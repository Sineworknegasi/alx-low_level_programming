#include<string.h>
/**
 * _memset - fills n bytes of memory
 *
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s,b,n));
}
