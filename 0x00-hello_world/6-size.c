#include<stdio.h>
int main(void)
{
	int x;
	char y;
	float z;
	long int q;
	long long int w;
	printf("size of an char: %zu bytes \n", (unsigned long)sizeof(charType));
	printf("size of an int: %zu bytes \n", (unsigned long)sizeof(intType));
       	printf("size of an long int: %zu bytes \n", (unsigned long)sizeof(longType));
	printf("size of an long long int: %zu bytes \n", (unsigned long)sizeof(w));
	 printf("size of an float: %lu bytes \n", (unsigned long)sizeof(z));
	return(0);
}
