#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main- entry point of program here.
* Description: this is a program that print negative pr posative integer
* Return: always return zero.
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		{
		printf("%d is positive\n", n);
		}
	else if (n < 0)
		{
		printf("%d is negative\n", n);
		}
	else
		{
		printf("%d is zero\n", n);
		}
	return (0);
}
