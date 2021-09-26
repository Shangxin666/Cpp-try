#include <stdio.h>
int main (void)
{
	int X = 0,val;
	
	printf("3*X*X*X*X*X+2*X*X*X*X-5*X*X*X-X/X+7*X-6=\n"); 
	printf("Enter X:");
	scanf("%d",&X);
	val = 3*X*X*X*X*X+2*X*X*X*X-5*X*X*X-X/X+7*X-6;
	printf("The answer is:%d",val);

	return 0;
}
