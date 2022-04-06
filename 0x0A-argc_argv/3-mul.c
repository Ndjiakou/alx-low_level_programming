#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the multiplication of two integers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
if (argc != 3)/*si on a pasrecu deux arguments afficher le message d'erreur*/
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));/* on affiche la multiplisation de deux entiers*/
return (0);
}
