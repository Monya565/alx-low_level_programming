#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of random number and states 
 *        whether is grater than 5 or less than 6 or 0.
 * Return: Always 0.
**/       
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
printf("Last digit of %d is %d ", n, m);
if (m > 5)
printf("and is greater than 5");
else if (m == 0)
printf(" and is 0");
else
printf("and is less than 6 and not 0");
return (0);
}
