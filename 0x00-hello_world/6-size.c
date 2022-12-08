#include<stdio.h>
/**
 * main -Entry point
 * 
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	char y;
	float z;
	long int q;
	long long int w;
	printf("size of a char: %zu bytes \n", (unsigned long)sizeof(y));
	printf("size of an int: %zu bytes \n", (unsigned long)sizeof(x));
       	printf("size of a long int: %zu bytes \n", (unsigned long)sizeof(q));
	printf("size of a long long int: %zu bytes \n", (unsigned long)sizeof(w));
	 printf("size of a float: %lu bytes \n", (unsigned long)sizeof(z));
	return(0);
}
