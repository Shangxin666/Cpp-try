#include <stdio.h>
int main (void)
{
	float val ,j;
	
	printf("Enter an amout:");
	scanf("%f",&val);
	j = val*1.05;
	printf("With tax added:%.2f",j);
	
	return 0;
 } 
