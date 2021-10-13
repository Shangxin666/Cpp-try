#include <stdio.h>
int main()
{
	int fib_number[40],i;
	printf("Enter first two numbers: ");
	scanf("%d %d",&fib_number[0],&fib_number[1]);
	
	for(i=2;i<=39;i++)
	{
	fib_number[i]=fib_number[i-2] + fib_number[i-1];
    printf(" %d",fib_number[i]);
	}
	return 0;
}
