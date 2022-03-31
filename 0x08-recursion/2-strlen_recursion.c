#include "main.h"
/**
 *_strlen_recursion - length of a string
 *@s: pointer block of memory to fill
 *Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s == '\0')
{
return (n);
}
else
{
n += _strlen_recursion(s + 1) + 1;
return (n);
}
}
