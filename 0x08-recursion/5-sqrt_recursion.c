#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 *square - find square root
 *@n: int to find square root
 *@val: square root
 *Return: int
 */
int square(int n, int valeur)
{
if (valeur * valeur == n)/*base condition*/
return (valeur);
else if (valeur * valeur < n)
return  (square(n, valeur + 1));
else
return (-1);
}

