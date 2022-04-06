#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *check_num - check - string there are digit
 *@str: array str
 *
 *Return; Always 0 (Success)
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int a;
a = 0;
while (a < strlen(str)) /*count string*/
{
/*he isdigit() method returns True if all the characters are digits, otherwise False.*/
if (!isdigit(str[a]))
{
return (0);
}
a++;
}
return (1);
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
