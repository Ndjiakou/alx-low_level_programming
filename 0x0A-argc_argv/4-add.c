#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *isInteger - check if it is an interger
 *@str: array str
 *
 *Return; Always 0 (Success)
 */
int isInteger(const char *s)
{
/*Declaring variables*/
int i = 0;

while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (1);
i++;
}
return (0);
}
/**
 *main - adds positive numbers
 *@argc: int
 *@argv: list
 *
 *return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum = 0;

while (--argc)
{
if (isInteger(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
printf("%i\n", sum);
return (0);
}
