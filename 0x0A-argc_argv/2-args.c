#include <stdio.h>
#include "main.h"
/**
 *main - prints all arguments it receives
 *@argc: Count arguments
 *@argv: Arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*declarating varaiable*/
int i = 0;

while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
