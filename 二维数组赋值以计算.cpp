#include <stdio.h>
int main()
{
    int row,col ;
	int a[5][6] ; 
    printf("Enter row 1: ");
    
    for(row = 0 ;row <5; row++)
    {
    	for(col = 0;col < 5;col++)
    	{
    		scanf("%d",&a[row][col]);
		}
	    if(row<4)printf("Enter row %d: ",row+2);
	}

} 
