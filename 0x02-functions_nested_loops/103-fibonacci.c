#include "main.h"
#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonacci sequence
*        terms not exceeding 4000000.
*
* Return: Always 0.
*/

int main(int i){ 
unsigned long fib1 = 0, fib2 = 1, sum;

for (i = 0; i < 4000000; i++) 
{
	sum = fib1 + fib2;
	printf("%lu", sum);

	fib1 = fib2;
	fib2 = sum;

	if ((i % 2) == 0 )
		printf("\n");
	return(0);
}
}
