#include "main.h"

/*
* _memset - fills memory area with a constant byte
* @n: number of bytes to be used
* @b: char to be used
* @s: address to the memory area
* Return: return pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n);
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
