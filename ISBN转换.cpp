#include <stdio.h>
int main()
{
	int num1,num2,num3,v1,v2,v3,v4,v5,num4;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%1d%1d%1d%1d%1d-%d",&num1,&num2,&num3,&v1,&v2,&v3,&v4,&v5,&num4);
	
	printf("GS1 prefix: %d\n",num1);
	printf("Group identifier: %d\n",num2);
	printf("Publisher code: %d\n",num3);
	printf("Item number: %d%d%d%d%d\n",v1,v2,v3,v4,v5);
	printf("Check digit: %d",num4);
	
	return 0;
 } 
