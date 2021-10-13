#include <stdio.h>

void max_min(int a[],int n,int *max,int *min);

int main(void)
{
	int b[10],i,big,small;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
	  scanf("%d",&b[i]);
	  
	max_min(b,10,&big,&small);
	
	printf("Largest:%d\n",big);
	printf("Smallest:%d",small);
	
	return 0;
}

void max_min(int a[],int n,int *max,int *min)
{
	int i;
	*max = a[0];
	*min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > *max)
	      *max = a[i];	   
		if(a[i] < *min)
		  *min = a[i];
    }
}
