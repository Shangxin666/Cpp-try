#include <stdio.h>
int main()
{
	int v1 ,v2,v3,v4,max1,max2,min1,min2,final_num1,final_num2;
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&v1,&v2,&v3,&v4);
	
	if(v1>v2)
	  {
	    max1 = v1; 
	    min1 = v2;
	  }
	else 
	  {
	    max1 = v2;
	    min1 = v1;
	  } 
	if(v3>v4)
	  {
	    max2 = v3;
		min2 = v4;	
	  }
	else
	  {
	  	max2 = v4;
	  	min2 = v3;
	  } 
	
	if(max1>max2)
	  final_num1 = max1;
	else
	  final_num1 = max2;
	if(min1<min2)
	  final_num2 = min1;
	else
	  final_num2 = min2;
	
	printf("Largest: %d\nSmallest:%d\n",final_num1,final_num2);
	
	
	return 0; 
}
