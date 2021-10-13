#include <stdio.h>

#define N 10

void quicksort(int a[] , int low, int high);
int split(int a[],int low,int high);

int main(void)
{
	int a[N],i;
	
	printf("Enter %d numbers to be sorted: ",N);
	for(i = 0;i < N;i++)
	   scanf("%d",&a[i]);
	
	quicksort(a, 0, N - 1);
	
	printf("In sorted order: ");
	for(i = 0;i < N;i++)
	   printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}

void quicksort (int a[] ,int low,int high)
{
	int middle;
	
	if(low >= high) return;
	middle = split (a ,low, high); // middle = 3
	quicksort(a, low,middle - 1);  //    0 2  
	quicksort(a, middle + 1,high); //    1 9
} 

int split(int a[],int low ,int high)
{
	int part_element = a[low];  //part_element = 9
	
	for(;;)
	{                                                  // 9 16 47 82 4 66 12 3 25 51    
		while(low < high && part_element <= a[high])   //0 < 9 9 <= 51
		  high--;                                      //high = 7
		if(low >= high) break; 
		a[low++] = a[high];                              // 3 16 47 82 4 66 12 3 25 51   
		                                               
		while(low < high && a[low] <= part_element)    
		  low++;
		if(low >= high) break;
		a[high--] = a[low];        // 3 4 9   12 25 47  51 66  82
	}                             
	
	a[high] = part_element;     
	return high;
}
