#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * return: always 0 succesful/correct !
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("xi is positive\n", n);
}
else if (n < 0)
{
	printf("xi is negative\n", n);
}
else
{
	printf("xi is zero\n", n);
}
return (0);
}
