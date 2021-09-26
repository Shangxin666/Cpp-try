#include <stdio.h>

int main()
{
	int n , sum = 0;
	char ch;
	printf("This program sums a series of integers.\n");
	printf("Enter integers £¨0 to terminate£©: ");
	
	scanf("%d",&n);
	while((ch = getchar()) !=  '\n')
	{
	   scanf("%d",&n);
	   sum += n;
	}
	printf("The sum is: %d \n",sum);
	return 0;
 } 
