#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */
int _evaluate(int n)
{
return (square(n, 1));
}
/**
 *square - find square root
 *@n: int to find square root
 *@val: square root
 *Return: int
 */
int square(int n, int val)
{
if (val * val < n)
return  (square(n, val + 1);
else if (val * val == n)
return (val);
else
return (-1);
}
