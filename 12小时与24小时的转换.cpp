#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter a 24-hour time:  ");
	scanf("%d:%d",&num1,&num2);
	printf("%d",num2); 
	if(num1>12)
	  {num3 = num1 - 12;
	   printf("Equivalent 12-hour time: %d:%d PM",num3,num2);
	  }
	else
	   printf("Equivalent 12-hour time: %d:%d ",num1,num2);
	return 0;
}
