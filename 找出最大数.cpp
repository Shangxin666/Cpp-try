#include <stdio.h>
int main()
{
	float v2,max,n = 5;
	printf("Enter a number:");
	scanf("%f",&max);
	while(n>0)
	{
		--n;
		printf("Enter a number:");
		scanf("%f",&v2);
		if(max>v2)
		  max = max;
		else
		  max = v2;
	}
	printf("\nThe largest number entered was %.2f",max);
	return 0;
} 
