#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: pointer 
 *Return: factorial
 */
int factorial(int n)
{
if (n > 0)/*base condition*/
return (n * factorial(n - 1));
else if (n == 0)
return (1);/*base condition*/
else
return (-1);
}
