#include "main.h"
/**
 *_pow_recursion returns the value of x raised to the power of y
 *@x: integer
 *@y: integer
 *Return: pow recursion
 */
int _pow_recursion(int x, int y)/*the main code of the recursion function*/
{
/*base condition*/
if (y < 0)/*base condition*/
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1)); /* Recursive call*/
}
