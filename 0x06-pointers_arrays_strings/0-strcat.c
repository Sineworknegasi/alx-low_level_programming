#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
    dest = strcat(dest,src);
    return dest;
}
